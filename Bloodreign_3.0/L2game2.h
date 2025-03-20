#ifndef L2game2_H
#define L2game2_H

#include "L2game1.h"

struct CharacterL2G2{
	int x, y;
	int dx, dy;
	int width, height;
	bool Default_Animation;
	bool moving, attack, isAlive, isfly;
	bool Reverse, isJumping, secondAttack, specialAttack;
};
CharacterL2G2 kanL2G2 = { 50, 50, 10, 10, 130, 130, true, false, false, true, false, false };
CharacterL2G2 npc_2 = { 1000, 50, 10, 10, 130, 140, true, false, false, true };
int kan_defaultL2G2;
int kan_Reverse_defaultL2G2;
int npc_2hx = 750;
int special_AttackBar_WidthL2G2 = 195;
int special_AttackBar_HeightL2G2 = 10;
int kan_healthBar_WidthL2G2 = 158;
int npc_healthBar_WidthL2G2 = 300;
int healthBar_HeightL2G2 = 28;
bool gameoverL2G2 = false;
bool isPowerGL2G2 = false;
bool health_Regenerate;
int currentBGL2G2 = 0;
int totalBGL2G2 = 8;

int iL2G2 = 0;
int aL2G2 = 0;
int nL2G2 = 0;
int rL2G2 = 0;
int dL2G2 = 0;
int pL2G2;
bool win_2;
int kan_faceL2G2;
int npc_healthbarL2G2;
int face_t;
int eL2G2 = 0;
int hL2G2 = 0;
int spL2G2 = 0;
int flyL2G2;
int kan_SL2G2;
int atk_2L2G2;
int kdL2G2;
int jumpSpeedL2G2 = 0;
int gravityL2G2 = 2;
int initialvL2G2 = 20;
//farzan was here
int kan_runL2G2[8];
int kan_deathL2G2[13];
int kan_Reverse_RunL2G2[8];
int kan_attackL2G2[11];
int kan_attack_2L2G2[28];
int kan_attack_2_ReverseL2G2[28];
int kan_Reverse_AttackL2G2[10];
int kan_Special_AttackL2G2[18];
int kan_Reverse_Special_AttackL2G2[18];

