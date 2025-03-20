#ifndef MainMenu_H
#define MainMenu_H

#include "cutscene.h"


int initial, screen, startButton, creditButton, optButton, exitButton, credits,opt;
int initialScreen = 1, hoverStart = 0, hoverCredit = 0, hoverOption = 0, hoverExit = 0, musicOn = 0;
int creditScreen = 0, optionScreen = 0;
int musicFlag = 0;
bool loaded = false;

void LoadL0() {
	initial = iLoadImage("Image\\ss.jpg");
	screen = iLoadImage("Image\\screen.bmp");
	startButton = iLoadImage("Image\\st.png");
	creditButton = iLoadImage("Image\\cr.png");
	opt = iLoadImage("Image\\ctrl.jpg");
	optButton = iLoadImage("Image\\op.png");
	exitButton = iLoadImage("Image\\exit.png");
	credits = iLoadImage("Image\\credits.png");
}

void drawL0(){
	if (loaded == false){
		LoadL0();
		loaded = true;
	}
	if (initialScreen) {
		iShowImage(0, 0, screenX, screenY, initial);
	}
	else if (creditScreen) {
		iShowImage(0, 0, screenX, screenY, credits);
	}
	else if (optionScreen) {
		iShowImage(0, 0, screenX, screenY, opt);
	}
	else {
		iShowImage(0, 0, screenX, screenY, screen);

		if (hoverStart) {
			iShowImage(1003 * 0.75, 556 * 0.75, 255 * 0.75, 90 * 0.75, startButton);
		}
		else if (hoverOption) {
			iShowImage(1005 * 0.75, 420 * 0.75, 253 * 0.75, 84 * 0.75, optButton);
		}
		else if (hoverCredit) {
			iShowImage(1014 * 0.75, 291 * 0.75, 254 * 0.75, 82 * 0.75, creditButton);
		}
		else if (hoverExit) {
			iShowImage(1014 * 0.75, 170 * 0.75, 255 * 0.75, 85 * 0.75, exitButton);
		}
	}
}

void passiveMouseL0(int mx, int my, int* hoverStart, int* hoverCredit, int* hoverOption, int* hoverExit){
	*hoverStart = ((mx >= 1003 * 0.75 && mx <= 1260 * 0.75) && (my >= 556 * 0.75 && my <= 646 * 0.75));
	*hoverOption = ((mx >= 1005 * 0.75 && mx <= 1258 * 0.75) && (my >= 420 * 0.75 && my <= 504 * 0.75));
	*hoverCredit = ((mx >= 1014 * 0.75 && mx <= 1268 * 0.75) && (my >= 291 * 0.75 && my <= 373 * 0.75));
	*hoverExit = ((mx >= 1014 * 0.75 && mx <= 1269 * 0.75) && (my >= 170 * 0.75 && my <= 255 * 0.75));
}

void mouseL0(int button, int state, int mx, int my, int* initialScreen, int* optionScreen, int* creditScreen){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		if ((mx >= 1003 * 0.75 && mx <= 1260 * 0.75) && (my >= 556 * 0.75 && my <= 646 * 0.75)){
			currentState = STARTING;
		}
		else if ((mx >= 1014 * 0.75 && mx <= 1269 * 0.75) && (my >= 170 * 0.75 && my <= 255 * 0.75)) {
			exit(0);
		}
		else if ((mx >= 1005 * 0.75 && mx <= 1258 * 0.75) && (my >= 420 * 0.75 && my <= 504 * 0.75)) {
			*initialScreen = 0;
			*optionScreen = 1;

		}
		else if ((mx >= 1014 * 0.75 && mx <= 1268 * 0.75) && (my >= 291 * 0.75 && my <= 373 * 0.75)) {
			*initialScreen = 0;
			*creditScreen = 1;
		}
	}
}

void KeyboardL0(unsigned char key, int* initialScreen, int* musicOn, int* musicFlag, int* initial, int* optionScreen, int* creditScreen) {
	if (key == ' ') {
		*initialScreen = 0;
		*musicOn = 1;

		if (*musicOn == 1 && *musicFlag == 0) {
			PlaySound("Music\\Title Music.wav", NULL, SND_ASYNC);
			//TitleM
				//mciSendString("play TitleMusic repeat", NULL, 0, NULL);
			*musicFlag = 1;
		}
	}
	if (key == 27) {
		*initial = 1;
		*optionScreen = 0;
		*creditScreen = 0;
	}
}


#endif