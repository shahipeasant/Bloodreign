#ifndef L3_H
#define L3_H

#include "L2game2.h"

struct CharacterL3{
	int x, y;
	int dx, dy;
	int width, height;
	bool Default_Animation;
	bool moving, attack, isAlive, isfly;
	bool Reverse, isJumping, secondAttack, specialAttack,isIdle;

};
CharacterL3 kanL3 = { 50, 50, 10, 10, 130, 130, true, false, false, true, false, false };
CharacterL3 npc_C = { 300, 50, 10, 10, 130, 140, true, false, false, true };
CharacterL3 npc_3 = { 1000, 50, 10, 10, 180, 180, true, false, false, true };
//bool npc_3.isIdle = true;
int kan_defaultL3;
int kan_Reverse_defaultL3;
int npc_3hx = 750;
int special_AttackBar_WidthL3 = 195;
int kan_healthBar_WidthL3 = 158;
int npc_healthBar_WidthL3 = 300;
int special_AttackBar_HeightL3 = 10;
int healthBar_HeightL3 = 28;
bool gameoverL3 = false;
bool isPowerGL3 = false;
bool health_RegenerateL3;
bool win_3 = false;
int npc_C_healthBar_WidthL3 = 30;
int aC = 0;
int wC = 0;
int idleL3=0;
int iL3 = 0;
int pL3=0;
int aL3 = 0;
int nL3 = 1;
int rL3 = 0;
int eL3 = 0;
int spL3 = 0;
int kan_faceL3;
int npc_healthbarL3;
int faceL3;
int flyL3;
int kan_SL3;
int atk_2L3;
int noxcious_endL3;
int hL3;
int kdL3;
int jumpSpeedL3 = 0;
int gravityL3 = 2;
int initialvL3 = 20;
int currentBGL3 = 0;
int totalBGL3 = 24;
int npc_3deathL3 = 0;

int kan_runL3[8];
int kan_deathL3[13];
int kan_Reverse_RunL3[8];
int kan_attackL3[11];
int kan_attack_2L3[28];
int kan_attack_2_ReverseL3[28];
int kan_Reverse_AttackL3[10];
int kan_Special_AttackL3[18];
int kan_Reverse_Special_AttackL3[18];
int npc_3_Idle[4];
int npc_3_Idle_Reverse[4];

int npc_3_Attack[8];
int npc_3_Run[8];
int npc_3_Reverse_Run[12];
int npc_3_Reverse_Attack[8];
int npc_3_Attack_2_Reverse[8];
int npc_3_Attack_2[8];
int npc_3_death[24];// @Change
int petL3[10];// @Change

int npc_C_Run[5];
int npc_C_Run_Reverse[5];
int npc_C_Attack[8];
int npc_C_Attack_Reverse[8];

int bg3[24];