int npc_2_Attack[8];
int npc_2_Run[12];
int npc_2_Reverse_Run[12];
int npc_2_Reverse_Attack[8];
int npc_2_Attack_2_Reverse[10];
int npc_2_Attack_2[10];
int npc_2_Fly_Reverse[12];
int npc_2_Fly[12];
int npc_2_Death[22];
int bgL2G2[8];
int petL2G2[10];
void loadImageL2G2(){
	// loading Running images of kan
	kan_runL2G2[0] = iLoadImage("New\\Run\\R1.png");
	kan_runL2G2[1] = iLoadImage("New\\Run\\R2.png");
	kan_runL2G2[2] = iLoadImage("New\\Run\\R3.png");
	kan_runL2G2[3] = iLoadImage("New\\Run\\R4.png");
	kan_runL2G2[4] = iLoadImage("New\\Run\\R5.png");
	kan_runL2G2[5] = iLoadImage("New\\Run\\R6.png");
	kan_runL2G2[6] = iLoadImage("New\\Run\\R7.png");
	kan_runL2G2[7] = iLoadImage("New\\Run\\R8.png");


	// loading reverse images of kan
	kan_Reverse_RunL2G2[0] = iLoadImage("New\\Run\\Rev.R1.png");
	kan_Reverse_RunL2G2[1] = iLoadImage("New\\Run\\Rev.R2.png");
	kan_Reverse_RunL2G2[2] = iLoadImage("New\\Run\\Rev.R3.png");
	kan_Reverse_RunL2G2[3] = iLoadImage("New\\Run\\Rev.R4.png");
	kan_Reverse_RunL2G2[4] = iLoadImage("New\\Run\\Rev.R5.png");
	kan_Reverse_RunL2G2[5] = iLoadImage("New\\Run\\Rev.R6.png");
	kan_Reverse_RunL2G2[6] = iLoadImage("New\\Run\\Rev.R7.png");
	kan_Reverse_RunL2G2[7] = iLoadImage("New\\Run\\Rev.R8.png");



	kan_defaultL2G2 = iLoadImage("New\\Attack\\I1.png");
	kan_Reverse_defaultL2G2 = iLoadImage("New\\Attack\\IR1.png");

	// loading attacking images of kan
	kan_attackL2G2[0] = iLoadImage("New\\Attack\\1_atk_1.png");
	kan_attackL2G2[1] = iLoadImage("New\\Attack\\1_atk_2.png");
	kan_attackL2G2[2] = iLoadImage("New\\Attack\\1_atk_3.png");
	kan_attackL2G2[3] = iLoadImage("New\\Attack\\1_atk_4.png");
	kan_attackL2G2[4] = iLoadImage("New\\Attack\\1_atk_5.png");
	kan_attackL2G2[5] = iLoadImage("New\\Attack\\1_atk_6.png");
	kan_attackL2G2[6] = iLoadImage("New\\Attack\\1_atk_7.png");
	kan_attackL2G2[7] = iLoadImage("New\\Attack\\1_atk_8.png");
	kan_attackL2G2[8] = iLoadImage("New\\Attack\\1_atk_9.png");
	kan_attackL2G2[9] = iLoadImage("New\\Attack\\1_atk_10.png");
	kan_attackL2G2[10] = iLoadImage("New\\Attack\\1_atk_11.png");
	//kam second attack

	kan_attack_2L2G2[0] = iLoadImage("New\\Attack\\3_atk_1.png");
	kan_attack_2L2G2[1] = iLoadImage("New\\Attack\\3_atk_2.png");
	kan_attack_2L2G2[2] = iLoadImage("New\\Attack\\3_atk_3.png");
	kan_attack_2L2G2[3] = iLoadImage("New\\Attack\\3_atk_4.png");
	kan_attack_2L2G2[4] = iLoadImage("New\\Attack\\3_atk_5.png");
	kan_attack_2L2G2[5] = iLoadImage("New\\Attack\\3_atk_6.png");
	kan_attack_2L2G2[6] = iLoadImage("New\\Attack\\3_atk_7.png");
	kan_attack_2L2G2[7] = iLoadImage("New\\Attack\\3_atk_8.png");
	kan_attack_2L2G2[8] = iLoadImage("New\\Attack\\3_atk_9.png");
	kan_attack_2L2G2[9] = iLoadImage("New\\Attack\\3_atk_10.png");
	kan_attack_2L2G2[10] = iLoadImage("New\\Attack\\3_atk_11.png");
	kan_attack_2L2G2[11] = iLoadImage("New\\Attack\\3_atk_12.png");
	kan_attack_2L2G2[12] = iLoadImage("New\\Attack\\3_atk_13.png");
	kan_attack_2L2G2[13] = iLoadImage("New\\Attack\\3_atk_14.png");
	kan_attack_2L2G2[14] = iLoadImage("New\\Attack\\3_atk_15.png");
	kan_attack_2L2G2[15] = iLoadImage("New\\Attack\\3_atk_16.png");
	kan_attack_2L2G2[16] = iLoadImage("New\\Attack\\3_atk_17.png");
	kan_attack_2L2G2[17] = iLoadImage("New\\Attack\\3_atk_18.png");
	kan_attack_2L2G2[18] = iLoadImage("New\\Attack\\3_atk_19.png");
	kan_attack_2L2G2[19] = iLoadImage("New\\Attack\\3_atk_20.png");
	kan_attack_2L2G2[20] = iLoadImage("New\\Attack\\3_atk_21.png");
	kan_attack_2L2G2[21] = iLoadImage("New\\Attack\\3_atk_22.png");
	kan_attack_2L2G2[22] = iLoadImage("New\\Attack\\3_atk_23.png");
	kan_attack_2L2G2[23] = iLoadImage("New\\Attack\\3_atk_24.png");
	kan_attack_2L2G2[24] = iLoadImage("New\\Attack\\3_atk_25.png");
	kan_attack_2L2G2[25] = iLoadImage("New\\Attack\\3_atk_26.png");
	kan_attack_2L2G2[26] = iLoadImage("New\\Attack\\3_atk_27.png");
	kan_attack_2L2G2[27] = iLoadImage("New\\Attack\\3_atk_28.png");

	//kan 2nd attack reverse

	kan_attack_2_ReverseL2G2[0] = iLoadImage("New\\Attack\\3_atk_1R.png");
	kan_attack_2_ReverseL2G2[1] = iLoadImage("New\\Attack\\3_atk_2R.png");
	kan_attack_2_ReverseL2G2[2] = iLoadImage("New\\Attack\\3_atk_3R.png");
	kan_attack_2_ReverseL2G2[3] = iLoadImage("New\\Attack\\3_atk_4R.png");
	kan_attack_2_ReverseL2G2[4] = iLoadImage("New\\Attack\\3_atk_5R.png");
	kan_attack_2_ReverseL2G2[5] = iLoadImage("New\\Attack\\3_atk_6R.png");
	kan_attack_2_ReverseL2G2[6] = iLoadImage("New\\Attack\\3_atk_7R.png");
	kan_attack_2_ReverseL2G2[7] = iLoadImage("New\\Attack\\3_atk_8R.png");
	kan_attack_2_ReverseL2G2[8] = iLoadImage("New\\Attack\\3_atk_9R.png");
	kan_attack_2_ReverseL2G2[9] = iLoadImage("New\\Attack\\3_atk_10R.png");
	kan_attack_2_ReverseL2G2[10] = iLoadImage("New\\Attack\\3_atk_11R.png");
	kan_attack_2_ReverseL2G2[11] = iLoadImage("New\\Attack\\3_atk_12R.png");
	kan_attack_2_ReverseL2G2[12] = iLoadImage("New\\Attack\\3_atk_13R.png");
	kan_attack_2_ReverseL2G2[13] = iLoadImage("New\\Attack\\3_atk_14R.png");
	kan_attack_2_ReverseL2G2[14] = iLoadImage("New\\Attack\\3_atk_15R.png");
	kan_attack_2_ReverseL2G2[15] = iLoadImage("New\\Attack\\3_atk_16R.png");
	kan_attack_2_ReverseL2G2[16] = iLoadImage("New\\Attack\\3_atk_17R.png");
	kan_attack_2_ReverseL2G2[17] = iLoadImage("New\\Attack\\3_atk_18R.png");
	kan_attack_2_ReverseL2G2[18] = iLoadImage("New\\Attack\\3_atk_19R.png");
	kan_attack_2_ReverseL2G2[19] = iLoadImage("New\\Attack\\3_atk_20R.png");
	kan_attack_2_ReverseL2G2[20] = iLoadImage("New\\Attack\\3_atk_21R.png");
	kan_attack_2_ReverseL2G2[21] = iLoadImage("New\\Attack\\3_atk_22R.png");
	kan_attack_2_ReverseL2G2[22] = iLoadImage("New\\Attack\\3_atk_23R.png");
	kan_attack_2_ReverseL2G2[23] = iLoadImage("New\\Attack\\3_atk_24R.png");
	kan_attack_2_ReverseL2G2[24] = iLoadImage("New\\Attack\\3_atk_25R.png");
	kan_attack_2_ReverseL2G2[25] = iLoadImage("New\\Attack\\3_atk_26R.png");
	kan_attack_2_ReverseL2G2[26] = iLoadImage("New\\Attack\\3_atk_27R.png");
	kan_attack_2_ReverseL2G2[27] = iLoadImage("New\\Attack\\3_atk_28R.png");


	// loading reverse attack images


	kan_Reverse_AttackL2G2[0] = iLoadImage("New\\Attack\\1_atk_R1.png");
	kan_Reverse_AttackL2G2[1] = iLoadImage("New\\Attack\\1_atk_R2.png");
	kan_Reverse_AttackL2G2[2] = iLoadImage("New\\Attack\\1_atk_R3.png");
	kan_Reverse_AttackL2G2[3] = iLoadImage("New\\Attack\\1_atk_R4.png");
	kan_Reverse_AttackL2G2[4] = iLoadImage("New\\Attack\\1_atk_R5.png");
	kan_Reverse_AttackL2G2[5] = iLoadImage("New\\Attack\\1_atk_R6.png");
	kan_Reverse_AttackL2G2[6] = iLoadImage("New\\Attack\\1_atk_R7.png");
	kan_Reverse_AttackL2G2[7] = iLoadImage("New\\Attack\\1_atk_R8.png");
	kan_Reverse_AttackL2G2[8] = iLoadImage("New\\Attack\\1_atk_R9.png");
	kan_Reverse_AttackL2G2[9] = iLoadImage("New\\Attack\\1_atk_R10.png");
	kan_Reverse_AttackL2G2[10] = iLoadImage("New\\Attack\\1_atk_R11.png");

	// kan special attack
	kan_Special_AttackL2G2[0] = iLoadImage("New\\Attack\\sp_atk_1.png");
	kan_Special_AttackL2G2[1] = iLoadImage("New\\Attack\\sp_atk_2.png");
	kan_Special_AttackL2G2[2] = iLoadImage("New\\Attack\\sp_atk_3.png");
	kan_Special_AttackL2G2[3] = iLoadImage("New\\Attack\\sp_atk_4.png");
	kan_Special_AttackL2G2[4] = iLoadImage("New\\Attack\\sp_atk_5.png");
	kan_Special_AttackL2G2[5] = iLoadImage("New\\Attack\\sp_atk_6.png");
	kan_Special_AttackL2G2[6] = iLoadImage("New\\Attack\\sp_atk_7.png");
	kan_Special_AttackL2G2[7] = iLoadImage("New\\Attack\\sp_atk_8.png");
	kan_Special_AttackL2G2[8] = iLoadImage("New\\Attack\\sp_atk_9.png");
	kan_Special_AttackL2G2[9] = iLoadImage("New\\Attack\\sp_atk_10.png");
	kan_Special_AttackL2G2[10] = iLoadImage("New\\Attack\\sp_atk_11.png");
	kan_Special_AttackL2G2[11] = iLoadImage("New\\Attack\\sp_atk_12.png");
	kan_Special_AttackL2G2[12] = iLoadImage("New\\Attack\\sp_atk_13.png");
	kan_Special_AttackL2G2[13] = iLoadImage("New\\Attack\\sp_atk_14.png");
	kan_Special_AttackL2G2[14] = iLoadImage("New\\Attack\\sp_atk_15.png");
	kan_Special_AttackL2G2[15] = iLoadImage("New\\Attack\\sp_atk_16.png");
	kan_Special_AttackL2G2[16] = iLoadImage("New\\Attack\\sp_atk_17.png");
	kan_Special_AttackL2G2[17] = iLoadImage("New\\Attack\\sp_atk_18.png");



	//kan special attack reverse




	kan_Reverse_Special_AttackL2G2[0] = iLoadImage("New\\Attack\\rev_sp_atk_1.png");
	kan_Reverse_Special_AttackL2G2[1] = iLoadImage("New\\Attack\\rev_sp_atk_2.png");
	kan_Reverse_Special_AttackL2G2[2] = iLoadImage("New\\Attack\\rev_sp_atk_3.png");
	kan_Reverse_Special_AttackL2G2[3] = iLoadImage("New\\Attack\\rev_sp_atk_4.png");
	kan_Reverse_Special_AttackL2G2[4] = iLoadImage("New\\Attack\\rev_sp_atk_5.png");
	kan_Reverse_Special_AttackL2G2[5] = iLoadImage("New\\Attack\\rev_sp_atk_6.png");
	kan_Reverse_Special_AttackL2G2[6] = iLoadImage("New\\Attack\\rev_sp_atk_7.png");
	kan_Reverse_Special_AttackL2G2[7] = iLoadImage("New\\Attack\\rev_sp_atk_8.png");
	kan_Reverse_Special_AttackL2G2[8] = iLoadImage("New\\Attack\\rev_sp_atk_9.png");
	kan_Reverse_Special_AttackL2G2[9] = iLoadImage("New\\Attack\\rev_sp_atk_10.png");
	kan_Reverse_Special_AttackL2G2[10] = iLoadImage("New\\Attack\\rev_sp_atk_11.png");
	kan_Reverse_Special_AttackL2G2[11] = iLoadImage("New\\Attack\\rev_sp_atk_12.png");
	kan_Reverse_Special_AttackL2G2[12] = iLoadImage("New\\Attack\\rev_sp_atk_13.png");
	kan_Reverse_Special_AttackL2G2[13] = iLoadImage("New\\Attack\\rev_sp_atk_14.png");
	kan_Reverse_Special_AttackL2G2[14] = iLoadImage("New\\Attack\\rev_sp_atk_15.png");
	kan_Reverse_Special_AttackL2G2[15] = iLoadImage("New\\Attack\\rev_sp_atk_16.png");
	kan_Reverse_Special_AttackL2G2[16] = iLoadImage("New\\Attack\\rev_sp_atk_17.png");
	kan_Reverse_Special_AttackL2G2[17] = iLoadImage("New\\Attack\\rev_sp_atk_18.png");





	//kan death image


	kan_deathL2G2[0] = iLoadImage("New\\Kan Death\\death_1.png");
	kan_deathL2G2[1] = iLoadImage("New\\Kan Death\\death_2.png");
	kan_deathL2G2[2] = iLoadImage("New\\Kan Death\\death_3.png");
	kan_deathL2G2[3] = iLoadImage("New\\Kan Death\\death_4.png");
	kan_deathL2G2[4] = iLoadImage("New\\Kan Death\\death_5.png");
	kan_deathL2G2[5] = iLoadImage("New\\Kan Death\\death_6.png");
	kan_deathL2G2[6] = iLoadImage("New\\Kan Death\\death_7.png");
	kan_deathL2G2[7] = iLoadImage("New\\Kan Death\\death_8.png");
	kan_deathL2G2[8] = iLoadImage("New\\Kan Death\\death_9.png");
	kan_deathL2G2[9] = iLoadImage("New\\Kan Death\\death_10.png");
	kan_deathL2G2[10] = iLoadImage("New\\Kan Death\\death_11.png");
	kan_deathL2G2[11] = iLoadImage("New\\Kan Death\\death_12.png");
	kan_deathL2G2[12] = iLoadImage("New\\Kan Death\\death_13.png");


	//npc attack
	npc_2_Attack[0] = iLoadImage("New\\Npc(2)\\attack\\1atk_7R.png");
	npc_2_Attack[1] = iLoadImage("New\\Npc(2)\\attack\\1atk_1R.png");
	npc_2_Attack[2] = iLoadImage("New\\Npc(2)\\attack\\1atk_2R.png");
	npc_2_Attack[3] = iLoadImage("New\\Npc(2)\\attack\\1atk_3R.png");
	npc_2_Attack[4] = iLoadImage("New\\Npc(2)\\attack\\1atk_4R.png");
	npc_2_Attack[5] = iLoadImage("New\\Npc(2)\\attack\\1atk_5R.png");
	npc_2_Attack[6] = iLoadImage("New\\Npc(2)\\attack\\1atk_6R.png");
	npc_2_Attack[7] = iLoadImage("New\\Npc(2)\\attack\\1atk_7R.png");

	//npc running	
	npc_2_Run[0] = iLoadImage("New\\Npc(2)\\run\\walk_1R.png");
	npc_2_Run[1] = iLoadImage("New\\Npc(2)\\run\\walk_2R.png");
	npc_2_Run[2] = iLoadImage("New\\Npc(2)\\run\\walk_3R.png");
	npc_2_Run[3] = iLoadImage("New\\Npc(2)\\run\\walk_4R.png");
	npc_2_Run[4] = iLoadImage("New\\Npc(2)\\run\\walk_5R.png");
	npc_2_Run[5] = iLoadImage("New\\Npc(2)\\run\\walk_6R.png");
	npc_2_Run[6] = iLoadImage("New\\Npc(2)\\run\\walk_7R.png");
	npc_2_Run[7] = iLoadImage("New\\Npc(2)\\run\\walk_8R.png");
	npc_2_Run[8] = iLoadImage("New\\Npc(2)\\run\\walk_9R.png");
	npc_2_Run[9] = iLoadImage("New\\Npc(2)\\run\\walk_10R.png");
	npc_2_Run[10] = iLoadImage("New\\Npc(2)\\run\\walk_11R.png");
	npc_2_Run[11] = iLoadImage("New\\Npc(2)\\run\\walk_12R.png");


	//npc reverse running
	npc_2_Reverse_Run[0] = iLoadImage("New\\Npc(2)\\run\\walk_1.png");
	npc_2_Reverse_Run[1] = iLoadImage("New\\Npc(2)\\run\\walk_2.png");
	npc_2_Reverse_Run[2] = iLoadImage("New\\Npc(2)\\run\\walk_3.png");
	npc_2_Reverse_Run[3] = iLoadImage("New\\Npc(2)\\run\\walk_4.png");
	npc_2_Reverse_Run[4] = iLoadImage("New\\Npc(2)\\run\\walk_5.png");
	npc_2_Reverse_Run[5] = iLoadImage("New\\Npc(2)\\run\\walk_6.png");
	npc_2_Reverse_Run[6] = iLoadImage("New\\Npc(2)\\run\\walk_7.png");
	npc_2_Reverse_Run[7] = iLoadImage("New\\Npc(2)\\run\\walk_8.png");
	npc_2_Reverse_Run[8] = iLoadImage("New\\Npc(2)\\run\\walk_9.png");
	npc_2_Reverse_Run[9] = iLoadImage("New\\Npc(2)\\run\\walk_10.png");
	npc_2_Reverse_Run[10] = iLoadImage("New\\Npc(2)\\run\\walk_11.png");
	npc_2_Reverse_Run[11] = iLoadImage("New\\Npc(2)\\run\\walk_12.png");
	//npc reverse attack 

	npc_2_Reverse_Attack[0] = iLoadImage("New\\Npc(2)\\attack\\1atk_7.png");
	npc_2_Reverse_Attack[1] = iLoadImage("New\\Npc(2)\\attack\\1atk_1.png");
	npc_2_Reverse_Attack[2] = iLoadImage("New\\Npc(2)\\attack\\1atk_2.png");
	npc_2_Reverse_Attack[3] = iLoadImage("New\\Npc(2)\\attack\\1atk_3.png");
	npc_2_Reverse_Attack[4] = iLoadImage("New\\Npc(2)\\attack\\1atk_4.png");
	npc_2_Reverse_Attack[5] = iLoadImage("New\\Npc(2)\\attack\\1atk_5.png");
	npc_2_Reverse_Attack[6] = iLoadImage("New\\Npc(2)\\attack\\1atk_6.png");
	npc_2_Reverse_Attack[7] = iLoadImage("New\\Npc(2)\\attack\\1atk_7.png");


	//npc second attack reverse
	npc_2_Attack_2_Reverse[0] = iLoadImage("New\\Npc(2)\\Attack\\1atk_7.png");
	npc_2_Attack_2_Reverse[1] = iLoadImage("New\\Npc(2)\\Attack\\2atk_1.png");
	npc_2_Attack_2_Reverse[2] = iLoadImage("New\\Npc(2)\\Attack\\2atk_2.png");
	npc_2_Attack_2_Reverse[3] = iLoadImage("New\\Npc(2)\\Attack\\2atk_3.png");
	npc_2_Attack_2_Reverse[4] = iLoadImage("New\\Npc(2)\\Attack\\2atk_4.png");
	npc_2_Attack_2_Reverse[5] = iLoadImage("New\\Npc(2)\\Attack\\2atk_5.png");
	npc_2_Attack_2_Reverse[6] = iLoadImage("New\\Npc(2)\\Attack\\2atk_6.png");
	npc_2_Attack_2_Reverse[7] = iLoadImage("New\\Npc(2)\\Attack\\2atk_7.png");
	npc_2_Attack_2_Reverse[8] = iLoadImage("New\\Npc(2)\\Attack\\2atk_8.png");
	npc_2_Attack_2_Reverse[9] = iLoadImage("New\\Npc(2)\\Attack\\2atk_9.png");

	//npc second attack 
	npc_2_Attack_2[0] = iLoadImage("New\\Npc(2)\\Attack\\1atk_7R.png");
	npc_2_Attack_2[1] = iLoadImage("New\\Npc(2)\\Attack\\2atk_1R.png");
	npc_2_Attack_2[2] = iLoadImage("New\\Npc(2)\\Attack\\2atk_2R.png");
	npc_2_Attack_2[3] = iLoadImage("New\\Npc(2)\\Attack\\2atk_3R.png");
	npc_2_Attack_2[4] = iLoadImage("New\\Npc(2)\\Attack\\2atk_4R.png");
	npc_2_Attack_2[5] = iLoadImage("New\\Npc(2)\\Attack\\2atk_5R.png");
	npc_2_Attack_2[6] = iLoadImage("New\\Npc(2)\\Attack\\2atk_6R.png");
	npc_2_Attack_2[7] = iLoadImage("New\\Npc(2)\\Attack\\2atk_7R.png");
	npc_2_Attack_2[8] = iLoadImage("New\\Npc(2)\\Attack\\2atk_8R.png");
	npc_2_Attack_2[9] = iLoadImage("New\\Npc(2)\\Attack\\2atk_9R.png");

	//npc fly animation
	npc_2_Fly_Reverse[0] = iLoadImage("New\\Npc(2)\\fly\\fly_1.png");
	npc_2_Fly_Reverse[1] = iLoadImage("New\\Npc(2)\\fly\\fly_2.png");
	npc_2_Fly_Reverse[2] = iLoadImage("New\\Npc(2)\\fly\\fly_3.png");
	npc_2_Fly_Reverse[3] = iLoadImage("New\\Npc(2)\\fly\\fly_4.png");
	npc_2_Fly_Reverse[4] = iLoadImage("New\\Npc(2)\\fly\\fly_5.png");
	npc_2_Fly_Reverse[5] = iLoadImage("New\\Npc(2)\\fly\\fly_6.png");
	npc_2_Fly_Reverse[6] = iLoadImage("New\\Npc(2)\\fly\\fly_1.png");
	npc_2_Fly_Reverse[7] = iLoadImage("New\\Npc(2)\\fly\\fly_2.png");
	npc_2_Fly_Reverse[8] = iLoadImage("New\\Npc(2)\\fly\\fly_3.png");
	npc_2_Fly_Reverse[9] = iLoadImage("New\\Npc(2)\\fly\\fly_4.png");
	npc_2_Fly_Reverse[10] = iLoadImage("New\\Npc(2)\\fly\\fly_5.png");
	npc_2_Fly_Reverse[11] = iLoadImage("New\\Npc(2)\\fly\\fly_6.png");
	// npc fly reverse
	npc_2_Fly[0] = iLoadImage("New\\Npc(2)\\fly\\fly_1R.png");
	npc_2_Fly[1] = iLoadImage("New\\Npc(2)\\fly\\fly_2R.png");
	npc_2_Fly[2] = iLoadImage("New\\Npc(2)\\fly\\fly_3R.png");
	npc_2_Fly[3] = iLoadImage("New\\Npc(2)\\fly\\fly_4R.png");
	npc_2_Fly[4] = iLoadImage("New\\Npc(2)\\fly\\fly_5R.png");
	npc_2_Fly[5] = iLoadImage("New\\Npc(2)\\fly\\fly_6R.png");
	npc_2_Fly[6] = iLoadImage("New\\Npc(2)\\fly\\fly_1R.png");
	npc_2_Fly[7] = iLoadImage("New\\Npc(2)\\fly\\fly_2R.png");
	npc_2_Fly[8] = iLoadImage("New\\Npc(2)\\fly\\fly_3R.png");
	npc_2_Fly[9] = iLoadImage("New\\Npc(2)\\fly\\fly_4R.png");
	npc_2_Fly[10] = iLoadImage("New\\Npc(2)\\fly\\fly_5R.png");
	npc_2_Fly[11] = iLoadImage("New\\Npc(2)\\fly\\fly_6R.png");

	//Npc death 
	
	npc_2_Death[0] = iLoadImage("New\\Npc(2)\\death\\death_1.png");
	npc_2_Death[1] = iLoadImage("New\\Npc(2)\\death\\death_1.png");
	npc_2_Death[2] = iLoadImage("New\\Npc(2)\\death\\death_2.png");
	npc_2_Death[3] = iLoadImage("New\\Npc(2)\\death\\death_2.png");
	npc_2_Death[4] = iLoadImage("New\\Npc(2)\\death\\death_3.png");
	npc_2_Death[5] = iLoadImage("New\\Npc(2)\\death\\death_3.png");
	npc_2_Death[6] = iLoadImage("New\\Npc(2)\\death\\death_4.png");
	npc_2_Death[7] = iLoadImage("New\\Npc(2)\\death\\death_4.png");
	npc_2_Death[8] = iLoadImage("New\\Npc(2)\\death\\death_5.png");
	npc_2_Death[9] = iLoadImage("New\\Npc(2)\\death\\death_5.png");
	npc_2_Death[10] = iLoadImage("New\\Npc(2)\\death\\death_6.png");
	npc_2_Death[11] = iLoadImage("New\\Npc(2)\\death\\death_6.png");
	npc_2_Death[12] = iLoadImage("New\\Npc(2)\\death\\death_7.png");
	npc_2_Death[13] = iLoadImage("New\\Npc(2)\\death\\death_7.png");
	npc_2_Death[14] = iLoadImage("New\\Npc(2)\\death\\death_8.png");
	npc_2_Death[15] = iLoadImage("New\\Npc(2)\\death\\death_8.png");
	npc_2_Death[16] = iLoadImage("New\\Npc(2)\\death\\death_9.png");
	npc_2_Death[17] = iLoadImage("New\\Npc(2)\\death\\death_9.png");
	npc_2_Death[18] = iLoadImage("New\\Npc(2)\\death\\death_10.png");
	npc_2_Death[19] = iLoadImage("New\\Npc(2)\\death\\death_10.png");
	npc_2_Death[20] = iLoadImage("New\\Npc(2)\\death\\death_11.png");
	npc_2_Death[21] = iLoadImage("New\\Npc(2)\\death\\death_11.png");

	gO = iLoadImage("Game over.jpg");


	//background loading image
	bgL2G2[0] = iLoadImage("New\\BG(2)\\bg (8).png");
	bgL2G2[1] = iLoadImage("New\\BG(2)\\bg (7).png");
	bgL2G2[2] = iLoadImage("New\\BG(2)\\bg (6).png");
	bgL2G2[3] = iLoadImage("New\\BG(2)\\bg (5).png");
	bgL2G2[4] = iLoadImage("New\\BG(2)\\bg (4).png");
	bgL2G2[5] = iLoadImage("New\\BG(2)\\bg (3).png");
	bgL2G2[6] = iLoadImage("New\\BG(2)\\bg (2).png");
	bgL2G2[7] = iLoadImage("New\\BG(2)\\bg (1).png");
	// health bar image loading
	hL2G2 = iLoadImage("New\\Health\\kan_HealthBar.png");
	kan_faceL2G2 = iLoadImage("New\\Health\\Kan.png");
	face_t = iLoadImage("New\\Npc(2)\\Titan.png");
	npc_healthbarL2G2 = iLoadImage("New\\Health\\npc_HealthBar.png");
	// pet image loading
	petL2G2[0] = iLoadImage("New\\Pet\\pet-1.png");
	petL2G2[1] = iLoadImage("New\\Pet\\pet-2.png");
	petL2G2[2] = iLoadImage("New\\Pet\\pet-3.png");
	petL2G2[3] = iLoadImage("New\\Pet\\pet-4.png");
	petL2G2[4] = iLoadImage("New\\Pet\\pet-5.png");
	petL2G2[5] = iLoadImage("New\\Pet\\pet-6.png");
	petL2G2[6] = iLoadImage("New\\Pet\\pet-7.png");
	petL2G2[7] = iLoadImage("New\\Pet\\pet-8.png");
	petL2G2[8] = iLoadImage("New\\Pet\\pet-9.png");
	petL2G2[9] = iLoadImage("New\\Pet\\pet-10.png");
}
void resetGameL2G2() {
	if (!gameoverL2G2)
	return;

	kanL2G2 = { 50, 50, 10, 10, 130, 130, true, false, false, true, false, false };
	npc_2 = { 1000, 50, 10, 10, 180, 180, true, false, false, true };

	// Reset health and attack bars
	kan_healthBar_WidthL2G2 = 158;
	npc_healthBar_WidthL2G2 = 300;
	special_AttackBar_WidthL2G2 = 195;
	npc_2hx = 750;
	// Reset game state flags
	gameoverL2G2 = false;
	win_2 = false;
	health_Regenerate = false;

	// Reset animations
	iL2G2 = 0;
	aL2G2 = 0;
	spL2G2 = 0;
	kdL2G2 = 0;
	//npc_2death = 0;

	// Reset background
	currentBGL2G2 = 0;

	// Ensure characters are alive
	kanL2G2.isAlive = true;
	npc_2.isAlive = true;
}
void DrawL2G2()
{
	//iClear();
	if (gameoverL2G2){
		iShowImage(0, 0, 1143, 600, gO);
		//currentState = AFTERL2;
		return;
	}
	else if (win_2){
		iSetColor(255, 0, 0);
		iText(500, 300, "Noxcious is dead", GLUT_BITMAP_HELVETICA_18);
		currentState = AFTERL2;
		return;
	}
	//bg
	iShowImage(0, 0,1143, 600, bgL2G2[currentBGL2G2]);
	
	//kan healthbar
	if (kan_healthBar_WidthL2G2>115){
		iSetColor(0, 255, 0);
	}
	else if (kan_healthBar_WidthL2G2 > 60){
		iSetColor(255, 255, 0);
	}
	else if (kan_healthBar_WidthL2G2 < 60){
		iSetColor(255, 0, 0);
	}

	iFilledRectangle(73, 535, kan_healthBar_WidthL2G2, healthBar_HeightL2G2);
	iShowImage(15, 490, 290, 100, hL2G2);
	iShowImage(21, 515, 60, 60, kan_faceL2G2);


	if (npc_healthBar_WidthL2G2>120){
		iSetColor(0, 255, 0);
	}
	else if (npc_healthBar_WidthL2G2 > 80){
		iSetColor(255, 255, 0);
	}
	else if (npc_healthBar_WidthL2G2 <= 80){
		iSetColor(255, 0, 0);
	}

	iFilledRectangle(npc_2hx, 520, npc_healthBar_WidthL2G2, healthBar_HeightL2G2);
	
	iShowImage(720, 500, 410, 100, npc_healthbarL2G2);
	iShowImage(1052, 515, 65, 65, face_t);
	if (special_AttackBar_WidthL2G2<195){
		iSetColor(0, 0, 128);
	}
	else if (special_AttackBar_WidthL2G2 = 195){
		iSetColor(255, 69, 0);
	}
	iFilledRectangle(75, 520, special_AttackBar_WidthL2G2, special_AttackBar_HeightL2G2);
	

	if (!npc_2.Reverse && npc_2.attack)
	{
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Attack[nL2G2]);
	}
	else if (npc_2.Reverse&& npc_2.isfly){
		iShowImage(npc_2.x, npc_2.y + 20, npc_2.width, npc_2.height, npc_2_Fly_Reverse[flyL2G2]);
	}

	else if (!npc_2.Reverse&& npc_2.isfly){
		iShowImage(npc_2.x, npc_2.y + 20, npc_2.width, npc_2.height, npc_2_Fly[flyL2G2]);
	}
	else if (npc_2.Reverse && npc_2.attack){
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Reverse_Attack[nL2G2]);
	}

	else if (npc_2.Reverse && npc_2.secondAttack){
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Attack_2_Reverse[atk_2L2G2]);
	}

	else if (!npc_2.Reverse && npc_2.secondAttack){
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Attack_2[atk_2L2G2]);
	}

	else if (npc_2.Reverse&& npc_2.moving){
		
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Reverse_Run[r]);
	}

	else if (!npc_2.Reverse&& npc_2.moving){
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Run[r]);
	}
	else if (!npc_2.isAlive){ // death animation function

		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Death[dL2G2]);
	}
		
	else if(!npc_2.Reverse){
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Attack[0]);
	}
	else if (npc_2.Reverse){
		iShowImage(npc_2.x, npc_2.y, npc_2.width, npc_2.height, npc_2_Reverse_Attack[0]);
	}



	if (!kanL2G2.Reverse&& kanL2G2.moving){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_runL2G2[iL2G2]);
	}
	else if (kanL2G2.Reverse&& kanL2G2.moving){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_Reverse_RunL2G2[iL2G2]);
	}
	else if (kanL2G2.Reverse && kanL2G2.attack){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_Reverse_AttackL2G2[aL2G2]);
	}
	else if (!kanL2G2.Reverse && kanL2G2.specialAttack){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width + 70, kanL2G2.height + 70, kan_Special_AttackL2G2[spL2G2]);
	}
	else if (kanL2G2.Reverse && kanL2G2.specialAttack){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width + 70, kanL2G2.height + 70, kan_Reverse_Special_AttackL2G2[spL2G2]);
	}
	else if (!kanL2G2.Reverse&&kanL2G2.attack){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_attackL2G2[aL2G2]);
	}
	else if (!kanL2G2.Reverse&&kanL2G2.secondAttack){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_attack_2L2G2[kan_SL2G2]);
	}
	else if (kanL2G2.Reverse&&kanL2G2.secondAttack){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_attack_2_ReverseL2G2[kan_SL2G2]);
	}
	else if (!kanL2G2.Reverse&&!kanL2G2.isAlive){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_deathL2G2[kdL2G2]);
	}
	else if (!kanL2G2.Reverse){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_defaultL2G2);
	}
	else if (kanL2G2.Reverse){
		iShowImage(kanL2G2.x, kanL2G2.y, kanL2G2.width, kanL2G2.height, kan_Reverse_defaultL2G2);
	}
	if (!kanL2G2.Reverse){
		iShowImage(kanL2G2.x + 20, kanL2G2.y + 80, 35, 35, petL2G2[pL2G2]);
	}
	else if (kanL2G2.Reverse){
		iShowImage(kanL2G2.x + 75, kanL2G2.y + 80, 35, 35, petL2G2 [pL2G2]);
	}
}

