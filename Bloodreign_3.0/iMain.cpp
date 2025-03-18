#include "L3.h"




//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
bool lvl1g1TimersInit = false;
bool lvl1g2TimersInit = false;
bool lvl2g1TimersInit = false;
bool lvl2g2TimersInit = false;
bool lvl3TimersInit = false;

void iDraw()
{
	iClear();
	if (currentState == INITIAL){
		drawL0();
	}
	else if (currentState == L1G1){
		//LoadL1G1();
		drawL1G1(&remainingClicks);
	}
	else if (currentState == L1G2){
		drawL1G2();
	}
	else if (currentState == L2G1){
		DrawL2G1();
	}
	else if (currentState == L2G2){
		DrawL2G2();
	}
	else if (currentState == L3){
		DrawL3();
	}
	else{
		cutSceneDraw();
	}
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	if (currentState == INITIAL){
		passiveMouseL0(mx, my, &hoverStart, &hoverCredit, &hoverOption, &hoverExit);
	}
	if (currentState == L1G1){
		passiveMouseL1G1(mx, my, &mouseX, &mouseY);
	}
}

void iMouse(int button, int state, int mx, int my)
{
	if (currentState == INITIAL){
		mouseL0(button, state, mx, my, &initialScreen, &optionScreen, &creditScreen);
	}
	if (currentState == L1G1){
		MouseL1G1(button, state, mx, my, &remainingClicks, &gameOverL1G1, &gameWonL1G1, boxCaught, boxX, boxY, boxHeight, boxWidth, &score);
	}
	if (currentState == L2G1){
		MouseL2G1(button, state, mx, my);
	}
	if (currentState == L2G2){
		MouseL2G2(button, state, mx, my);
	}
	if (currentState == L3){
		MouseL3(button, state, mx, my);
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	//for debugging purposes
	if (key == 'q' || key == 'Q') {
		currentState = static_cast<gameState>(static_cast<int>(currentState)+1);
	}
	if (key == ']') {
		currentState = static_cast<gameState>(static_cast<int>(currentState)-1);
	}


	if (key == '\r')
	{

	}

	if (currentState == INITIAL){
		KeyboardL0(key, &initialScreen, &musicOn, &musicFlag, &initial, &optionScreen, &creditScreen);
	}
	else if (currentState == L1G1){
		KeyboardL1G1(key, &remainingClicks, &maxClicks, &score);
	}
	else if (currentState == L1G2){
		KeyboardL1G2(key);
	}
	else if (currentState == L2G1){
		KeyboardL2G1(key);
	}
	else if (currentState == L2G2){
		KeyboardL2G2(key);
	}
	else if (currentState == L3){
		KeyboardL3(key);
	}
	else
	{
		cutSceneTransition(key);
	}
}

void updateGameL2G1() {
	timer_for_functionL2G1();
	//timer_for_function_2L2G1();
	npc_Trigger_AttackL2G1();
	kanJumpL2G1();
}
void print(){
	cout << "in the block" << endl;
}

void allTimers()
{
	std::cout <<" currentState "<< currentState << std::endl;
	if (currentState == L1G1 && !lvl1g1TimersInit) {
		iSetTimer(20, moveBoxesL1G1);
		iSetTimer(100, updateAnimationFrameL1G1);
		lvl1g1TimersInit = true;
	}
	else if (currentState == L1G2 && !lvl1g2TimersInit){
		iSetTimer(150, updateBackgroundL1G2);
		iSetTimer(45, timerFuncL1G2);
		iSetTimer(1000, scoreTimer);
		iSetTimer(250, grandTimer);
		iSetTimer(5, timer1L1G2);
		iSetTimer(5, timer2L1G2);
		iSetTimer(5, timer3L1G2);
		iSetTimer(5, timer4L1G2);
		iSetTimer(5, timer5L1G2);
		//iSetTimer(5, moveAllRocks);
		lvl1g2TimersInit = true;
	}
	else if (currentState == L2G1 && !lvl2g1TimersInit){
		//the following 4 timers are merged into one
		iSetTimer(100, timer_for_function_2L2G1);
		iSetTimer(70, timer_for_functionL2G1);
		iSetTimer(2000, npc_Trigger_AttackL2G1);
		iSetTimer(40, kanJumpL2G1);
		//iSetTimer(70, updateGameL2G1);
		lvl2g1TimersInit = true;
	}
	else if (currentState == L2G2 && !lvl2g2TimersInit){
		iSetTimer(100, timer_for_function_2L2G2);
		iSetTimer(70, timer_for_functionL2G2);
		iSetTimer(2000, npc_2_Trigger_Attack);

		iSetTimer(40, kanJumpL2G2);
		iSetTimer(100, print);
		lvl2g2TimersInit = true;
	}
	else if (currentState == L3 && !lvl3TimersInit){
		iSetTimer(100, timer_for_function_2L3);
		iSetTimer(70, timer_for_functionL3);
		iSetTimer(2000, npc_3_Trigger_AttackL3);
		
		iSetTimer(40, timer_for_function_3L3);
		lvl3TimersInit = true;
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/

void iSpecialKeyboard(unsigned char key)
{

}

int main(){
	//iSetTimer(45, timer6);
	///srand((unsigned)time(NULL));

	iSetTimer(1000, allTimers);
	iInitialize(screenX, screenY, "BLOODREIGN");
	loadCutscene();
	LoadL0();
	LoadL1G1();
	initializeBoxesL1G1();
	loadImagesL1G2();
	loadImageL2G1();
	loadImageL2G2();
	loadImageL3();
	if (currentState == L1G1||currentState == L1G2){
		//L1M
			//mciSendString("play L1Music repeat", NULL, 0, NULL);
	}
	if (currentState == BEFOREL1G2 || currentState == BEFOREL2G1){
		//mciSendString("pause L1Music", NULL, 0, NULL);
	}
	if (currentState == L2G1 || currentState == L2G2){
		//L2M
			//mciSendString("play L2Music repeat", NULL, 0, NULL);
	}
	if (currentState == BEFOREL2G2 || currentState == AFTERL2){
		//mciSendString("pause L2Music", NULL, 0, NULL);
	}
	//PlaySound("New\\BG\\level-2.wav", NULL, SND_ASYNC);
	///updated see the documentations
	iStart();
	//MusicL1G1();
	//MusicL1G2();
	//musicL2G1();
	//mciSendString("stop L1music repeat", NULL, 0, NULL);
	//mciSendString("close L1music repeat", NULL, 0, NULL);
	//mciSendString("stop L2music repeat", NULL, 0, NULL);
	//mciSendString("close L2music repeat", NULL, 0, NULL);
	//mciSendString("stopu TitleMusic repeat", NULL, 0, NULL);
	//mciSendString("close TitleMusic repeat", NULL, 0, NULL);
	return 0;
}