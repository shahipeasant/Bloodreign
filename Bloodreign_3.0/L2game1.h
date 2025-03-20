#ifndef L2game1_h
#define L2game2_h

#include "L1game2.h"

struct CharacterL2G1 {
	int x, y;
	int dx, dy;
	int width, height;
	bool Default_Animation;
	bool moving, attack, isAlive, isfly;
	bool Reverse, isJumping, secondAttack, specialAttack;
};

CharacterL2G1 kanL2G1 = { 50, 50, 10, 10, 130, 130, true, false, false, true, false, false };
CharacterL2G1 npcL2G1 = { 1000, 50, 10, 10, 130, 140, true, false, false, true };
int kan_defaultL2G1;
int kan_Reverse_defaultL2G1;
int npc_hx = 750;
int special_AttackBar_WidthL2G1 = 150;
int kan_healthBar_WidthL2G1 = 158;
int npc_healthBar_WidthL2G1 = 300;
int healthBar_HeightL2G1 = 28;
bool gameoverL2G1 = false;
bool isPowerGL2G1 = false;

int iL2G1 = 0;
int aL2G1 = 0;
int nL2G1 = 0;
int rL2G1 = 0;
int eL2G1 = 0;
int pL2G1 = 0;
int kan_faceL2G1;
int npc_healthbarL2G1;
int kan_S;
int head;
int noxcious_end;
int hL2G1;
int kdL2G1;
int jumpSpeedL2G1 = 0;
int gravityL2G1 = 2;
int initialvL2G1 = 20;
int currentBGL2G1 = 0;
int totalBGL2G1 = 8;
int kan_runL2G1[8];
int kan_deathL2G1[13];
int kan_Reverse_RunL2G1[8];
int kan_attackL2G1[11];
int kan_attack_2L2G1[28];
int kan_attack_2_ReverseL2G1[28];
int kan_Reverse_AttackL2G1[10];
int npc_AttackL2G1[8];
int npc_RunL2G1[8];
int npc_Reverse_RunL2G1[8];
int npc_Reverse_AttackL2G1[8];
int bgL2G1[8];
int petL2G1[10];

