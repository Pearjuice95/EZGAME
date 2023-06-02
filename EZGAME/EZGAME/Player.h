#pragma once

#include <windows.h>
#include "Animation.h"

class Player
{
private:
	POINT coll_base, coll_attack;
	// �ݶ��̴� ��ǥ (�ΰ���)


	// ĳ���� Ŀ�� (��ȭ��)

public:
	int characterID;
	Player(int pnum)
	{
		playernum = pnum;

		if (pnum == 1)
		{
			selectCursor.x = 287;
			selectCursor.y = 184;
		}

		else if (pnum == 2)
		{
			selectCursor.x = 287;
			selectCursor.y = 384;
		}

		coll_base.x = 10;
		coll_base.y = 10;

		coll_attack.x = 0;
		coll_attack.y = 0;
	};
	POINT selectCursor;
	POINT playerpoint;

	Animation* current;

	Animation* BJUMP;
	Animation* IDLE;
	Animation* INTRO;
	Animation* JUMP;
	Animation* KICK;
	Animation* LOSE;
	Animation* WIN;
	Animation* BJUMPM;
	Animation* IDLEM;
	Animation* INTROM;
	Animation* JUMPM;
	Animation* KICKM;
	Animation* LOSEM;
	Animation* WINM;

	int status = 2;
	int playernum;
	void GetAniToPlayer(Animation* _BJUMP, Animation* _IDLE, Animation* _INTRO,
		Animation* _JUMP, Animation* _KICK, Animation* _LOSE, Animation* _WIN,
		Animation* _BJUMPM, Animation* _IDLEM, Animation* _INTROM,
		Animation* _JUMPM, Animation* _KICKM, Animation* _LOSEM, Animation* _WINM);
	void setChID(int id); // ĳ���� ���� ȣ��
	int GetChID(); // ĳ���� ���̵� ȣ���
	void UpdateColl_BASE(); // �̵��� ȣ��
	void UPdateColl_ATTACK(); // ���ݽ� ȣ��
};


