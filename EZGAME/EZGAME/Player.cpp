#include "Player.h"
//
//void Player::GetAniToPlayer(int id)
//{
//	switch (id)
//	{
//		case 1:
//		{
//			this->BJUMP = g_Akuma_BJUMP;
//			this->IDLE = g_Akuma_IDLE;
//			this->INTRO = g_Akuma_INTRO;
//			this->JUMP = g_Akuma_JUMP;
//			this->KICK = g_Akuma_KICK;
//			this->LOSE = g_Akuma_LOSE;
//			this->WIN = g_Akuma_WIN;
//		}
//		break;
//
//		case 2:
//		{
//			this->BJUMP = g_Haohmaru_BJUMP;
//			this->IDLE = g_Haohmaru_IDLE;
//			this->INTRO = g_Haohmaru_INTRO;
//			this->JUMP = g_Haohmaru_JUMP;
//			this->KICK = g_Haohmaru_KICK;
//			this->LOSE = g_Haohmaru_LOSE;
//			this->WIN = g_Haohmaru_WIN;
//		}
//		break;
//
//		case 3:
//		{
//			this->BJUMP = g_Iori_BJUMP;
//			this->IDLE = g_Iori_IDLE;
//			this->INTRO = g_Iori_INTRO;
//			this->JUMP = g_Iori_JUMP;
//			this->KICK = g_Iori_KICK;
//			this->LOSE = g_Iori_LOSE;
//			this->WIN = g_Iori_WIN;
//		}
//		break;
//
//		case 4:
//		{
//			this->BJUMP = g_Kim_BJUMP;
//			this->IDLE = g_Kim_IDLE;
//			this->INTRO = g_Kim_INTRO;
//			this->JUMP = g_Kim_JUMP;
//			this->KICK = g_Kim_KICK;
//			this->LOSE = g_Kim_LOSE;
//			this->WIN = g_Kim_WIN;
//		}
//		break;
//
//		case 5:
//		{
//			this->BJUMP = g_Nanaya_BJUMP;
//			this->IDLE = g_Nanaya_IDLE;
//			this->INTRO = g_Nanaya_INTRO;
//			this->JUMP = g_Nanaya_JUMP;
//			this->KICK = g_Nanaya_KICK;
//			this->LOSE = g_Nanaya_LOSE;
//			this->WIN = g_Nanaya_WIN;
//		}
//		break;
//
//		case 6:
//		{
//			this->BJUMP = g_Ryu_BJUMP;
//			this->IDLE = g_Ryu_IDLE;
//			this->INTRO = g_Ryu_INTRO;
//			this->JUMP = g_Ryu_JUMP;
//			this->KICK = g_Ryu_KICK;
//			this->LOSE = g_Ryu_LOSE;
//			this->WIN = g_Ryu_WIN;
//		}
//		break;
//	}
//}

void Player::GetAniToPlayer(Animation* _BJUMP, Animation* _IDLE, Animation* _INTRO,
	Animation* _JUMP, Animation* _KICK, Animation* _LOSE, Animation* _WIN,
	Animation* _BJUMPM, Animation* _IDLEM, Animation* _INTROM,
	Animation* _JUMPM, Animation* _KICKM, Animation* _LOSEM, Animation* _WINM)
{
	this->BJUMP = _BJUMP;
	this->IDLE = _IDLE;
	this->INTRO = _INTRO;
	this->JUMP = _JUMP;
	this->KICK = _KICK;
	this->LOSE = _LOSE;
	this->WIN = _WIN;

	this->BJUMPM = _BJUMPM;
	this->IDLEM = _IDLEM;
	this->INTROM = _INTROM;
	this->JUMPM = _JUMPM;
	this->KICKM = _KICKM;
	this->LOSEM = _LOSEM;
	this->WINM = _WINM;
}

void Player::setChID(int id)
{
	this->characterID = id;
}

int Player::GetChID()
{
	return this->characterID;
}