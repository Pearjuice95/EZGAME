#pragma once

#include <windows.h>
#include "Animation.h"

class Player
{
private:
	POINT coll_base, coll_attack;
	// 콜라이더 좌표 (인게임)


	// 캐릭터 커서 (픽화면)

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
	void setChID(int id); // 캐릭터 고를때 호출
	int GetChID(); // 캐릭터 아이디 호출용
	void UpdateColl_BASE(); // 이동시 호출
	void UPdateColl_ATTACK(); // 공격시 호출
};


