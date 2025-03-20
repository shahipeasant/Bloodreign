#ifndef L1game2_H
#define L1game2_H

#include "L1game1.h"

//initialize variables

int windowHeight = 600, windowWidth = 1123;
bool gameStateL1G2 = true;
int tm = 25;
bool win = false;
int life = 5;
double hpWidthL1G2 = 210;
bool fwdFace = true;
bool revFace = false;
int i = 0;
int f = 0;
int r = 0;

//player struct
struct player{
	int x, y;
	int dx, dy;
	int width, height;
	bool Default_Animation;
	bool moving, attack, spell;
	bool Reverse;
	int health;

};
//rock struct
struct rocked{
	int x, y, dy, height, width;
};


player  kan = { 100, 50, 10, 10, 130, 130, true, false, false, false, 100 };
rocked rock1 = { kan.x, windowHeight, 10, 50, 50 };
rocked rock2 = { rand() % ((windowWidth - 70) / 4), windowHeight + 50, 6, 50, 50 };
rocked rock3 = { rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 4), windowHeight + 100, 10, 50, 50 };
rocked rock4 = { (rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 2)), windowHeight + 150, 10, 50, 50 };
rocked rock5 = { rand() % (windowWidth - 70) / 4 + 3 * ((windowWidth - 70) / 4), windowHeight + 200, 10, 50, 50 };
//rock rock6 = { rand() % (windowWidth - 100), windowHeight, 10, 70, 70 };

// image indices
int runForward[8];
int runReverse[8];
int kanDefault;
int kanRevdefault;
int stone;
int mountainBG;
int bg[20];
int hpImg;
int timeBar;
int currentBg = 0;
int totalBg = 20;
int watch;

//load images
bool imagesLoadedL1G2 = false;
void loadImagesL1G2(){
	stone = iLoadImage("Resources\\Images\\stone\\1.png");
	mountainBG = iLoadImage("Resources\\Images\\BG\\mountainBG.png");
	watch = iLoadImage("Resources\\Images\\HPbar\\clock.png");

	hpImg = iLoadImage("Resources\\Images\\HPbar\\emptyHPbar(2).png");
	timeBar = iLoadImage("Resources\\Images\\HPbar\\TimeBarImg(2).png");
	kanRevdefault = iLoadImage("Resources\\Images\\Character\\default\\revDef.png");
	kanDefault = iLoadImage("Resources\\Images\\Character\\default\\def.png");
	gO = iLoadImage("Game over.jpg");


	bg[0] = iLoadImage("Resources\\Images\\BG\\bg (1).png");
	bg[1] = iLoadImage("Resources\\Images\\BG\\bg (2).png");
	bg[2] = iLoadImage("Resources\\Images\\BG\\bg (3).png");
	bg[3] = iLoadImage("Resources\\Images\\BG\\bg (4).png");
	bg[4] = iLoadImage("Resources\\Images\\BG\\bg (5).png");
	bg[5] = iLoadImage("Resources\\Images\\BG\\bg (6).png");
	bg[6] = iLoadImage("Resources\\Images\\BG\\bg (7).png");
	bg[7] = iLoadImage("Resources\\Images\\BG\\bg (8).png");
	bg[8] = iLoadImage("Resources\\Images\\BG\\bg (9).png");
	bg[9] = iLoadImage("Resources\\Images\\BG\\bg (10).png");
	bg[10] = iLoadImage("Resources\\Images\\BG\\bg (11).png");
	bg[11] = iLoadImage("Resources\\Images\\BG\\bg (12).png");
	bg[12] = iLoadImage("Resources\\Images\\BG\\bg (13).png");
	bg[13] = iLoadImage("Resources\\Images\\BG\\bg (14).png");
	bg[14] = iLoadImage("Resources\\Images\\BG\\bg (15).png");
	bg[15] = iLoadImage("Resources\\Images\\BG\\bg (16).png");
	bg[16] = iLoadImage("Resources\\Images\\BG\\bg (17).png");
	bg[17] = iLoadImage("Resources\\Images\\BG\\bg (18).png");
	bg[18] = iLoadImage("Resources\\Images\\BG\\bg (19).png");
	bg[19] = iLoadImage("Resources\\Images\\BG\\bg (20).png");


	runForward[0] = iLoadImage("Resources\\Images\\Character\\Run\\R1.png");
	runForward[1] = iLoadImage("Resources\\Images\\Character\\Run\\R2.png");
	runForward[2] = iLoadImage("Resources\\Images\\Character\\Run\\R3.png");
	runForward[3] = iLoadImage("Resources\\Images\\Character\\Run\\R4.png");
	runForward[4] = iLoadImage("Resources\\Images\\Character\\Run\\R5.png");
	runForward[5] = iLoadImage("Resources\\Images\\Character\\Run\\R6.png");
	runForward[6] = iLoadImage("Resources\\Images\\Character\\Run\\R7.png");
	runForward[7] = iLoadImage("Resources\\Images\\Character\\Run\\R8.png");

	runReverse[0] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R1.png");
	runReverse[1] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R2.png");
	runReverse[2] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R3.png");
	runReverse[3] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R4.png");
	runReverse[4] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R5.png");
	runReverse[5] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R6.png");
	runReverse[6] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R7.png");
	runReverse[7] = iLoadImage("Resources\\Images\\Character\\Run\\Rev.R8.png");
}

