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

	// �ִϸ��̼ǿ��� �� �� �ѱ� �� �� �������� ������� �ݶ��̴� ũ�� ����
	void ChangeColliderSize(int _bmWidth, int _bmHeight);
};