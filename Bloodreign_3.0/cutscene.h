#ifndef cutscene_H
#define cutscene_H

#include "igraphics.h"
#include<cstdlib>
#include<iostream>
#include<string>

#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
//#define buttonMusic mciSendString("open \"button sound.wav\" type waveaudio alias buttonSound", NULL, 0, NULL);
//#define bgMusic mciSendString("open \"music_bg.wav\" type mpegvideo alias bgmusic", NULL, 0, NULL);
/*#define TitleM mciSendString("open \"Music/Title Music.wav\" type waveaudio alias TitleMusic", NULL, 0, NULL);
#define L1M mciSendString("open \"music/yuhu.wav\" type waveaudio alias L1Music", NULL, 0, NULL);
#define L2M mciSendString("open \"New/BG/level-2.wav\" type waveaudio alias L2Music", NULL, 0, NULL);
#define ThudM mciSendString("open \"Resources/music/thud.wav\" type waveaudio alias ThudMusic", NULL, 0, NULL);
#define collectM mciSendString("open \"music/collect.wav\" type waveaudio alias collectMusic", NULL, 0, NULL);*/
/*#define TitleM mciSendString("open \"Title Music.wav\" type waveaudio alias TitleMusic", NULL, 0, NULL);
#define L1M mciSendString("open \"yuhu.wav\" type waveaudio alias L1Music", NULL, 0, NULL);
#define L2M mciSendString("open \"level-2.wav\" type waveaudio alias L2Music", NULL, 0, NULL);
#define ThudM mciSendString("open \"thud.wav\" type waveaudio alias ThudMusic", NULL, 0, NULL);
#define collectM mciSendString("open \"collect.wav\" type waveaudio alias collectMusic", NULL, 0, NULL);*/
using namespace std;

enum gameState
{
	INITIAL, STARTING, BEFOREL1G1, L1G1, BEFOREL1G2, L1G2, BEFOREL2G1, L2G1, BEFOREL2G2, UNLOCKED, L2G2, AFTERL2, BEFOREL3, L3, CONGRATS, AFTERL3
};

gameState currentState = INITIAL;

int screenX = 1143;
int screenY = 600;
int startScene[4];
int beforeL1G1;
int beforeL1G2;
int beforeL2G1;
int beforeL2G2;
int afterL2, afterL3;
int beforeL3;
int congrats;
int unlocked;
bool flag = false;
bool scene2passed = false;

int startSceneIndex = 0;

void loadCutscene(){
	startScene[0] = iLoadImage("Resources\\Images\\cutscene\\1.jpg");
	startScene[1] = iLoadImage("Resources\\Images\\cutscene\\2.jpg");
	startScene[2] = iLoadImage("Resources\\Images\\cutscene\\3.jpg");
	startScene[3] = iLoadImage("Resources\\Images\\cutscene\\4.jpg");

	beforeL1G1 = iLoadImage("Resources\\Images\\cutscene\\beforeL1G1.jpg");
	beforeL1G2 = iLoadImage("Resources\\Images\\cutscene\\beforeL1G2.jpg");
	beforeL2G1 = iLoadImage("Resources\\Images\\cutscene\\beforeL2G1.jpg");
	beforeL2G2 = iLoadImage("Resources\\Images\\cutscene\\beforeL2G2.jpg");
	beforeL3 = iLoadImage("Resources\\Images\\cutscene\\beforeL3.jpg");
	afterL2 = iLoadImage("Resources\\Images\\cutscene\\afterL2.jpg");
	congrats = iLoadImage("Resources\\Images\\cutscene\\CONGRATS.jpg");
	unlocked = iLoadImage("Resources\\Images\\cutscene\\unlocked.jpg");
	afterL3 = iLoadImage("Resources\\Images\\cutscene\\kut.jpg");
}

void cutSceneDraw(){
	if (currentState == STARTING){
		iShowImage(0, 0, screenX, screenY, startScene[startSceneIndex]);
	}
	if (currentState == BEFOREL1G1){
		iShowImage(0, 0, screenX, screenY, beforeL1G1);
	}
	if (currentState == BEFOREL1G2){
		iShowImage(0, 0, screenX, screenY, beforeL1G2);
	}
	if (currentState == BEFOREL2G1){
		iShowImage(0, 0, screenX, screenY, beforeL2G1);
	}
	if (currentState == BEFOREL2G2){
		iShowImage(0, 0, screenX, screenY, beforeL2G2);
	}
	if (currentState == AFTERL2){
		iShowImage(0, 0, screenX, screenY, afterL2);
	}
	if (currentState == BEFOREL3){
		iShowImage(0, 0, screenX, screenY, beforeL3);
	}
	if (currentState == AFTERL3){
		iShowImage(0, 0, screenX, screenY, afterL3);
	}
	if (currentState == CONGRATS){
		iShowImage(0, 0, screenX, screenY, congrats);
	}
	if (currentState == UNLOCKED){
		iShowImage(0, 0, screenX, screenY, unlocked);
	}
	if (startSceneIndex > 3 && !scene2passed){
		currentState = BEFOREL1G1;
		scene2passed = true;
	}
	if (flag){
		currentState = BEFOREL3;
	}
}

void cutSceneTransition(unsigned char key){
	if (currentState == STARTING){
		if (key == ' '&&startSceneIndex <= 3){
			startSceneIndex++;
			/*if (startSceneIndex >= 3){
				currentState = BEFOREL1G1;
			}*/
		}
	}
	if (currentState == BEFOREL1G1){
		if (key == ' '){
			currentState = L1G1;
			//playsound added
			PlaySound("yuhu.wav", NULL, SND_ASYNC);
		}
	}
	if (currentState == BEFOREL1G2){
		if (key == ' '){
			currentState = L1G2;
			//playsound added
			PlaySound("yuhu.wav", NULL, SND_ASYNC);
		}
	}
	if (currentState == BEFOREL2G1){
		if (key == ' '){
			currentState = L2G1;
			//playsound added
			PlaySound("level-2.wav", NULL, SND_ASYNC);
		}
	}
	if (currentState == BEFOREL2G2){
		if (key == ' '){
			currentState = UNLOCKED;
		}
	}
	if (currentState == UNLOCKED){
		if (key == ' '){
			currentState = L2G2;
			//playsound added
			PlaySound("level-2.wav", NULL, SND_ASYNC);
		}
	}
	if (currentState == AFTERL2){
		if (key == ' '){
			flag = true;
		}
	}
	if (currentState == BEFOREL3){
		if (key == ' '){
			currentState = L3;
			//playsound added
			PlaySound("Final-level.wav", NULL, SND_ASYNC);
		}

	}
	/*if (currentState == AFTERL3){
		if (key == ' '){
			currentState = CONGRATS;
		}
	}*/
	
}

#endif