void Kan_Moving_AnimationL2G2(){
	if (kanL2G2.moving)
	{
		iL2G2++;
		if (iL2G2 >= 7){
			iL2G2 = 0;
			kanL2G2.moving = false;
			kanL2G2.Default_Animation = true;

		}
	}
	if (kanL2G2.x >= 1143)
	{
		kanL2G2.x = 40;
		kanL2G2.y = 50;
		kanL2G2.isJumping = false;

	}
	else if (kanL2G2.x <= 0)
	{
		kanL2G2.x = 1110;
		kanL2G2.y = 50;
		kanL2G2.isJumping = false;
	}

}

void kan_Attack_AnimatuonL2G2(){
	if (kanL2G2.attack){
		aL2G2++;
		if (aL2G2 >= 10){
			aL2G2 = 0;
			kanL2G2.attack = false;
			kanL2G2.Default_Animation = true;
		}
	}

}
void kan_Second_Attack_AnimatuonL2G2(){
	if (kanL2G2.secondAttack){
		kan_SL2G2++;
	}
	if (kan_SL2G2 >= 27){
		kan_SL2G2 = 0;
		kanL2G2.secondAttack = false;
	}
}

void npc_2_Attack_Animation(){

	if (npc_2.attack){
		nL2G2++;
		if (nL2G2 >= 7){
			nL2G2 = 0;
			npc_2.attack = false;
		}
	}
}
void npc_2_Attack_2_Animation(){

	if (npc_2.secondAttack){
		atk_2L2G2++;
		if (atk_2L2G2 >= 9){
			atk_2L2G2 = 0;
			npc_2.secondAttack = false;
		}
	}
}
void npc_2_Trigger_Attack() {
	if (!npc_2.attack && npc_2.x - kanL2G2.x < 55 && npc_2.isAlive && !npc_2.isfly) {
		int randomNumber = rand() % 100;

		if (randomNumber < 50){
			npc_2.attack = true;
			nL2G2 = 0;
		}
		else{
			npc_2.secondAttack = true;
			atk_2L2G2 = 0;
		}
	}
}