void loadImageL3(){
	// loading Running images of kan
	kan_runL3[0] = iLoadImage("New\\Run\\R1.png");
	kan_runL3[1] = iLoadImage("New\\Run\\R2.png");
	kan_runL3[2] = iLoadImage("New\\Run\\R3.png");
	kan_runL3[3] = iLoadImage("New\\Run\\R4.png");
	kan_runL3[4] = iLoadImage("New\\Run\\R5.png");
	kan_runL3[5] = iLoadImage("New\\Run\\R6.png");
	kan_runL3[6] = iLoadImage("New\\Run\\R7.png");
	kan_runL3[7] = iLoadImage("New\\Run\\R8.png");


	// loading reverse images of kan
	kan_Reverse_RunL3[0] = iLoadImage("New\\Run\\Rev.R1.png");
	kan_Reverse_RunL3[1] = iLoadImage("New\\Run\\Rev.R2.png");
	kan_Reverse_RunL3[2] = iLoadImage("New\\Run\\Rev.R3.png");
	kan_Reverse_RunL3[3] = iLoadImage("New\\Run\\Rev.R4.png");
	kan_Reverse_RunL3[4] = iLoadImage("New\\Run\\Rev.R5.png");
	kan_Reverse_RunL3[5] = iLoadImage("New\\Run\\Rev.R6.png");
	kan_Reverse_RunL3[6] = iLoadImage("New\\Run\\Rev.R7.png");
	kan_Reverse_RunL3[7] = iLoadImage("New\\Run\\Rev.R8.png");



	kan_defaultL3 = iLoadImage("New\\Attack\\I1.png");
	kan_Reverse_defaultL3 = iLoadImage("New\\Attack\\IR1.png");

	// loading attacking images of kan
	kan_attackL3[0] = iLoadImage("New\\Attack\\1_atk_1.png");
	kan_attackL3[1] = iLoadImage("New\\Attack\\1_atk_2.png");
	kan_attackL3[2] = iLoadImage("New\\Attack\\1_atk_3.png");
	kan_attackL3[3] = iLoadImage("New\\Attack\\1_atk_4.png");
	kan_attackL3[4] = iLoadImage("New\\Attack\\1_atk_5.png");
	kan_attackL3[5] = iLoadImage("New\\Attack\\1_atk_6.png");
	kan_attackL3[6] = iLoadImage("New\\Attack\\1_atk_7.png");
	kan_attackL3[7] = iLoadImage("New\\Attack\\1_atk_8.png");
	kan_attackL3[8] = iLoadImage("New\\Attack\\1_atk_9.png");
	kan_attackL3[9] = iLoadImage("New\\Attack\\1_atk_10.png");
	kan_attackL3[10] = iLoadImage("New\\Attack\\1_atk_11.png");
	//kam second attack

	kan_attack_2L3[0] = iLoadImage("New\\Attack\\3_atk_1.png");
	kan_attack_2L3[1] = iLoadImage("New\\Attack\\3_atk_2.png");
	kan_attack_2L3[2] = iLoadImage("New\\Attack\\3_atk_3.png");
	kan_attack_2L3[3] = iLoadImage("New\\Attack\\3_atk_4.png");
	kan_attack_2L3[4] = iLoadImage("New\\Attack\\3_atk_5.png");
	kan_attack_2L3[5] = iLoadImage("New\\Attack\\3_atk_6.png");
	kan_attack_2L3[6] = iLoadImage("New\\Attack\\3_atk_7.png");
	kan_attack_2L3[7] = iLoadImage("New\\Attack\\3_atk_8.png");
	kan_attack_2L3[8] = iLoadImage("New\\Attack\\3_atk_9.png");
	kan_attack_2L3[9] = iLoadImage("New\\Attack\\3_atk_10.png");
	kan_attack_2L3[10] = iLoadImage("New\\Attack\\3_atk_11.png");
	kan_attack_2L3[11] = iLoadImage("New\\Attack\\3_atk_12.png");
	kan_attack_2L3[12] = iLoadImage("New\\Attack\\3_atk_13.png");
	kan_attack_2L3[13] = iLoadImage("New\\Attack\\3_atk_14.png");
	kan_attack_2L3[14] = iLoadImage("New\\Attack\\3_atk_15.png");
	kan_attack_2L3[15] = iLoadImage("New\\Attack\\3_atk_16.png");
	kan_attack_2L3[16] = iLoadImage("New\\Attack\\3_atk_17.png");
	kan_attack_2L3[17] = iLoadImage("New\\Attack\\3_atk_18.png");
	kan_attack_2L3[18] = iLoadImage("New\\Attack\\3_atk_19.png");
	kan_attack_2L3[19] = iLoadImage("New\\Attack\\3_atk_20.png");
	kan_attack_2L3[20] = iLoadImage("New\\Attack\\3_atk_21.png");
	kan_attack_2L3[21] = iLoadImage("New\\Attack\\3_atk_22.png");
	kan_attack_2L3[22] = iLoadImage("New\\Attack\\3_atk_23.png");
	kan_attack_2L3[23] = iLoadImage("New\\Attack\\3_atk_24.png");
	kan_attack_2L3[24] = iLoadImage("New\\Attack\\3_atk_25.png");
	kan_attack_2L3[25] = iLoadImage("New\\Attack\\3_atk_26.png");
	kan_attack_2L3[26] = iLoadImage("New\\Attack\\3_atk_27.png");
	kan_attack_2L3[27] = iLoadImage("New\\Attack\\3_atk_28.png");

	//kan 2nd attack reverse

	kan_attack_2_ReverseL3[0] = iLoadImage("New\\Attack\\3_atk_1R.png");
	kan_attack_2_ReverseL3[1] = iLoadImage("New\\Attack\\3_atk_2R.png");
	kan_attack_2_ReverseL3[2] = iLoadImage("New\\Attack\\3_atk_3R.png");
	kan_attack_2_ReverseL3[3] = iLoadImage("New\\Attack\\3_atk_4R.png");
	kan_attack_2_ReverseL3[4] = iLoadImage("New\\Attack\\3_atk_5R.png");
	kan_attack_2_ReverseL3[5] = iLoadImage("New\\Attack\\3_atk_6R.png");
	kan_attack_2_ReverseL3[6] = iLoadImage("New\\Attack\\3_atk_7R.png");
	kan_attack_2_ReverseL3[7] = iLoadImage("New\\Attack\\3_atk_8R.png");
	kan_attack_2_ReverseL3[8] = iLoadImage("New\\Attack\\3_atk_9R.png");
	kan_attack_2_ReverseL3[9] = iLoadImage("New\\Attack\\3_atk_10R.png");
	kan_attack_2_ReverseL3[10] = iLoadImage("New\\Attack\\3_atk_11R.png");
	kan_attack_2_ReverseL3[11] = iLoadImage("New\\Attack\\3_atk_12R.png");
	kan_attack_2_ReverseL3[12] = iLoadImage("New\\Attack\\3_atk_13R.png");
	kan_attack_2_ReverseL3[13] = iLoadImage("New\\Attack\\3_atk_14R.png");
	kan_attack_2_ReverseL3[14] = iLoadImage("New\\Attack\\3_atk_15R.png");
	kan_attack_2_ReverseL3[15] = iLoadImage("New\\Attack\\3_atk_16R.png");
	kan_attack_2_ReverseL3[16] = iLoadImage("New\\Attack\\3_atk_17R.png");
	kan_attack_2_ReverseL3[17] = iLoadImage("New\\Attack\\3_atk_18R.png");
	kan_attack_2_ReverseL3[18] = iLoadImage("New\\Attack\\3_atk_19R.png");
	kan_attack_2_ReverseL3[19] = iLoadImage("New\\Attack\\3_atk_20R.png");
	kan_attack_2_ReverseL3[20] = iLoadImage("New\\Attack\\3_atk_21R.png");
	kan_attack_2_ReverseL3[21] = iLoadImage("New\\Attack\\3_atk_22R.png");
	kan_attack_2_ReverseL3[22] = iLoadImage("New\\Attack\\3_atk_23R.png");
	kan_attack_2_ReverseL3[23] = iLoadImage("New\\Attack\\3_atk_24R.png");
	kan_attack_2_ReverseL3[24] = iLoadImage("New\\Attack\\3_atk_25R.png");
	kan_attack_2_ReverseL3[25] = iLoadImage("New\\Attack\\3_atk_26R.png");
	kan_attack_2_ReverseL3[26] = iLoadImage("New\\Attack\\3_atk_27R.png");
	kan_attack_2_ReverseL3[27] = iLoadImage("New\\Attack\\3_atk_28R.png");


	// loading reverse attack images


	kan_Reverse_AttackL3[0] = iLoadImage("New\\Attack\\1_atk_R1.png");
	kan_Reverse_AttackL3[1] = iLoadImage("New\\Attack\\1_atk_R2.png");
	kan_Reverse_AttackL3[2] = iLoadImage("New\\Attack\\1_atk_R3.png");
	kan_Reverse_AttackL3[3] = iLoadImage("New\\Attack\\1_atk_R4.png");
	kan_Reverse_AttackL3[4] = iLoadImage("New\\Attack\\1_atk_R5.png");
	kan_Reverse_AttackL3[5] = iLoadImage("New\\Attack\\1_atk_R6.png");
	kan_Reverse_AttackL3[6] = iLoadImage("New\\Attack\\1_atk_R7.png");
	kan_Reverse_AttackL3[7] = iLoadImage("New\\Attack\\1_atk_R8.png");
	kan_Reverse_AttackL3[8] = iLoadImage("New\\Attack\\1_atk_R9.png");
	kan_Reverse_AttackL3[9] = iLoadImage("New\\Attack\\1_atk_R10.png");
	kan_Reverse_AttackL3[10] = iLoadImage("New\\Attack\\1_atk_R11.png");

	// kan special attack
	kan_Special_AttackL3[0] = iLoadImage("New\\Attack\\sp_atk_1.png");
	kan_Special_AttackL3[1] = iLoadImage("New\\Attack\\sp_atk_2.png");
	kan_Special_AttackL3[2] = iLoadImage("New\\Attack\\sp_atk_3.png");
	kan_Special_AttackL3[3] = iLoadImage("New\\Attack\\sp_atk_4.png");
	kan_Special_AttackL3[4] = iLoadImage("New\\Attack\\sp_atk_5.png");
	kan_Special_AttackL3[5] = iLoadImage("New\\Attack\\sp_atk_6.png");
	kan_Special_AttackL3[6] = iLoadImage("New\\Attack\\sp_atk_7.png");
	kan_Special_AttackL3[7] = iLoadImage("New\\Attack\\sp_atk_8.png");
	kan_Special_AttackL3[8] = iLoadImage("New\\Attack\\sp_atk_9.png");
	kan_Special_AttackL3[9] = iLoadImage("New\\Attack\\sp_atk_10.png");
	kan_Special_AttackL3[10] = iLoadImage("New\\Attack\\sp_atk_11.png");
	kan_Special_AttackL3[11] = iLoadImage("New\\Attack\\sp_atk_12.png");
	kan_Special_AttackL3[12] = iLoadImage("New\\Attack\\sp_atk_13.png");
	kan_Special_AttackL3[13] = iLoadImage("New\\Attack\\sp_atk_14.png");
	kan_Special_AttackL3[14] = iLoadImage("New\\Attack\\sp_atk_15.png");
	kan_Special_AttackL3[15] = iLoadImage("New\\Attack\\sp_atk_16.png");
	kan_Special_AttackL3[16] = iLoadImage("New\\Attack\\sp_atk_17.png");
	kan_Special_AttackL3[17] = iLoadImage("New\\Attack\\sp_atk_18.png");



	//kan special attack reverse




	kan_Reverse_Special_AttackL3[0] = iLoadImage("New\\Attack\\rev_sp_atk_1.png");
	kan_Reverse_Special_AttackL3[1] = iLoadImage("New\\Attack\\rev_sp_atk_2.png");
	kan_Reverse_Special_AttackL3[2] = iLoadImage("New\\Attack\\rev_sp_atk_3.png");
	kan_Reverse_Special_AttackL3[3] = iLoadImage("New\\Attack\\rev_sp_atk_4.png");
	kan_Reverse_Special_AttackL3[4] = iLoadImage("New\\Attack\\rev_sp_atk_5.png");
	kan_Reverse_Special_AttackL3[5] = iLoadImage("New\\Attack\\rev_sp_atk_6.png");
	kan_Reverse_Special_AttackL3[6] = iLoadImage("New\\Attack\\rev_sp_atk_7.png");
	kan_Reverse_Special_AttackL3[7] = iLoadImage("New\\Attack\\rev_sp_atk_8.png");
	kan_Reverse_Special_AttackL3[8] = iLoadImage("New\\Attack\\rev_sp_atk_9.png");
	kan_Reverse_Special_AttackL3[9] = iLoadImage("New\\Attack\\rev_sp_atk_10.png");
	kan_Reverse_Special_AttackL3[10] = iLoadImage("New\\Attack\\rev_sp_atk_11.png");
	kan_Reverse_Special_AttackL3[11] = iLoadImage("New\\Attack\\rev_sp_atk_12.png");
	kan_Reverse_Special_AttackL3[12] = iLoadImage("New\\Attack\\rev_sp_atk_13.png");
	kan_Reverse_Special_AttackL3[13] = iLoadImage("New\\Attack\\rev_sp_atk_14.png");
	kan_Reverse_Special_AttackL3[14] = iLoadImage("New\\Attack\\rev_sp_atk_15.png");
	kan_Reverse_Special_AttackL3[15] = iLoadImage("New\\Attack\\rev_sp_atk_16.png");
	kan_Reverse_Special_AttackL3[16] = iLoadImage("New\\Attack\\rev_sp_atk_17.png");
	kan_Reverse_Special_AttackL3[17] = iLoadImage("New\\Attack\\rev_sp_atk_18.png");





	//kan death image


	kan_deathL3[0] = iLoadImage("New\\Kan Death\\death_1.png");
	kan_deathL3[1] = iLoadImage("New\\Kan Death\\death_2.png");
	kan_deathL3[2] = iLoadImage("New\\Kan Death\\death_3.png");
	kan_deathL3[3] = iLoadImage("New\\Kan Death\\death_4.png");
	kan_deathL3[4] = iLoadImage("New\\Kan Death\\death_5.png");
	kan_deathL3[5] = iLoadImage("New\\Kan Death\\death_6.png");
	kan_deathL3[6] = iLoadImage("New\\Kan Death\\death_7.png");
	kan_deathL3[7] = iLoadImage("New\\Kan Death\\death_8.png");
	kan_deathL3[8] = iLoadImage("New\\Kan Death\\death_9.png");
	kan_deathL3[9] = iLoadImage("New\\Kan Death\\death_10.png");
	kan_deathL3[10] = iLoadImage("New\\Kan Death\\death_11.png");
	kan_deathL3[11] = iLoadImage("New\\Kan Death\\death_12.png");
	kan_deathL3[12] = iLoadImage("New\\Kan Death\\death_13.png");
	//npc attack


	npc_3_Attack[0] = iLoadImage("New\\NpcF\\attack\\attack  (2).png");
	npc_3_Attack[1] = iLoadImage("New\\NpcF\\attack\\attack  (3).png");
	npc_3_Attack[2] = iLoadImage("New\\NpcF\\attack\\attack  (4).png");
	npc_3_Attack[3] = iLoadImage("New\\NpcF\\attack\\attack  (5).png");
	npc_3_Attack[4] = iLoadImage("New\\NpcF\\attack\\attack  (6).png");
	npc_3_Attack[5] = iLoadImage("New\\NpcF\\attack\\attack  (7).png");
	npc_3_Attack[6] = iLoadImage("New\\NpcF\\attack\\attack  (8).png");
	npc_3_Attack[7] = iLoadImage("New\\NpcF\\attack\\attack  (9).png");


	//npc running	
	npc_3_Run[0] = iLoadImage("New\\NpcF\\run\\walk (1).png");

	npc_3_Run[0] = iLoadImage("New\\NpcF\\run\\walk (1).png");
	npc_3_Run[1] = iLoadImage("New\\NpcF\\run\\walk (2).png");
	npc_3_Run[2] = iLoadImage("New\\NpcF\\run\\walk (3).png");
	npc_3_Run[3] = iLoadImage("New\\NpcF\\run\\walk (4).png");
	npc_3_Run[4] = iLoadImage("New\\NpcF\\run\\walk (5).png");
	npc_3_Run[5] = iLoadImage("New\\NpcF\\run\\walk (6).png");
	npc_3_Run[6] = iLoadImage("New\\NpcF\\run\\walk (7).png");
	npc_3_Run[7] = iLoadImage("New\\NpcF\\run\\walk (8).png");


	//npc reverse running
	npc_3_Reverse_Run[0] = iLoadImage("New\\NpcF\\run\\rev_walk (1).png");
	npc_3_Reverse_Run[1] = iLoadImage("New\\NpcF\\run\\rev_walk (2).png");
	npc_3_Reverse_Run[2] = iLoadImage("New\\NpcF\\run\\rev_walk (3).png");
	npc_3_Reverse_Run[3] = iLoadImage("New\\NpcF\\run\\rev_walk (4).png");
	npc_3_Reverse_Run[4] = iLoadImage("New\\NpcF\\run\\rev_walk (5).png");
	npc_3_Reverse_Run[5] = iLoadImage("New\\NpcF\\run\\rev_walk (6).png");
	npc_3_Reverse_Run[6] = iLoadImage("New\\NpcF\\run\\rev_walk (7).png");
	npc_3_Reverse_Run[7] = iLoadImage("New\\NpcF\\run\\rev_walk (8).png");
	//npc reverse attack 

	npc_3_Reverse_Attack[0] = iLoadImage("New\\NpcF\\attack\\rev_attack  (2).png");
	npc_3_Reverse_Attack[1] = iLoadImage("New\\NpcF\\attack\\rev_attack  (3).png");
	npc_3_Reverse_Attack[2] = iLoadImage("New\\NpcF\\attack\\rev_attack  (4).png");
	npc_3_Reverse_Attack[3] = iLoadImage("New\\NpcF\\attack\\rev_attack  (5).png");
	npc_3_Reverse_Attack[4] = iLoadImage("New\\NpcF\\attack\\rev_attack  (6).png");
	npc_3_Reverse_Attack[5] = iLoadImage("New\\NpcF\\attack\\rev_attack  (7).png");
	npc_3_Reverse_Attack[6] = iLoadImage("New\\NpcF\\attack\\rev_attack  (8).png");
	npc_3_Reverse_Attack[7] = iLoadImage("New\\NpcF\\attack\\rev_attack  (9).png");

	//npc second attack reverse
	npc_3_Attack_2_Reverse[0] = iLoadImage("New\\NpcF\\Attack\\rev_atk (1).png");
	npc_3_Attack_2_Reverse[1] = iLoadImage("New\\NpcF\\Attack\\rev_atk (2).png");
	npc_3_Attack_2_Reverse[2] = iLoadImage("New\\NpcF\\Attack\\rev_atk (3).png");
	npc_3_Attack_2_Reverse[3] = iLoadImage("New\\NpcF\\Attack\\rev_atk (4).png");
	npc_3_Attack_2_Reverse[4] = iLoadImage("New\\NpcF\\Attack\\rev_atk (5).png");
	npc_3_Attack_2_Reverse[5] = iLoadImage("New\\NpcF\\Attack\\rev_atk (6).png");
	npc_3_Attack_2_Reverse[6] = iLoadImage("New\\NpcF\\Attack\\rev_atk (7).png");
	npc_3_Attack_2_Reverse[7] = iLoadImage("New\\NpcF\\Attack\\rev_atk (8).png");

	//npc second attack 

	npc_3_Attack_2[0] = iLoadImage("New\\NpcF\\Attack\\atk (1).png");
	npc_3_Attack_2[1] = iLoadImage("New\\NpcF\\Attack\\atk (2).png");
	npc_3_Attack_2[2] = iLoadImage("New\\NpcF\\Attack\\atk (3).png");
	npc_3_Attack_2[3] = iLoadImage("New\\NpcF\\Attack\\atk (4).png");
	npc_3_Attack_2[4] = iLoadImage("New\\NpcF\\Attack\\atk (5).png");
	npc_3_Attack_2[5] = iLoadImage("New\\NpcF\\Attack\\atk (6).png");
	npc_3_Attack_2[6] = iLoadImage("New\\NpcF\\Attack\\atk (7).png");
	npc_3_Attack_2[7] = iLoadImage("New\\NpcF\\Attack\\atk (8).png");

	//npc idle image // @Change
	npc_3_Idle[0] = iLoadImage("New\\NpcF\\Idle\\demon_idle_2.png");
	npc_3_Idle[1] = iLoadImage("New\\NpcF\\Idle\\demon_idle_3.png");
	npc_3_Idle[2] = iLoadImage("New\\NpcF\\Idle\\demon_idle_4.png");
	npc_3_Idle[3] = iLoadImage("New\\NpcF\\Idle\\demon_idle_5.png");
	//npc idle image // @Change
	npc_3_Idle_Reverse[0] = iLoadImage("New\\NpcF\\Idle\\Idle_R_1.png");
	npc_3_Idle_Reverse[1] = iLoadImage("New\\NpcF\\Idle\\Idle_R_2.png");
	npc_3_Idle_Reverse[2] = iLoadImage("New\\NpcF\\Idle\\Idle_R_3.png");
	npc_3_Idle_Reverse[3] = iLoadImage("New\\NpcF\\Idle\\Idle_R_4.png");

	//npc death image // @Change
	npc_3_death[0] = iLoadImage("New\\NpcF\\death\\death(1).png");
	npc_3_death[1] = iLoadImage("New\\NpcF\\death\\death(2).png");
	npc_3_death[2] = iLoadImage("New\\NpcF\\death\\death(3).png");
	npc_3_death[3] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[4] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[5] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[6] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[7] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[8] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[9] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[10] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[11] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[12] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[13] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[14] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[15] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[16] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[17] = iLoadImage("New\\NpcF\\death\\death(4).png");
	npc_3_death[18] = iLoadImage("New\\NpcF\\death\\death(5).png");
	npc_3_death[19] = iLoadImage("New\\NpcF\\death\\death(6).png");
	npc_3_death[20] = iLoadImage("New\\NpcF\\death\\death(7).png");
	npc_3_death[21] = iLoadImage("New\\NpcF\\death\\death(8).png");
	npc_3_death[22] = iLoadImage("New\\NpcF\\death\\death(9).png");
	npc_3_death[23] = iLoadImage("New\\NpcF\\death\\death(10).png");


	//background loading image
	bg3[0] = iLoadImage("New\\BG 3\\fire bg (1).png");
	bg3[1] = iLoadImage("New\\BG 3\\fire bg (2).png");
	bg3[2] = iLoadImage("New\\BG 3\\fire bg (3).png");
	bg3[3] = iLoadImage("New\\BG 3\\fire bg (4).png");
	bg3[4] = iLoadImage("New\\BG 3\\fire bg (5).png");
	bg3[5] = iLoadImage("New\\BG 3\\fire bg (6).png");
	bg3[6] = iLoadImage("New\\BG 3\\fire bg (7).png");
	bg3[7] = iLoadImage("New\\BG 3\\fire bg (8).png");
	bg3[8] = iLoadImage("New\\BG 3\\fire bg (9).png");
	bg3[9] = iLoadImage("New\\BG 3\\fire bg (10).png");
	bg3[10] = iLoadImage("New\\BG 3\\fire bg (11).png");
	bg3[11] = iLoadImage("New\\BG 3\\fire bg (12).png");
	bg3[12] = iLoadImage("New\\BG 3\\fire bg (13).png");
	bg3[13] = iLoadImage("New\\BG 3\\fire bg (14).png");
	bg3[14] = iLoadImage("New\\BG 3\\fire bg (15).png");
	bg3[15] = iLoadImage("New\\BG 3\\fire bg (16).png");
	bg3[16] = iLoadImage("New\\BG 3\\fire bg (17).png");
	bg3[17] = iLoadImage("New\\BG 3\\fire bg (18).png");
	bg3[18] = iLoadImage("New\\BG 3\\fire bg (19).png");
	bg3[19] = iLoadImage("New\\BG 3\\fire bg (20).png");
	bg3[20] = iLoadImage("New\\BG 3\\fire bg (21).png");
	bg3[21] = iLoadImage("New\\BG 3\\fire bg (22).png");
	bg3[22] = iLoadImage("New\\BG 3\\fire bg (23).png");
	bg3[23] = iLoadImage("New\\BG 3\\fire bg (24).png");
	// health bar image loading
	hL3 = iLoadImage("New\\Health\\kan_HealthBar.png");
	kan_faceL3 = iLoadImage("New\\Health\\Kan.png");
	faceL3 = iLoadImage("New\\NpcF\\king-face.png");
	npc_healthbarL3 = iLoadImage("New\\Health\\npc_HealthBar.png");
	//
	petL3[0] = iLoadImage("New\\Pet\\pet-1.png");
	petL3[1] = iLoadImage("New\\Pet\\pet-2.png");
	petL3[2] = iLoadImage("New\\Pet\\pet-3.png");
	petL3[3] = iLoadImage("New\\Pet\\pet-4.png");
	petL3[4] = iLoadImage("New\\Pet\\pet-5.png");
	petL3[5] = iLoadImage("New\\Pet\\pet-6.png");
	petL3[6] = iLoadImage("New\\Pet\\pet-7.png");
	petL3[7] = iLoadImage("New\\Pet\\pet-8.png");
	petL3[8] = iLoadImage("New\\Pet\\pet-9.png");
	petL3[9] = iLoadImage("New\\Pet\\pet-10.png");
	gO = iLoadImage("Game over.jpg");// Creep image load
	// creep run
	npc_C_Run[0] = iLoadImage("New\\NpcC\\walk\\w1.png");
	npc_C_Run[1] = iLoadImage("New\\NpcC\\walk\\w2.png");
	npc_C_Run[2] = iLoadImage("New\\NpcC\\walk\\w3.png");
	npc_C_Run[3] = iLoadImage("New\\NpcC\\walk\\w4.png");
	npc_C_Run[4] = iLoadImage("New\\NpcC\\walk\\w5.png");
	// creep reverse run
	npc_C_Run_Reverse[0] = iLoadImage("New\\NpcC\\walk\\rw (1).png");
	npc_C_Run_Reverse[1] = iLoadImage("New\\NpcC\\walk\\rw (2).png");
	npc_C_Run_Reverse[2] = iLoadImage("New\\NpcC\\walk\\rw (3).png");
	npc_C_Run_Reverse[3] = iLoadImage("New\\NpcC\\walk\\rw (4).png");
	npc_C_Run_Reverse[4] = iLoadImage("New\\NpcC\\walk\\rw (5).png");
	// creep attack
	npc_C_Attack[0] = iLoadImage("New\\NpcC\\attack\\k1.png");
	npc_C_Attack[1] = iLoadImage("New\\NpcC\\attack\\k2.png");
	npc_C_Attack[2] = iLoadImage("New\\NpcC\\attack\\k3.png");
	npc_C_Attack[3] = iLoadImage("New\\NpcC\\attack\\k4.png");
	npc_C_Attack[4] = iLoadImage("New\\NpcC\\attack\\k5.png");
	npc_C_Attack[5] = iLoadImage("New\\NpcC\\attack\\k6.png");
	npc_C_Attack[6] = iLoadImage("New\\NpcC\\attack\\k7.png");
	npc_C_Attack[7] = iLoadImage("New\\NpcC\\attack\\k8.png");
	// creep reverse attack
	npc_C_Attack_Reverse[0] = iLoadImage("New\\NpcC\\attack\\revk (1).png");
	npc_C_Attack_Reverse[1] = iLoadImage("New\\NpcC\\attack\\revk (2).png");
	npc_C_Attack_Reverse[2] = iLoadImage("New\\NpcC\\attack\\revk (3).png");
	npc_C_Attack_Reverse[3] = iLoadImage("New\\NpcC\\attack\\revk (4).png");
	npc_C_Attack_Reverse[4] = iLoadImage("New\\NpcC\\attack\\revk (5).png");
	npc_C_Attack_Reverse[5] = iLoadImage("New\\NpcC\\attack\\revk (6).png");
	npc_C_Attack_Reverse[6] = iLoadImage("New\\NpcC\\attack\\revk (7).png");
	npc_C_Attack_Reverse[7] = iLoadImage("New\\NpcC\\attack\\revk (8).png");
}
void resetGameL3() {
	if (!gameoverL3 && !win_3)
		return;

	kanL3 = { 50, 50, 10, 10, 130, 130, true, false, false, true, false, false };
	npc_3 = { 1000, 50, 10, 10, 180, 180, true, false, false, true };

	// Reset health and attack bars
	npc_C_healthBar_WidthL3 = 30;
	kan_healthBar_WidthL3 = 158;
	npc_healthBar_WidthL3 = 300;
	special_AttackBar_WidthL3 = 195;
	npc_3hx = 750;
	// Reset game state flags
	gameoverL3 = false;
	win_3 = false;
	health_RegenerateL3 = false;

	// Reset animations
	iL3 = 0;
	aL3 = 0;
	spL3 = 0;
	kdL3 = 0;
	npc_3deathL3 = 0;

	// Reset background
	currentBGL3 = 0;

	// Ensure characters are alive
	kanL3.isAlive = true;
	npc_3.isAlive = true;
}