void loadImageL2G1(){
	// loading Running images of kan
	kan_runL2G1[0] = iLoadImage("New\\Run\\R1.png");
	kan_runL2G1[1] = iLoadImage("New\\Run\\R2.png");
	kan_runL2G1[2] = iLoadImage("New\\Run\\R3.png");
	kan_runL2G1[3] = iLoadImage("New\\Run\\R4.png");
	kan_runL2G1[4] = iLoadImage("New\\Run\\R5.png");
	kan_runL2G1[5] = iLoadImage("New\\Run\\R6.png");
	kan_runL2G1[6] = iLoadImage("New\\Run\\R7.png");
	kan_runL2G1[7] = iLoadImage("New\\Run\\R8.png");


	// loading reverse images of kan
	kan_Reverse_RunL2G1[0] = iLoadImage("New\\Run\\Rev.R1.png");
	kan_Reverse_RunL2G1[1] = iLoadImage("New\\Run\\Rev.R2.png");
	kan_Reverse_RunL2G1[2] = iLoadImage("New\\Run\\Rev.R3.png");
	kan_Reverse_RunL2G1[3] = iLoadImage("New\\Run\\Rev.R4.png");
	kan_Reverse_RunL2G1[4] = iLoadImage("New\\Run\\Rev.R5.png");
	kan_Reverse_RunL2G1[5] = iLoadImage("New\\Run\\Rev.R6.png");
	kan_Reverse_RunL2G1[6] = iLoadImage("New\\Run\\Rev.R7.png");
	kan_Reverse_RunL2G1[7] = iLoadImage("New\\Run\\Rev.R8.png");



	kan_defaultL2G1 = iLoadImage("New\\Attack\\I1.png");
	kan_Reverse_defaultL2G1 = iLoadImage("New\\Attack\\IR1.png");

	// loading attacking images of kan
	kan_attackL2G1[0] = iLoadImage("New\\Attack\\1_atk_1.png");
	kan_attackL2G1[1] = iLoadImage("New\\Attack\\1_atk_2.png");
	kan_attackL2G1[2] = iLoadImage("New\\Attack\\1_atk_3.png");
	kan_attackL2G1[3] = iLoadImage("New\\Attack\\1_atk_4.png");
	kan_attackL2G1[4] = iLoadImage("New\\Attack\\1_atk_5.png");
	kan_attackL2G1[5] = iLoadImage("New\\Attack\\1_atk_6.png");
	kan_attackL2G1[6] = iLoadImage("New\\Attack\\1_atk_7.png");
	kan_attackL2G1[7] = iLoadImage("New\\Attack\\1_atk_8.png");
	kan_attackL2G1[8] = iLoadImage("New\\Attack\\1_atk_9.png");
	kan_attackL2G1[9] = iLoadImage("New\\Attack\\1_atk_10.png");
	kan_attackL2G1[10] = iLoadImage("New\\Attack\\1_atk_11.png");
	//kam second attack
	kan_attack_2L2G1[0] = iLoadImage("New\\Attack\\3_atk_1.png");
	kan_attack_2L2G1[1] = iLoadImage("New\\Attack\\3_atk_2.png");
	kan_attack_2L2G1[2] = iLoadImage("New\\Attack\\3_atk_3.png");
	kan_attack_2L2G1[3] = iLoadImage("New\\Attack\\3_atk_4.png");
	kan_attack_2L2G1[4] = iLoadImage("New\\Attack\\3_atk_5.png");
	kan_attack_2L2G1[5] = iLoadImage("New\\Attack\\3_atk_6.png");
	kan_attack_2L2G1[6] = iLoadImage("New\\Attack\\3_atk_7.png");
	kan_attack_2L2G1[7] = iLoadImage("New\\Attack\\3_atk_8.png");
	kan_attack_2L2G1[8] = iLoadImage("New\\Attack\\3_atk_9.png");
	kan_attack_2L2G1[9] = iLoadImage("New\\Attack\\3_atk_10.png");
	kan_attack_2L2G1[10] = iLoadImage("New\\Attack\\3_atk_11.png");
	kan_attack_2L2G1[11] = iLoadImage("New\\Attack\\3_atk_12.png");
	kan_attack_2L2G1[12] = iLoadImage("New\\Attack\\3_atk_13.png");
	kan_attack_2L2G1[13] = iLoadImage("New\\Attack\\3_atk_14.png");
	kan_attack_2L2G1[14] = iLoadImage("New\\Attack\\3_atk_15.png");
	kan_attack_2L2G1[15] = iLoadImage("New\\Attack\\3_atk_16.png");
	kan_attack_2L2G1[16] = iLoadImage("New\\Attack\\3_atk_17.png");
	kan_attack_2L2G1[17] = iLoadImage("New\\Attack\\3_atk_18.png");
	kan_attack_2L2G1[18] = iLoadImage("New\\Attack\\3_atk_19.png");
	kan_attack_2L2G1[19] = iLoadImage("New\\Attack\\3_atk_20.png");
	kan_attack_2L2G1[20] = iLoadImage("New\\Attack\\3_atk_21.png");
	kan_attack_2L2G1[21] = iLoadImage("New\\Attack\\3_atk_22.png");
	kan_attack_2L2G1[22] = iLoadImage("New\\Attack\\3_atk_23.png");
	kan_attack_2L2G1[23] = iLoadImage("New\\Attack\\3_atk_24.png");
	kan_attack_2L2G1[24] = iLoadImage("New\\Attack\\3_atk_25.png");
	kan_attack_2L2G1[25] = iLoadImage("New\\Attack\\3_atk_26.png");
	kan_attack_2L2G1[26] = iLoadImage("New\\Attack\\3_atk_27.png");
	kan_attack_2L2G1[27] = iLoadImage("New\\Attack\\3_atk_28.png");
	//kan 2nd attack reverse
	kan_attack_2_ReverseL2G1[0] = iLoadImage("New\\Attack\\3_atk_1R.png");
	kan_attack_2_ReverseL2G1[1] = iLoadImage("New\\Attack\\3_atk_2R.png");
	kan_attack_2_ReverseL2G1[2] = iLoadImage("New\\Attack\\3_atk_3R.png");
	kan_attack_2_ReverseL2G1[3] = iLoadImage("New\\Attack\\3_atk_4R.png");
	kan_attack_2_ReverseL2G1[4] = iLoadImage("New\\Attack\\3_atk_5R.png");
	kan_attack_2_ReverseL2G1[5] = iLoadImage("New\\Attack\\3_atk_6R.png");
	kan_attack_2_ReverseL2G1[6] = iLoadImage("New\\Attack\\3_atk_7R.png");
	kan_attack_2_ReverseL2G1[7] = iLoadImage("New\\Attack\\3_atk_8R.png");
	kan_attack_2_ReverseL2G1[8] = iLoadImage("New\\Attack\\3_atk_9R.png");
	kan_attack_2_ReverseL2G1[9] = iLoadImage("New\\Attack\\3_atk_10R.png");
	kan_attack_2_ReverseL2G1[10] = iLoadImage("New\\Attack\\3_atk_11R.png");
	kan_attack_2_ReverseL2G1[11] = iLoadImage("New\\Attack\\3_atk_12R.png");
	kan_attack_2_ReverseL2G1[12] = iLoadImage("New\\Attack\\3_atk_13R.png");
	kan_attack_2_ReverseL2G1[13] = iLoadImage("New\\Attack\\3_atk_14R.png");
	kan_attack_2_ReverseL2G1[14] = iLoadImage("New\\Attack\\3_atk_15R.png");
	kan_attack_2_ReverseL2G1[15] = iLoadImage("New\\Attack\\3_atk_16R.png");
	kan_attack_2_ReverseL2G1[16] = iLoadImage("New\\Attack\\3_atk_17R.png");
	kan_attack_2_ReverseL2G1[17] = iLoadImage("New\\Attack\\3_atk_18R.png");
	kan_attack_2_ReverseL2G1[18] = iLoadImage("New\\Attack\\3_atk_19R.png");
	kan_attack_2_ReverseL2G1[19] = iLoadImage("New\\Attack\\3_atk_20R.png");
	kan_attack_2_ReverseL2G1[20] = iLoadImage("New\\Attack\\3_atk_21R.png");
	kan_attack_2_ReverseL2G1[21] = iLoadImage("New\\Attack\\3_atk_22R.png");
	kan_attack_2_ReverseL2G1[22] = iLoadImage("New\\Attack\\3_atk_23R.png");
	kan_attack_2_ReverseL2G1[23] = iLoadImage("New\\Attack\\3_atk_24R.png");
	kan_attack_2_ReverseL2G1[24] = iLoadImage("New\\Attack\\3_atk_25R.png");
	kan_attack_2_ReverseL2G1[25] = iLoadImage("New\\Attack\\3_atk_26R.png");
	kan_attack_2_ReverseL2G1[26] = iLoadImage("New\\Attack\\3_atk_27R.png");
	kan_attack_2_ReverseL2G1[27] = iLoadImage("New\\Attack\\3_atk_28R.png");


	// loading reverse attack images
	kan_Reverse_AttackL2G1[0] = iLoadImage("New\\Attack\\1_atk_R1.png");
	kan_Reverse_AttackL2G1[1] = iLoadImage("New\\Attack\\1_atk_R2.png");
	kan_Reverse_AttackL2G1[2] = iLoadImage("New\\Attack\\1_atk_R3.png");
	kan_Reverse_AttackL2G1[3] = iLoadImage("New\\Attack\\1_atk_R4.png");
	kan_Reverse_AttackL2G1[4] = iLoadImage("New\\Attack\\1_atk_R5.png");
	kan_Reverse_AttackL2G1[5] = iLoadImage("New\\Attack\\1_atk_R6.png");
	kan_Reverse_AttackL2G1[6] = iLoadImage("New\\Attack\\1_atk_R7.png");
	kan_Reverse_AttackL2G1[7] = iLoadImage("New\\Attack\\1_atk_R8.png");
	kan_Reverse_AttackL2G1[8] = iLoadImage("New\\Attack\\1_atk_R9.png");
	kan_Reverse_AttackL2G1[9] = iLoadImage("New\\Attack\\1_atk_R10.png");
	kan_Reverse_AttackL2G1[10] = iLoadImage("New\\Attack\\1_atk_R11.png");
	//kan death image
	kan_deathL2G1[0] = iLoadImage("New\\Kan Death\\death_1.png");
	kan_deathL2G1[1] = iLoadImage("New\\Kan Death\\death_2.png");
	kan_deathL2G1[2] = iLoadImage("New\\Kan Death\\death_3.png");
	kan_deathL2G1[3] = iLoadImage("New\\Kan Death\\death_4.png");
	kan_deathL2G1[4] = iLoadImage("New\\Kan Death\\death_5.png");
	kan_deathL2G1[5] = iLoadImage("New\\Kan Death\\death_6.png");
	kan_deathL2G1[6] = iLoadImage("New\\Kan Death\\death_7.png");
	kan_deathL2G1[7] = iLoadImage("New\\Kan Death\\death_8.png");
	kan_deathL2G1[8] = iLoadImage("New\\Kan Death\\death_9.png");
	kan_deathL2G1[9] = iLoadImage("New\\Kan Death\\death_10.png");
	kan_deathL2G1[10] = iLoadImage("New\\Kan Death\\death_11.png");
	kan_deathL2G1[11] = iLoadImage("New\\Kan Death\\death_12.png");
	kan_deathL2G1[12] = iLoadImage("New\\Kan Death\\death_13.png");
	//npc attack
	npc_AttackL2G1[0] = iLoadImage("New\\Npc\\attack\\R.A1.png");
	npc_AttackL2G1[1] = iLoadImage("New\\Npc\\attack\\R.A2.png");
	npc_AttackL2G1[2] = iLoadImage("New\\Npc\\attack\\R.A3.png");
	npc_AttackL2G1[3] = iLoadImage("New\\Npc\\attack\\R.A4.png");
	npc_AttackL2G1[4] = iLoadImage("New\\Npc\\attack\\R.A5.png");
	npc_AttackL2G1[5] = iLoadImage("New\\Npc\\attack\\R.A6.png");
	npc_AttackL2G1[6] = iLoadImage("New\\Npc\\attack\\R.A7.png");
	npc_AttackL2G1[7] = iLoadImage("New\\Npc\\attack\\R.A8.png");
	//npc running

	npc_RunL2G1[0] = iLoadImage("New\\Npc\\run\\Run_1(Left).png");
	npc_RunL2G1[1] = iLoadImage("New\\Npc\\run\\Run_2(Left).png");
	npc_RunL2G1[2] = iLoadImage("New\\Npc\\run\\Run_3(Left).png");
	npc_RunL2G1[3] = iLoadImage("New\\Npc\\run\\Run_4(Left).png");
	npc_RunL2G1[4] = iLoadImage("New\\Npc\\run\\Run_5(Left).png");
	npc_RunL2G1[5] = iLoadImage("New\\Npc\\run\\Run_6(Left).png");
	npc_RunL2G1[6] = iLoadImage("New\\Npc\\run\\Run_7(Left).png");
	npc_RunL2G1[7] = iLoadImage("New\\Npc\\run\\Run_8(Left).png");



	//npc reverse running
	npc_Reverse_RunL2G1[0] = iLoadImage("New\\Npc\\run\\Run_1.png");
	npc_Reverse_RunL2G1[1] = iLoadImage("New\\Npc\\run\\Run_2.png");
	npc_Reverse_RunL2G1[2] = iLoadImage("New\\Npc\\run\\Run_3.png");
	npc_Reverse_RunL2G1[3] = iLoadImage("New\\Npc\\run\\Run_4.png");
	npc_Reverse_RunL2G1[4] = iLoadImage("New\\Npc\\run\\Run_5.png");
	npc_Reverse_RunL2G1[5] = iLoadImage("New\\Npc\\run\\Run_6.png");
	npc_Reverse_RunL2G1[6] = iLoadImage("New\\Npc\\run\\Run_7.png");
	npc_Reverse_RunL2G1[7] = iLoadImage("New\\Npc\\run\\Run_8.png");
	//npc reverse attack 
	npc_Reverse_AttackL2G1[0] = iLoadImage("New\\Npc\\attack\\A1.png");
	npc_Reverse_AttackL2G1[1] = iLoadImage("New\\Npc\\attack\\A2.png");
	npc_Reverse_AttackL2G1[2] = iLoadImage("New\\Npc\\attack\\A3.png");
	npc_Reverse_AttackL2G1[3] = iLoadImage("New\\Npc\\attack\\A4.png");
	npc_Reverse_AttackL2G1[4] = iLoadImage("New\\Npc\\attack\\A5.png");
	npc_Reverse_AttackL2G1[5] = iLoadImage("New\\Npc\\attack\\A6.png");
	npc_Reverse_AttackL2G1[6] = iLoadImage("New\\Npc\\attack\\A7.png");
	npc_Reverse_AttackL2G1[7] = iLoadImage("New\\Npc\\attack\\A8.png");

	//background loading image
	bgL2G1[0] = iLoadImage("New\\BG\\bg (8).png");
	bgL2G1[1] = iLoadImage("New\\BG\\bg (7).png");
	bgL2G1[2] = iLoadImage("New\\BG\\bg (6).png");
	bgL2G1[3] = iLoadImage("New\\BG\\bg (5).png");
	bgL2G1[4] = iLoadImage("New\\BG\\bg (4).png");
	bgL2G1[5] = iLoadImage("New\\BG\\bg (3).png");
	bgL2G1[6] = iLoadImage("New\\BG\\bg (2).png");
	bgL2G1[7] = iLoadImage("New\\BG\\bg (1).png");
	// health bar image loading
	hL2G1 = iLoadImage("New\\Health\\kan_HealthBar.png");
	gO = iLoadImage("Game over.jpg");

	kan_faceL2G1 = iLoadImage("New\\Health\\Kan.png");
	
	npc_healthbarL2G1 = iLoadImage("New\\Health\\npc_HealthBar.png");
	// effect image loading
	head = iLoadImage("New\\Npc\\Head_Pic.png");
	
}
void resetGameL2G1() {
	if (!gameoverL2G1)
	return;

	kanL2G1 = { 50, 50, 10, 10, 130, 130, true, false, false, true, false, false };
	npcL2G1 = { 1000, 50, 10, 10, 180, 180, true, false, false, true };

	// Reset health and attack bars
	kan_healthBar_WidthL2G1 = 158;
	npc_healthBar_WidthL2G1 = 300;
	special_AttackBar_WidthL2G1 = 195;
	npc_hx = 750;
	// Reset game state flags
	gameoverL2G1 = false;
	//win_L2G2 = false;
	//health_RegenerateL2G2 = false;

	// Reset animations
	iL2G1 = 0;
	aL2G1 = 0;
	//spL2G1 = 0;
	kdL2G1 = 0;
	//npc_2deathL2G2 = 0;

	// Reset background
	currentBGL2G1 = 0;

	// Ensure characters are alive
	kanL2G1.isAlive = true;
	npcL2G1.isAlive = true;
}
void DrawL2G1()
{

	//iClear();
	if (gameoverL2G1){
		iShowImage(0, 0, 1143, 600, gO);
		//currentState = BEFOREL2G2;
		return;
	}
	else if (!npcL2G1.isAlive){
		/*iSetColor(255, 0, 0);
		iText(500, 300, "Noxcious is dead", GLUT_BITMAP_HELVETICA_18);*/
		currentState = BEFOREL2G2;
		return;
	}

	iShowImage(0, 0, 1143, 600, bgL2G1[currentBGL2G1]);

	if (kan_healthBar_WidthL2G1>115){
		iSetColor(0, 255, 0);
	}
	else if (kan_healthBar_WidthL2G1 > 60){
		iSetColor(255, 255, 0);
	}
	else if (kan_healthBar_WidthL2G1 < 60){
		iSetColor(255, 0, 0);
	}

	iFilledRectangle(73, 535, kan_healthBar_WidthL2G1, healthBar_HeightL2G1);
	iShowImage(15, 490, 290, 100, hL2G1);
	iShowImage(21, 515, 60, 60, kan_faceL2G1);
	// npc health bar(@Change
	if (npc_healthBar_WidthL2G1>120){
		iSetColor(0, 255, 0);
	}
	else if (npc_healthBar_WidthL2G1 > 80){
		iSetColor(255, 255, 0);
	}
	else if (npc_healthBar_WidthL2G1 <= 80){
		iSetColor(255, 0, 0);
	}

	iFilledRectangle(npc_hx, 520, npc_healthBar_WidthL2G1, healthBar_HeightL2G1);
	iShowImage(720, 500, 410, 100, npc_healthbarL2G1);
	iShowImage(1045, 510, 75, 75, head);
	

	if (!kanL2G1.Reverse&& kanL2G1.moving){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_runL2G1[iL2G1]);
	}
	else if (kanL2G1.Reverse&& kanL2G1.moving){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_Reverse_RunL2G1[iL2G1]);
	}
	else if (kanL2G1.Reverse && kanL2G1.attack){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_Reverse_AttackL2G1[aL2G1]);
	}
	else if (!kanL2G1.Reverse&&kanL2G1.attack){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_attackL2G1[aL2G1]);
	}
	else if (!kanL2G1.Reverse&&kanL2G1.secondAttack){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_attack_2L2G1[kan_S]);
	}
	else if (kanL2G1.Reverse&&kanL2G1.secondAttack){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_attack_2_ReverseL2G1[kan_S]);
	}
	else if (!kanL2G1.Reverse&&!kanL2G1.isAlive){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_deathL2G1[kdL2G1]);
	}
	else if (!kanL2G1.Reverse){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_defaultL2G1);
	}
	else if (kanL2G1.Reverse){
		iShowImage(kanL2G1.x, kanL2G1.y, kanL2G1.width, kanL2G1.height, kan_Reverse_defaultL2G1);
	}




	if (!npcL2G1.Reverse && npcL2G1.attack)
	{
		iShowImage(npcL2G1.x, npcL2G1.y, npcL2G1.width+35 , npcL2G1.height+35 , npc_AttackL2G1[nL2G1]);
	}
	else if (npcL2G1.Reverse && npcL2G1.attack){
		iShowImage(npcL2G1.x, npcL2G1.y, npcL2G1.width+35 , npcL2G1.height+35 , npc_Reverse_AttackL2G1[nL2G1]);
	}
	else if (npcL2G1.Reverse&& npcL2G1.moving){

		iShowImage(npcL2G1.x, npcL2G1.y, npcL2G1.width, npcL2G1.height, npc_Reverse_RunL2G1[rL2G1]);
	}
	else if (!npcL2G1.Reverse&& npcL2G1.moving){
		iShowImage(npcL2G1.x, npcL2G1.y, npcL2G1.width, npcL2G1.height, npc_RunL2G1[rL2G1]);
	}

	else if (!npcL2G1.Reverse){
		iShowImage(npcL2G1.x, npcL2G1.y, npcL2G1.width , npcL2G1.height , npc_RunL2G1[0]);
	}
	else if (npcL2G1.Reverse){
		iShowImage(npcL2G1.x, npcL2G1.y, npcL2G1.width , npcL2G1.height , npc_Reverse_RunL2G1[0]);
	}
	
}