//timer functions
int timer1Active = 0;
int timer2Active = 0;
int timer3Active = 0;
int timer4Active = 0;
int timer5Active = 0;
//int timer6Active = 0;
void resetGameL1G2(){
	if (gameStateL1G2 && !win)
	return;


	i = 0;
	f = 0;
	r = 0;
	gameStateL1G2 = true;
	tm = 25;
	win = false;
	life = 5;
	hpWidthL1G2 = 210;
	fwdFace = true;
	revFace = false;

	kan = { 100, 50, 10, 10, 130, 130, true, false, false, false, 100 };
	rock1 = { kan.x, windowHeight, 10, 50, 50 };
	rock2 = { rand() % ((windowWidth - 70) / 4), windowHeight + 50, 6, 50, 50 };
	rock3 = { rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 4), windowHeight + 100, 10, 50, 50 };
	rock4 = { (rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 2)), windowHeight + 150, 10, 50, 50 };
	rock5 = { rand() % (windowWidth - 70) / 4 + 3 * ((windowWidth - 70) / 4), windowHeight + 200, 10, 50, 50 };





}
bool checkCollisionL1G2(player p, rocked r) {
	if (!kan.Reverse){
		return (p.x + 85 < r.x + r.width && p.x + p.width > r.x && p.y + p.height - 50 == r.y);

	}
	else
		return (p.x + 85 > r.x + r.width  && p.x + p.width  > r.x && p.y + p.height - 50 == r.y);

}

void drawL1G2()
{
	if (gameStateL1G2){
		if (!imagesLoadedL1G2){
			imagesLoadedL1G2 = true;
		}
		//loadImages();

		iShowImage(0, 0, windowWidth, windowHeight, bg[currentBg]);
		if (hpWidthL1G2 >= 140){
			iSetColor(0, 180, 0);
			iFilledRectangle(35, 548, hpWidthL1G2 - 21, 30);
			iShowImage(0, 530, 250, 60, hpImg);
		}
		else if (hpWidthL1G2 < 140 && hpWidthL1G2 >= 90){
			iSetColor(150, 150, 0);
			iFilledRectangle(35, 548, hpWidthL1G2 - 21, 30);
			iShowImage(0, 530, 250, 60, hpImg);
		}
		else if (hpWidthL1G2 < 90){
			iSetColor(255, 0, 0);
			iFilledRectangle(35, 548, hpWidthL1G2 - 21, 30);
			iShowImage(0, 530, 250, 60, hpImg);
		}
		/*iShowImage((windowWidth-260), 515, 250, 120, timeBar);
		iSetColor(0, 125, 0);
		iFilledRectangle((windowWidth - 255), 568, 243, 10);*/

		if (!kan.Reverse&& kan.moving){
			iShowImage(kan.x, kan.y, kan.width, kan.height, runForward[i]);
		}
		else if (kan.Reverse&& kan.moving){
			iShowImage(kan.x, kan.y, kan.width, kan.height, runReverse[i]);
		}
		else if (!kan.Reverse){
			iShowImage(kan.x, kan.y, kan.width - 10, kan.height - 12, kanDefault);
		}
		else if (!kan.moving){
			iShowImage(kan.x, kan.y, kan.width - 10, kan.height - 12, kanRevdefault);
		}
		iSetColor(255, 255, 255);
		iFilledRectangle(930, 548, tm * 7, 30);

		iShowImage(885, 530, 245, 60, hpImg);
		iShowImage(875, 526, 78, 78, watch);

		iShowImage(rock1.x, rock1.y, rock1.width, rock1.height, stone);
		iShowImage(rock2.x, rock2.y, rock2.width, rock2.height, stone);
		iShowImage(rock3.x, rock3.y, rock3.width, rock3.height, stone);
		iShowImage(rock4.x, rock4.y, rock4.width, rock4.height, stone);
		iShowImage(rock5.x, rock5.y, rock5.width, rock5.height, stone);
		//iShowImage(rock6.x, rock6.y, rock6.width, rock6.height, stone);
	}
	else if (!gameStateL1G2 && !win)
	{
		iShowImage(0, 0, 1143, 600, gO);
		//currentState = BEFOREL2G1;
	}
	else if (!gameStateL1G2 && win)
	{
		//iText(windowWidth / 2, windowHeight / 2, "Congrats!!", GLUT_BITMAP_HELVETICA_18);
		//gameState = 2;
		//subState = 0;
		currentState = BEFOREL2G1;
	}
}