void npc_2_Moving_Animation() {
	if (npc_2.x - kanL2G2.x > 55 && npc_2.isAlive && !npc_2.isfly) {
		npc_2.moving = true;
		npc_2.attack = false;
		npc_2.Reverse = false;
	}
	else if (kanL2G2.x - npc_2.x > 95 && npc_2.isAlive && !npc_2.isfly)
	{
		npc_2.Reverse = true;
		npc_2.attack = false;
		npc_2.moving = true;
	}
	else {
		npc_2.moving = false;
	}

	if (npc_2.moving) {
		r++;
		if (r >= 11) {
			r = 0;
		}
		if (!npc_2.Reverse)
		{
			npc_2.x -= npc_2.dx;
		}
		else{
			npc_2.x += npc_2.dx;
		}
	}
}
void update_BackgroundL2G2(){
	currentBGL2G2 = (currentBGL2G2 + 1) % totalBGL2G2;
}
void kanJumpL2G2(){
	if (kanL2G2.isJumping){
		kanL2G2.y += jumpSpeedL2G2;
		if (!kanL2G2.Reverse){
			kanL2G2.x += 8;
		}
		else{
			kanL2G2.x -= 8;
		}
		jumpSpeedL2G2 -= gravityL2G2;
		if (kanL2G2.y <= 50){
			kanL2G2.y = 50;
			kanL2G2.isJumping = false;
		}
	}

}
void kan_damageL2G2(){
	if ((npc_2.attack || npc_2.secondAttack) && (npc_2.x - kanL2G2.x < 60 || kanL2G2.x - npc_2.x < 60)){
		kan_healthBar_WidthL2G2 -= 5;
	}
	if (kan_healthBar_WidthL2G2 <= 0){
		kan_healthBar_WidthL2G2 = 0;
		kanL2G2.isAlive = false;
	}
}