void DrawL3()
{

	//iClear();
	if (gameoverL3){
		iShowImage(0, 0, 1143, 600, gO);
	
		return;
	}
	else if (win_3&& npc_3deathL3 >= 23){ // @Change
		
		iShowImage(0, 0, screenX, screenY, congrats);
		//currentState = CONGRATS;
		return;
	}

	iShowImage(0, 0, 1143, 600, bg3[currentBGL3]);

	if (kan_healthBar_WidthL3>115){
		iSetColor(0, 255, 0);
	}
	else if (kan_healthBar_WidthL3 > 60){
		iSetColor(255, 255, 0);
	}
	else if (kan_healthBar_WidthL3 < 60){
		iSetColor(255, 0, 0);
	}

	iFilledRectangle(73, 535, kan_healthBar_WidthL3, healthBar_HeightL3);
	iShowImage(15, 490, 290, 100, hL3);
	iShowImage(21, 515, 60, 60, kan_faceL3);

	if (npc_healthBar_WidthL3>120){
		iSetColor(0, 255, 0);
	}
	else if (npc_healthBar_WidthL3 > 80){
		iSetColor(255, 255, 0);
	}
	else if (npc_healthBar_WidthL3 <= 80){
		iSetColor(255, 0, 0);
	}

	iFilledRectangle(npc_3hx, 520, npc_healthBar_WidthL3, healthBar_HeightL3);
	iShowImage(720, 500, 410, 100, npc_healthbarL3);
	iShowImage(1045, 510, 75, 75, faceL3);

	if (special_AttackBar_WidthL3<195){
		iSetColor(0, 0, 128);
	}
	else if (special_AttackBar_WidthL3 == 195){
		iSetColor(255, 69, 0);
	}
	iFilledRectangle(75, 520, special_AttackBar_WidthL3, special_AttackBar_HeightL3);


	iSetColor(0, 255, 0);
	iFilledRectangle(npc_C.x, npc_3.y + 60, npc_C_healthBar_WidthL3, special_AttackBar_HeightL3);



	if (!npc_3.Reverse && npc_3.attack)
	{

		iShowImage(npc_3.x, npc_3.y, npc_3.width + 80, npc_3.height + 60, npc_3_Attack[nL3]);
	}

	else if (npc_3.Reverse && npc_3.attack){
		iShowImage(npc_3.x, npc_3.y, npc_3.width + 80, npc_3.height + 60, npc_3_Reverse_Attack[nL3]);
	}

	else if (npc_3.Reverse && npc_3.secondAttack){
		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_Attack_2_Reverse[atk_2L3]);
	}

	else if (!npc_3.Reverse && npc_3.secondAttack){
		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_Attack_2[atk_2L3]);
	}

	else if (npc_3.Reverse&& npc_3.moving){

		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_Reverse_Run[rL3]);
	}

	else if (!npc_3.Reverse&& npc_3.moving){
		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_Run[rL3]);
	}

	else if (!npc_3.isAlive){ // @Change

		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_death[npc_3deathL3]);
	}
	else if (!npc_3.Reverse && npc_3.isIdle){
		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_Idle[idleL3]);
	}
	else if (npc_3.Reverse && npc_3.isIdle){
		iShowImage(npc_3.x, npc_3.y, npc_3.width, npc_3.height, npc_3_Idle_Reverse[idleL3]);
	}



	if (!kanL3.Reverse&& kanL3.moving){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_runL3[iL3]);
	}
	else if (kanL3.Reverse&& kanL3.moving){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_Reverse_RunL3[iL3]);
	}
	else if (kanL3.Reverse && kanL3.attack){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_Reverse_AttackL3[aL3]);
	}
	else if (!kanL3.Reverse && kanL3.specialAttack){
		iShowImage(kanL3.x, kanL3.y, kanL3.width + 70, kanL3.height + 70, kan_Special_AttackL3[spL3]);
	}
	else if (kanL3.Reverse && kanL3.specialAttack){
		iShowImage(kanL3.x, kanL3.y, kanL3.width + 70, kanL3.height + 70, kan_Reverse_Special_AttackL3[spL3]);
	}
	else if (!kanL3.Reverse&&kanL3.attack){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_attackL3[aL3]);
	}
	else if (!kanL3.Reverse&&kanL3.secondAttack){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_attack_2L3[kan_SL3]);
	}
	else if (kanL3.Reverse&&kanL3.secondAttack){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_attack_2_ReverseL3[kan_SL3]);
	}
	else if (!kanL3.Reverse&&!kanL3.isAlive){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_deathL3[kdL3]);
	}
	else if (!kanL3.Reverse){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_defaultL3);
	}
	else if (kanL3.Reverse){
		iShowImage(kanL3.x, kanL3.y, kanL3.width, kanL3.height, kan_Reverse_defaultL3);
	}
	// pet animation 
	if (!kanL3.Reverse){
		iShowImage(kanL3.x + 20, kanL3.y + 80, 35, 35, petL3[pL3]);
	}
	else if (kanL3.Reverse){
		iShowImage(kanL3.x + 75, kanL3.y + 80, 35, 35, petL3[pL3]);
	}if (npc_C.isAlive && npc_C.moving && !npc_C.Reverse){
		iShowImage(npc_C.x, npc_C.y, npc_C.width, npc_C.height, npc_C_Run_Reverse[wC]);

	}
	else if (npc_C.isAlive && npc_C.moving && npc_C.Reverse){

		iShowImage(npc_C.x, npc_C.y, npc_C.width, npc_C.height, npc_C_Run[wC]);
	}
	else if (npc_C.isAlive && npc_C.attack && npc_C.Reverse){
		iShowImage(npc_C.x, npc_C.y - 20, npc_C.width, npc_C.height, npc_C_Attack[aC]);
	}
	else if (npc_C.isAlive && npc_C.attack && !npc_C.Reverse){
		iShowImage(npc_C.x, npc_C.y - 20, npc_C.width, npc_C.height, npc_C_Attack_Reverse[aC]);
	}
	else if (npc_C.isAlive  && npc_C.Reverse){
		iShowImage(npc_C.x, npc_C.y, npc_C.width, npc_C.height, npc_C_Run[0]);
	}
	else if (npc_C.isAlive  && !npc_C.Reverse){
		iShowImage(npc_C.x, npc_C.y, npc_C.width, npc_C.height, npc_C_Run[0]);
	}

}