void Kan_Moving_AnimationL2G1(){
	if (kanL2G1.moving)
	{
		iL2G1++;
		if (iL2G1 >= 7){
			iL2G1 = 0;
			kanL2G1.moving = false;
			kanL2G1.Default_Animation = true;

		}
	}
	if (kanL2G1.x >= 1143)
	{
		kanL2G1.x = 40;
		kanL2G1.y = 50;
		kanL2G1.isJumping = false;

	}
	else if (kanL2G1.x <= 0)
	{
		kanL2G1.x = 1110;
		kanL2G1.y = 50;
		kanL2G1.isJumping = false;
	}

}

void kan_Attack_AnimatuonL2G1(){
	if (kanL2G1.attack){
		aL2G1++;
		if (aL2G1 >= 10){
			aL2G1 = 0;
			kanL2G1.attack = false;
			kanL2G1.Default_Animation = true;
		}
	}

}
void kan_Second_Attack_AnimatuonL2G1(){
	if (kanL2G1.secondAttack){
		kan_S++;
	}
	if (kan_S >= 27){
		kan_S = 0;
		kanL2G1.secondAttack = false;
	}
}
void npc_Attack_AnimationL2G1(){

	if (npcL2G1.attack){
		nL2G1++;
		if (nL2G1 >= 7){
			nL2G1 = 0;
			npcL2G1.attack = false;
		}
	}
}

