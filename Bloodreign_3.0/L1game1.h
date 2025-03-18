#ifndef L1game1_H
#define L1game1_H

#include "MainMenu.h"

int n = 7;
int maxClicks = n + 4;
int totalFrames = 4;
int mouseX = 0, mouseY = 0;
int boxX[7], boxY[7], boxWidth[7], boxHeight[7], boxSpeed[7];
bool boxCaught[7];
int remainingClicks = maxClicks;
int score = 0;
int nn;
int images[4];
int rimages[4];
int frameIndex = 0;
bool lefted[7];
bool righted[7];
bool gameOverL1G1 = false, gameWonL1G1 = false;
int rock;
int gO;
int initialX = 100 * 0.75;
int initialY = 150 * 0.75;
void LoadL1G1() {
	nn = iLoadImage("forestbg.jpg");
	rock = iLoadImage("rock.png");

	images[0] = iLoadImage("fly\\1.png");
	images[1] = iLoadImage("fly\\2.png");
	images[2] = iLoadImage("fly\\3.png");
	images[3] = iLoadImage("fly\\4.png");



	rimages[0] = iLoadImage("refly\\1.png");
	rimages[1] = iLoadImage("refly\\2.png");
	rimages[2] = iLoadImage("refly\\3.png");
	rimages[3] = iLoadImage("refly\\4.png");
	gO = iLoadImage("Game over.jpg");

}
void initializeBoxesL1G1() {
	

	initialX = 100 * 0.75;
	initialY = 150 * 0.75;
	for (int i = 0; i < n; i++) {
		boxX[i] = initialX;
		boxY[i] = initialY + i * 70;
		boxWidth[i] = 80 * 0.75;
		boxHeight[i] = 80 * 0.75;
		boxSpeed[i] = (20 + i * 3)*0.75;
		boxCaught[i] = false;
		lefted[i] = false;
		righted[i] = true;
	}
	gameOverL1G1 = false;
	gameWonL1G1 = false;
}
void BoxesL1G1() {
	if (!gameOverL1G1)
	return;

	 initialX = 100 * 0.75;
	 initialY = 150 * 0.75;
	for (int i = 0; i < n; i++) {
		boxX[i] = initialX;
		boxY[i] = initialY + i * 70;
		boxWidth[i] = 80 * 0.75;
		boxHeight[i] = 80 * 0.75;
		boxSpeed[i] = (20 + i * 3)*0.75;
		boxCaught[i] = false;
		lefted[i] = false;
		righted[i] = true;
	}
	gameOverL1G1 = false;
	gameWonL1G1 = false;
}

//, int* mouseX, int* mouseY, int* rock, bool boxCaught[], bool left[], bool right[],

void drawL1G1(int* remainingClicks){
	iShowImage(0, 0, 1143, 600, nn);
	if (*remainingClicks != 0)
	{
		iShowImage(mouseX - 10, mouseY - 10, 30, 35, rock);
	}
	for (int i = 0; i < n; i++) {
		if (!boxCaught[i]) {
			if (lefted[i]) {
				iShowImage(boxX[i], boxY[i], boxWidth[i], boxHeight[i], images[frameIndex]);
			}
			else if (righted[i]) {
				iShowImage(boxX[i], boxY[i], boxWidth[i], boxHeight[i], rimages[frameIndex]);
			}
		}
	}
	int blockX = 720, blockY = 10, blockSize = 40;
	for (int i = (n - score); i > 0; i--)
	{
		iShowImage(blockX + i * (blockSize + 13), blockY, blockSize, blockSize, images[0]);
	}

	blockX = 10, blockY = 10, blockSize = 40;
	for (int i = 0; i < *remainingClicks; i++) {

		iShowImage(blockX + i * (blockSize + 5), blockY, blockSize, blockSize + 10, rock);
	}
	//this is where the solution lies(hopefully)
	if (gameOverL1G1) {
		iShowImage(0, 0, 1143, 600, gO);
		
		//currentState = BEFOREL1G2;
	}
	else if (gameWonL1G1) {
		iSetColor(0, 255, 0);
		//iText(750 * 0.75, 400 * 0.75, "WINNER WINNER CHICKEN DINNER!", GLUT_BITMAP_HELVETICA_18);
		//subState = 1;
		currentState = BEFOREL1G2;
	}
}

void moveBoxesL1G1() {
	for (int i = 0; i < n; i++) {
		boxX[i] += boxSpeed[i];


		if (boxX[i] + boxWidth[i] >= 1143) {
			boxSpeed[i] *= -1;
			lefted[i] = true;
			righted[i] = false;
		}

		else if (boxX[i] <= 0) {
			boxSpeed[i] *= -1;
			righted[i] = true;
			lefted[i] = false;
		}
	}
}

void updateAnimationFrameL1G1() {
	frameIndex = (frameIndex + 1) % totalFrames;
}

void checkGameStateL1G1() {
	bool allCaught = true;
	for (int i = 0; i < n; i++) {
		if (!boxCaught[i]) {
			allCaught = false;
			break;
		}
	}
	//checks if all the birds have been caught or not. if yes, then game won is true else is no clicks remain then game over is true
	if (allCaught) {
		gameWonL1G1 = true;
		gameOverL1G1 = false;
	}
	else if (remainingClicks == 0) {
		gameOverL1G1 = true;
		gameWonL1G1 = false;
	}
}

void passiveMouseL1G1(int mx, int my, int* mouseX, int* mouseY) {
	*mouseX = mx;
	*mouseY = my;
}

void MouseL1G1(int button, int state, int mx, int my, int* remainingClicks, bool* gameOverL1G1, bool* gameWonL1G1, bool boxCaught[], int boxX[], int boxY[], int boxHeight[], int boxWidth[], int* score) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && remainingClicks > 0 && !(*gameOverL1G1) && !(*gameWonL1G1)) {
		(*remainingClicks)--;
		for (int i = 0; i < n; i++) {
			if (!boxCaught[i] && mx >= boxX[i] && mx <= boxX[i] + boxWidth[i] &&
				my >= boxY[i] && my <= boxY[i] + boxHeight[i]
				) {
				boxCaught[i] = true;
				(*score)++;
				//PlaySound("music\\collect.wav", NULL, SND_ASYNC);
				//mciSendString("play collectMusic from 0", NULL, 0, NULL);
				break;
			}
		}
		checkGameStateL1G1();
	}
}

void KeyboardL1G1(unsigned char key, int* remainingClicks, const int* maxClicks, int* score) {
	if (key == 'r' || key == 'R') {
		BoxesL1G1();
		*remainingClicks = *maxClicks;
		*score = 0;
	}


}
void MusicL1G1(){
	PlaySound("music\\yuhu.wav", NULL, SND_ASYNC);
}

#endif