void Kan_Moving_AnimationL1G2(){
	if (kan.moving)
	{
		i++;
		if (i >= 8){
			i = 0;
			kan.moving = false;
			kan.Default_Animation = true;

		}
	}
}

//this function is responsible for handling the behavior of hpbar.
void hpFuncL1G2(){
	hpWidthL1G2 -= 8;
	if (hpWidthL1G2 <= 29){
		//this checks if hp width is less than 29(i.e. whether any health is left)
		//if no health is left, game should stop right there right then
		gameStateL1G2 = false;
		/*gameState = 2;
		subState = 0;*/
		//currentState = BEFOREL2G1;
	}
}


void timer1L1G2() {
	if (timer1Active) {
		rock1.y -= rock1.dy;
		if (rock1.y + rock1.height <= 0) {
			rock1.y = windowHeight;
			rock1.x = kan.x;
		}
	}

	if (checkCollisionL1G2(kan, rock1)){
		//gameState = false;
		if (gameStateL1G2)
		{
			//PlaySound("Resources\\music\\thud.wav", NULL, SND_ASYNC);
			//mciSendString("play ThudMusic from 0", NULL, 0, NULL);
		}
			
		hpFuncL1G2();
		rock1.y = windowHeight;
		rock1.x = kan.x;
		cout << "1" << endl;
	}
}

void timer2L1G2() {
	if (timer2Active) {
		rock2.y -= rock2.dy;
		if (rock2.y + rock2.height <= 0) {
			rock2.y = windowHeight;
			rock2.x = rand() % ((windowWidth - 70) / 4);
		}
	}

	if (checkCollisionL1G2(kan, rock2)){
		//gameState = false;
		if (gameStateL1G2)
			//PlaySound("Resources\\music\\thud.wav", NULL, SND_ASYNC);
		hpFuncL1G2();
		rock2.y = windowHeight;
		rock2.x = rand() % ((windowWidth - 70) / 4);
		cout << "2" << endl;
	}
}

void timer3L1G2() {
	if (timer3Active) {
		rock3.y -= rock3.dy;
		if (rock3.y + rock3.height <= 0) {
			rock3.y = windowHeight;
			rock3.x = rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 4);
		}
	}

	if (checkCollisionL1G2(kan, rock3)){
		//gameState = false;
		if (gameStateL1G2)
			//PlaySound("Resources\\music\\thud.wav", NULL, SND_ASYNC);
		hpFuncL1G2();
		rock3.y = windowHeight;
		rock3.x = rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 4);
		cout << "3" << endl;
	}
}

void timer4L1G2() {
	if (timer4Active) {
		rock4.y -= rock4.dy;
		if (rock4.y + rock4.height <= 0) {
			rock4.y = windowHeight;
			rock4.x = rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 2);
		}
	}

	if (checkCollisionL1G2(kan, rock4)){
		//gameState = false;
		if (gameStateL1G2)
			//PlaySound("Resources\\music\\thud.wav", NULL, SND_ASYNC);
		hpFuncL1G2();
		rock4.y = windowHeight;
		rock4.x = rand() % ((windowWidth - 70) / 4) + ((windowWidth - 70) / 2);
		cout << "4" << endl;
	}
}