void npc_Trigger_AttackL2G1() {
	if (!npcL2G1.attack && npcL2G1.x - kanL2G1.x < 55 && npcL2G1.isAlive) {
		npcL2G1.attack = true;
		nL2G1 = 0; // 
	}
}
void npc_Moving_AnimationL2G1() {
	if (npcL2G1.x - kanL2G1.x > 55 && npcL2G1.isAlive) {
		npcL2G1.moving = true;
		npcL2G1.attack = false;
		npcL2G1.Reverse = false;
	}
	else if (kanL2G1.x - npcL2G1.x > 75 && npcL2G1.isAlive)
	{
		npcL2G1.Reverse = true;
		npcL2G1.attack = false;
		npcL2G1.moving = true;
	}
	else {
		npcL2G1.moving = false;

	}

	if (npcL2G1.moving) {
		rL2G1++;
		if (rL2G1 >= 7) {
			rL2G1 = 0;
		}
		if (!npcL2G1.Reverse)
		{
			npcL2G1.x -= npcL2G1.dx;

		}
		else{
			npcL2G1.x += npcL2G1.dx;
		}
	}
}
void update_BackgroundL2G1(){
	currentBGL2G1 = (currentBGL2G1 + 1) % totalBGL2G1;
}
void kanJumpL2G1(){
	if (kanL2G1.isJumping){
		kanL2G1.y += jumpSpeedL2G1;
		if (!kanL2G1.Reverse){
			kanL2G1.x += 8;
		}
		else{
			kanL2G1.x -= 8;
		}
		jumpSpeedL2G1 -= gravityL2G1;
		if (kanL2G1.y <= 50){
			kanL2G1.y = 50;
			kanL2G1.isJumping = false;
		}
	}

}
void kan_damageL2G1(){
	if (npcL2G1.attack && npcL2G1.x - kanL2G1.x < 60){
		kan_healthBar_WidthL2G1 -= 5;
	}
	if (kan_healthBar_WidthL2G1 <= 0){
		kan_healthBar_WidthL2G1 = 0;
		kanL2G1.isAlive = false;
	}

}
void npc_damageL2G1(){
	if (!kanL2G1.Reverse && (kanL2G1.attack || kanL2G1.secondAttack) && npcL2G1.x - kanL2G1.x < 60){// @Change
		npc_healthBar_WidthL2G1 -= 3;
		npc_hx += 3;
		
	}
	else if (kanL2G1.Reverse && (kanL2G1.attack || kanL2G1.secondAttack) && kanL2G1.x - npcL2G1.x< 120){// @Change
		npc_healthBar_WidthL2G1 -= 3;
		npc_hx += 3;
		
	}
	if (npc_healthBar_WidthL2G1 <= 0){
		npc_healthBar_WidthL2G1 = 0;
		npcL2G1.isAlive = false;
		//currentState = BEFOREL2G2;
	}

}
void kan_Death_AnimationL2G1(){
	if (!kanL2G1.isAlive){
		kdL2G1++;
	}
	if (kdL2G1 >= 12){
		kdL2G1 = 0;
		gameoverL2G1 = true;
		//currentState = BEFOREL2G2;
	}
}

