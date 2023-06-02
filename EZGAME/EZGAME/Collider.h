#pragma once
#include <Windows.h>
#include "Player.h"

extern Player p1;
extern Player p2;

class WallCollider
{
public:
	int mx;
	int my;
	POINT m_point;

	RECT m_Collider;
};

class PlayerCollider
{
public:
	int mx;
	int my;
	POINT m_point;

	RECT m_Collider;

	bool IsCollideWithPlayer(PlayerCollider* _other);
	
	bool IsCollideWithWall(WallCollider* _other);

	// 애니메이션에서 한 장 넘길 때 그 프레임의 사이즈로 콜라이더 크기 변경
	void ChangeColliderSize(int _bmWidth, int _bmHeight);
};