void timer5L1G2() {
	if (timer5Active) {
		rock5.y -= rock5.dy;
		if (rock5.y + rock5.height <= 0) {
			rock5.y = windowHeight;
			rock5.x = rand() % ((windowWidth - 70) / 4) + 3 * ((windowWidth - 70) / 4);
		}
	}

	if (checkCollisionL1G2(kan, rock5)){
		//gameState = false;
		hpFuncL1G2();
		if (gameStateL1G2)
			//PlaySound("Resources\\music\\thud.wav", NULL, SND_ASYNC);
		rock5.y = windowHeight;
		rock5.x = rand() % ((windowWidth - 70) / 4) + 3 * ((windowWidth - 70) / 4);
		cout << "5" << endl;
	}
}

/*void timer6() {
if (timer6Active) {
rock6.y -= rock6.dy;
if (rock6.y + rock6.height <= 0) {
rock6.y = windowHeight;
rock6.x = rand() % windowWidth;
}
}

if (checkCollision(KAN, rock6)){
gameState = false;
}
}*/

/*void moveAllRocks() {
	rocked* rocks[] = { &rock1, &rock2, &rock3, &rock4, &rock5 };

	for (int i = 0; i < 5; i++) {
		rocks[i]->y -= rocks[i]->dy;

		// Reset position if off-screen
		if (rocks[i]->y + rocks[i]->height <= 0) {
			rocks[i]->y = windowHeight;
			rocks[i]->x = rand() % windowWidth;
		}

		// Check collision with the player
		if (checkCollisionL1G2(kan, *rocks[i])) {
			if (gameStateL1G2)
				PlaySound("Resources\\music\\thud.wav", NULL, SND_ASYNC);

			hpFuncL1G2();
			rocks[i]->y = windowHeight;
			rocks[i]->x = rand() % windowWidth;
		}
	}
}*/


void updateBackgroundL1G2(){
	currentBg = (currentBg + 1) % totalBg;
}

void timerFuncL1G2(){
	Kan_Moving_AnimationL1G2();
}
//this function is responsible for the behavior of timer.
void scoreTimer(){
	if (currentState == L1G2){
		tm--;
		if (tm == 0 && gameStateL1G2){
			//if time ends the function changes these variables. 
			//gameStateL1G2 being true implies game is running
			//gameStateL1G2 being false implies game is over
			win = true;
			gameStateL1G2 = false;
		}
	}
}

int t = 0;
void grandTimer() {
	if (t == 1) {
		timer1Active = 1;
	}
	else if (t == 2) {
		timer2Active = 1;
	}
	else if (t == 3) {
		timer3Active = 1;
	}
	else if (t == 4){
		timer4Active = 1;
	}
	else if (t == 5){
		timer5Active = 1;
	}
	else if (t == 6){
		//timer6Active = 1;
	}
	t++;
	//cout << t << " " << i << endl;
}

void KeyboardL1G2(unsigned char key)
{
	if (key == 'd' || key == 'D')
	{
		kan.moving = true;
		kan.Reverse = false;
		kan.x += kan.dx;
		if (kan.x + kan.width > windowWidth)
		{
			kan.x = kan.x - 10;

		}
	}
	if (key == 'a' || key == 'A')
	{
		kan.moving = true;
		kan.Reverse = true;
		kan.x -= kan.dx;
		if (kan.x < 0)
		{
			kan.x = 0;
		}
	}
	if (key == 'r' || key == 'R') {  // Press 'R' to reset
		resetGameL1G2();
	}
}

void MusicL1G2(){
	PlaySound("Resources\\music\\yuhu.wav", NULL, SND_ASYNC);
}
/*int stL1G2 = iSetTimer(1000, scoreTimer);
int ubL1G2 = iSetTimer(150, updateBackgroundL1G2);
int tfL1G2 = iSetTimer(45, timerFuncL1G2);

int gtL1G2 = iSetTimer(250, grandTimer);
int t1L1G2 = iSetTimer(5, timer1L1G2);
int t2L1G2 = iSetTimer(5, timer2L1G2);
int t3L1G2 = iSetTimer(5, timer3L1G2);
int t4L1G2 = iSetTimer(5, timer4L1G2);
int t5L1G2 = iSetTimer(5, timer5L1G2);*/

#endif