void npc_2_damage(){
	if (!kanL2G2.Reverse && (kanL2G2.attack || kanL2G2.secondAttack || kanL2G2.specialAttack) && npc_2.x - kanL2G2.x < 60){
		npc_healthBar_WidthL2G2 -= 3;
		npc_2hx += 3;
		if (!kanL2G2.specialAttack){
			special_AttackBar_WidthL2G2 += 2;
		}
	}
	else if (kanL2G2.Reverse && (kanL2G2.attack || kanL2G2.secondAttack || kanL2G2.specialAttack) && kanL2G2.x - npc_2.x< 120){
		npc_healthBar_WidthL2G2 -= 3;
		npc_2hx += 3;
		if (!kanL2G2.specialAttack){
			special_AttackBar_WidthL2G2 += 2;
		}
		
	}
	if (npc_healthBar_WidthL2G2 <= 0){
		npc_healthBar_WidthL2G2 = 0;
		npc_2.isAlive = false;
		
	}
	if (special_AttackBar_WidthL2G2 >= 195){
		special_AttackBar_WidthL2G2 = 195;
	}
}
void kan_Death_AnimationL2G2(){
	if (!kanL2G2.isAlive){
		kdL2G2++;
	}
	if (kdL2G2 >= 12){
		kdL2G2 = 0;
		gameoverL2G2 = true;
		//currentState = AFTERL2;
	}
}
void npc_Fly_Animation(){
	if (abs(kanL2G2.x - npc_2.x) > 300){
		npc_2.isfly = true;
	}
	if (npc_2.isfly){
		flyL2G2++;
		if (flyL2G2 >= 11){
			flyL2G2 = 0;
			npc_2.isfly = false;
		}
		if (!npc_2.Reverse)
		{
			npc_2.x -= npc_2.dx + 10;
		}
		else{
			npc_2.x += npc_2.dx + 10;
		}
	}
}
void npc_2_death_Animation(){// death animation  funtion
	if (!npc_2.isAlive){
		dL2G2++;
		if (dL2G2 >= 21){
			win_2 = true;
		}
	}


}
void kan_Special_Attack_Animation(){
	if (kanL2G2.specialAttack){
		spL2G2++;
		special_AttackBar_WidthL2G2 -= 8.33f;
	}
	if (spL2G2 >= 17){
		spL2G2 = 0;
		kanL2G2.specialAttack = false;
	}


}
void health_Regenerat_loop(){
	if (health_Regenerate){
		kan_healthBar_WidthL2G2 += 10;
		special_AttackBar_WidthL2G2 -= 10;
	}
	if (kan_healthBar_WidthL2G2 >= 158){
		kan_healthBar_WidthL2G2 = 158;
		health_Regenerate = false;
	}
	else if (special_AttackBar_WidthL2G2 <= 0){
		special_AttackBar_WidthL2G2 = 0;
		health_Regenerate = false;
	}
}
void pet_AnimationL2G2(){
	if (kanL2G2.isAlive){
		pL2G2++;
		if (pL2G2 >= 9){
			pL2G2 = 0;
		}
	}
}
void MouseL2G2(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (!kanL2G2.secondAttack && kanL2G2.isAlive){
			kanL2G2.attack = true;
		}
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		if (!kanL2G2.attack && kanL2G2.isAlive){
			kanL2G2.secondAttack = true;
		}
	}
}