void MouseL2G1(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (!kanL2G1.secondAttack){
			kanL2G1.attack = true;
		}
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		if (!kanL2G1.attack){
			kanL2G1.secondAttack = true;
		}
	}
}


void KeyboardL2G1(unsigned char key)
{
	if (key == 'd' || key =='D' )
	{
		if ((kanL2G1.x < npcL2G1.x - 30 || kanL2G1.x > npcL2G1.x + 10) && kanL2G1.isAlive){
			kanL2G1.moving = true;
			kanL2G1.Reverse = false;
			kanL2G1.x += kanL2G1.dx;
		}


	}

	if (key == 'a' || key =='A' )
	{
		if ((kanL2G1.x > npcL2G1.x + 99 || kanL2G1.x < npcL2G1.x - 10) && kanL2G1.isAlive){
			kanL2G1.moving = true;
			kanL2G1.Reverse = true;
			kanL2G1.x -= kanL2G1.dx;
		}


	}
	if (key == 'w' || key =='W' ){
		if (kanL2G1.isJumping == false){
			kanL2G1.isJumping = true;
			jumpSpeedL2G1 = initialvL2G1;

		}
	}

	if (key == 'k' || key == 'K')
	{
		if (!kanL2G1.secondAttack){
			kanL2G1.attack = true;
		}
	}


	if (key == 'l' || key == 'L')
	{
		if (!kanL2G1.attack){
			kanL2G1.secondAttack = true;
		}
	}
	if (key == 'r' || key == 'R') {  // Press 'R' to reset
		resetGameL2G1();
	}
}


void timer_for_functionL2G1(){
	kan_Attack_AnimatuonL2G1();
	kan_damageL2G1();
	npc_Moving_AnimationL2G1();
	npc_damageL2G1();
	
	
}
void timer_for_function_2L2G1(){

	Kan_Moving_AnimationL2G1();
	npc_Attack_AnimationL2G1();
	kan_Second_Attack_AnimatuonL2G1();
	Kan_Moving_AnimationL2G1();
	kan_Death_AnimationL2G1();
	update_BackgroundL2G1();
}
void musicL2G1(){
	PlaySound("New\\BG\\level-2.wav", NULL, SND_ASYNC);
}


#endif