void Kan_Moving_AnimationL3(){
	if (kanL3.moving)
	{
		iL3++;
		if (iL3 >= 7){
			iL3 = 0;
			kanL3.moving = false;
			kanL3.Default_Animation = true;

		}
	}
	if (kanL3.x >= 1143)
	{
		kanL3.x = 40;
		kanL3.y = 50;
		kanL3.isJumping = false;

	}
	else if (kanL3.x <= 0)
	{
		kanL3.x = 1110;
		kanL3.y = 50;
		kanL3.isJumping = false;
	}

}

void kan_Attack_AnimatuonL3(){
	if (kanL3.attack){
		aL3++;
		if (aL3 >= 10){
			aL3 = 0;
			kanL3.attack = false;
			kanL3.Default_Animation = true;
		}
	}

}
void kan_Second_Attack_AnimatuonL3(){
	if (kanL3.secondAttack){
		kan_SL3++;
	}
	if (kan_SL3 >= 27){
		kan_SL3 = 0;
		kanL3.secondAttack = false;
	}
}
void npc_3_Attack_AnimationL3(){

	if (npc_3.attack){
		nL3++;
		if (nL3 >= 7){
			nL3 = 0;
			npc_3.attack = false;
		}
	}
}
void npc_3_Attack_2_AnimationL3(){

	if (npc_3.secondAttack){
		atk_2L3++;
		if (atk_2L3 >= 7){
			atk_2L3 = 0;
			npc_3.secondAttack = false;
		}
	}
}
void npc_3_Trigger_AttackL3() {
	if (!npc_3.attack && !npc_3.secondAttack && npc_3.x - kanL3.x < 55 && npc_3.isAlive) {

		int randomNumber = rand() % 100;




		if (randomNumber < 50){
			npc_3.attack = true;
			nL3 = 0;
		}
		else{
			npc_3.secondAttack = true;
			atk_2L3 = 0;
		}
	}
}
void npc_3_Moving_AnimationL3() {
	if (npc_3.x - kanL3.x > 55 && npc_3.isAlive && !npc_3.isfly) {
		npc_3.moving = true;
		npc_3.attack = false;
		npc_3.Reverse = false;
		npc_3.isIdle = false;
	}
	else if (kanL3.x - npc_3.x > 95 && npc_3.isAlive && !npc_3.isfly)
	{
		npc_3.Reverse = true;
		npc_3.attack = false;
		npc_3.moving = true;
		npc_3.isIdle = false;
	}
	else {
		npc_3.moving = false;
		npc_3.isIdle = true;
	}

	if (npc_3.moving) {
		rL3++;
		if (rL3 >= 7) {
			rL3 = 0;
		}
		if (!npc_3.Reverse)
		{
			npc_3.x -= npc_3.dx;

		}
		else{
			npc_3.x += npc_3.dx;
		}
	}
}
void pet_AnimationL3(){
	if (kanL3.isAlive){
		pL3++;
		if (pL3 >= 9){
			pL3 = 0;
		}
	}
}
void update_BackgroundL3(){
	currentBGL3 = (currentBGL3 + 1) % totalBGL3;
}
void kanJumpL3(){
	if (kanL3.isJumping){
		kanL3.y += jumpSpeedL3;
		if (!kanL3.Reverse){
			kanL3.x += 8;
		}
		else{
			kanL3.x -= 8;
		}
		jumpSpeedL3 -= gravityL3;
		if (kanL3.y <= 50){
			kanL3.y = 50;
			kanL3.isJumping = false;
		}
	}

}
void kan_damageL3(){
	if ((npc_3.attack || npc_3.secondAttack) && (npc_3.x - kanL3.x < 60 || kanL3.x - npc_3.x <60)) {

		kan_healthBar_WidthL3 -= 5;
		npc_healthBar_WidthL3 += 2;
		npc_3hx -= 2;
		if (npc_healthBar_WidthL3 > 300)
		{
			npc_healthBar_WidthL3 = 300;
			npc_3hx = 750;
		}
	}
	if (npc_C.attack && abs(npc_C.x - kanL3.x) < 60){// creep
		kan_healthBar_WidthL3 -= 1;
	}
	if (kan_healthBar_WidthL3 <= 0){
		kan_healthBar_WidthL3 = 0;
		kanL3.isAlive = false;
	}

}
void npc_3_damageL3(){
	if (!kanL3.Reverse && (kanL3.attack || kanL3.secondAttack || kanL3.specialAttack) && npc_3.x - kanL3.x < 60){
		npc_healthBar_WidthL3 -= 3;
		npc_3hx += 3;
		if (!kanL3.specialAttack){
			special_AttackBar_WidthL3 += 2;
		}
		
	}
	else if (kanL3.Reverse && (kanL3.attack || kanL3.secondAttack || kanL3.specialAttack) && kanL3.x - npc_3.x< 120){
		npc_healthBar_WidthL3 -= 3;
		npc_3hx += 3;
		if (!kanL3.specialAttack){
			special_AttackBar_WidthL3 += 2;
		}
	}

	
	if (npc_healthBar_WidthL3 <= 0){
		npc_healthBar_WidthL3 = 0;
		npc_3.isAlive = false;
	}
	if (special_AttackBar_WidthL3 >= 195){
		special_AttackBar_WidthL3 = 195;
	}

}
void kan_Death_AnimationL3(){
	if (!kanL3.isAlive){
		kdL3++;
	}
	if (kdL3 >= 12){
		kdL3 = 0;
		gameoverL3 = true;
		//currentState = CONGRATS;
	}
}