void KeyboardL2G2(unsigned char key)
{
	if (key == 'd' || key =='D' )
	{
		if (kanL2G2.x < npc_2.x - 30 || kanL2G2.x > npc_2.x + 10 && kanL2G2.isAlive){
			kanL2G2.moving = true;
			kanL2G2.Reverse = false;
			kanL2G2.x += kanL2G2.dx;
		}


	}

	if (key == 'a' || key =='A' )
	{
		if (kanL2G2.x > npc_2.x + 99 || kanL2G2.x < npc_2.x - 10 && kanL2G2.isAlive){
			kanL2G2.moving = true;
			kanL2G2.Reverse = true;
			kanL2G2.x -= kanL2G2.dx;
		}


	}
	if (key == 'w' || key == 'W'){
		if (kanL2G2.isJumping == false && kanL2G2.isAlive){
			kanL2G2.isJumping = true;
			jumpSpeedL2G2 = initialvL2G2;

		}
	}

	if (key == 'f' || key =='F' ){

		if (kanL2G2.specialAttack == false && (special_AttackBar_WidthL2G2== 195)){
			kanL2G2.specialAttack = true;

		}
	}
	if (key == 'e' || key == 'E'){

		if (kanL2G2.specialAttack == false && (special_AttackBar_WidthL2G2 == 195)){
			health_Regenerate = true;

		}
	}

	if (key == 'k' || key =='K' )
	{
		if (!kanL2G2.secondAttack && kanL2G2.isAlive){
			kanL2G2.attack = true;
		}
	}

	if (key == 'l' || key == 'L')
	{
		if (!kanL2G2.attack && kanL2G2.isAlive){
			kanL2G2.secondAttack = true;
		}
	}
	if (key == 'r' || key == 'R') {  // Press 'R' to reset
		resetGameL2G2();
	}

}

void timer_for_functionL2G2(){
	kan_Attack_AnimatuonL2G2();
	kan_damageL2G2();
	npc_2_Moving_Animation();
	npc_2_damage();
	health_Regenerat_loop();
	pet_AnimationL2G2();
	npc_2_death_Animation(); //death animation function

}
void timer_for_function_2L2G2(){

	Kan_Moving_AnimationL2G2();
	npc_2_Attack_Animation();
	npc_2_Attack_2_Animation();
	kan_Second_Attack_AnimatuonL2G2();
	Kan_Moving_AnimationL2G2();
	kan_Death_AnimationL2G2();
	update_BackgroundL2G2();
	npc_Fly_Animation();
	kan_Special_Attack_Animation();
	
}

#endif