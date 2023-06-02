#include "Collider.h"

#include "Player.h"

bool PlayerCollider::IsCollideWithPlayer(PlayerCollider *_other)
{
	RECT _mCollider = m_Collider;
	RECT _eCollider = _other->m_Collider;

	RECT _tempCollider;

	// 충돌하면 true, 아니면 false;
	return IntersectRect(&_tempCollider, &_eCollider, &_mCollider) ? true : false;
}

bool PlayerCollider::IsCollideWithWall(WallCollider* _other)
{
	RECT _otherCollider = m_Collider;

	RECT _tempCollider;

	// 충돌하면 true, 아니면 false;
	return IntersectRect(&_tempCollider, &this->m_Collider, &_otherCollider) ? true : false;
}

void PlayerCollider::ChangeColliderSize(int _bmWidth, int _bmHeight)
{
	this->mx = _bmWidth;

	this->my = _bmHeight;
}