void kan_Special_Attack_AnimationL3(){
	if (kanL3.specialAttack){
		spL3++;
		special_AttackBar_WidthL3 -= 8.33f;
	}
	if (spL3 >= 17){
		spL3 = 0;
		kanL3.specialAttack = false;
	}


}
void health_Regenerat_loopL3(){
	if (health_RegenerateL3){
		kan_healthBar_WidthL3 += 10;
		special_AttackBar_WidthL3 -= 10;
	}
	if (kan_healthBar_WidthL3 >= 158){
		kan_healthBar_WidthL3 = 158;
		health_RegenerateL3 = false;
	}
	else if (special_AttackBar_WidthL3 <= 0){
		special_AttackBar_WidthL3 = 0;
		health_RegenerateL3 = false;
	}
}
void npc_3Idle_AnimationL3(){// @Change
	if (npc_3.isIdle){
		idleL3++;
		if (idleL3 >= 3){
			idleL3 = 0;
		}
	}

}
void npc_3_death_Animation(){// @Change
	if (!npc_3.isAlive){
		npc_3deathL3++;
		if (npc_3deathL3 >= 23){
			win_3 = true;
		}
	}


}
void npc_C_Moving_AnimationL3() {
	if (npc_C.x - kanL3.x > 55 && npc_C.isAlive) {
		npc_C.moving = true;
		npc_C.attack = false;
		npc_C.Reverse = false;
		npc_C.isIdle = false;
	}
	else if (kanL3.x - npc_C.x > 95 && npc_C.isAlive)
	{
		npc_C.Reverse = true;
		npc_C.attack = false;
		npc_C.moving = true;
		npc_C.isIdle = false;
	}
	else {
		npc_C.moving = false;
		npc_C.isIdle = true;
	}

	if (npc_C.moving) {
		wC++;
		if (wC >= 4) {
			wC = 0;
		}
		if (npc_C.Reverse)
		{
			npc_C.x += npc_C.dx;
		}
		else {
			npc_C.x -= npc_C.dx;
		}
	}
}
void npc_C_Attack_AnimationL3(){// creep

	if (npc_C.attack){
		aC++;
		if (aC >= 7){
			aC = 0;
			npc_C.attack = false;
		}
	}
}
void npc_C_Trigger_AttackL3() {// creep
	if (!npc_C.attack  && abs(npc_C.x - kanL3.x) < 100 && npc_C.isAlive) {
		npc_C.attack = true;
		aC = 0;
	}

}
void npc_C_damageL3(){// creep
	if (!kanL3.Reverse && (kanL3.attack || kanL3.secondAttack || kanL3.specialAttack) && npc_C.x - kanL3.x < 60){
		npc_C_healthBar_WidthL3 -= 3;
		//npc_Chx += 3;
		if (!kanL3.specialAttack){
			special_AttackBar_WidthL3 += 2;
		}
	}
	else if (kanL3.Reverse && (kanL3.attack || kanL3.secondAttack || kanL3.specialAttack) && kanL3.x - npc_C.x < 120){
		npc_C_healthBar_WidthL3 -= 3;
		//npc_Chx += 3;
		if (!kanL3.specialAttack){
			special_AttackBar_WidthL3 += 2;
		}
	}

	if (npc_C_healthBar_WidthL3 <= 0){
		npc_C_healthBar_WidthL3 = 0;
		npc_C.isAlive = false;
	}
	if (special_AttackBar_WidthL3 >= 195){
		special_AttackBar_WidthL3 = 195;
	}
}
void aliving_creep(){// creep
	if (npc_healthBar_WidthL3 < 250 && npc_3.isAlive && !npc_C.isAlive)
	{
		npc_C.isAlive = true;
		npc_C.x = 500;
		npc_C_healthBar_WidthL3 = 30;

	}
}
void MouseL3(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (!kanL3.secondAttack && kanL3.isAlive){
			kanL3.attack = true;
		}
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		if (!kanL3.attack && kanL3.isAlive){
			kanL3.secondAttack = true;
		}
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void KeyboardL3(unsigned char key)
{
	if (key == 'd'||key =='D')
	{
		if (kanL3.x < npc_3.x - 30 || kanL3.x > npc_3.x + 10 && kanL3.isAlive){
			kanL3.moving = true;
			kanL3.Reverse = false;
			kanL3.x += kanL3.dx;
		}


	}

	if (key == 'a'|| key=='A')
	{
		if (kanL3.x > npc_3.x + 99 || kanL3.x < npc_3.x - 10 && kanL3.isAlive){
			kanL3.moving = true;
			kanL3.Reverse = true;
			kanL3.x -= kanL3.dx;
		}

		
	}
	if (key == 'w'|| key=='W'){
		if (kanL3.isJumping == false && kanL3.isAlive){
			kanL3.isJumping = true;
			jumpSpeedL3 = initialvL3;

		}
	}

	if (key == 'f'|| key =='F'){

		if (kanL3.specialAttack == false && (special_AttackBar_WidthL3 == 195)){
			kanL3.specialAttack = true;

		}
	}
	if (key == 'e'|| key =='E'){

		if (kanL3.specialAttack == false && (special_AttackBar_WidthL3 == 195)){
			health_RegenerateL3 = true;

		}
	}

	if (key == 'k'|| key =='K')
	{
		if (!kanL3.secondAttack && kanL3.isAlive){
			kanL3.attack = true;
		}
	}


	if (key == 'l'|| key =='L')
	{
		if (!kanL3.attack && kanL3.isAlive){
			kanL3.secondAttack = true;
		}
	}
	if (key == 'r' || key == 'R') {
		resetGameL3();
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

void timer_for_functionL3(){
	kan_Attack_AnimatuonL3();
	kan_damageL3();
	npc_3_Moving_AnimationL3();
	npc_C_Moving_AnimationL3();// creep
	npc_3_damageL3();
	npc_C_damageL3();// creep
	health_Regenerat_loopL3();
	pet_AnimationL3();// @Change
	npc_C_Trigger_AttackL3();
	aliving_creep();// creep

}
void timer_for_function_2L3(){

	Kan_Moving_AnimationL3();
	npc_3_Attack_AnimationL3();
	npc_3_Attack_2_AnimationL3();
	kan_Second_Attack_AnimatuonL3();
	Kan_Moving_AnimationL3();
	kan_Death_AnimationL3();
	npc_3_death_Animation();
	npc_3Idle_AnimationL3();
	npc_C_Attack_AnimationL3();// creep
	kan_Special_Attack_AnimationL3();

}
void timer_for_function_3L3(){
	update_BackgroundL3();
	kanJumpL3();
}


#endif
