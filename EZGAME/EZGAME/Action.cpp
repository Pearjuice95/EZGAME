#include "Action.h"
#include "Sound.h"

extern Player p1;
extern Player p2;
extern bool g_IsP1Left;

void DoBJUMP(Player* _player)
{
	// ---------- 아쿠마 백점프 예외 ---------
	if (_player->GetChID() == 1 && _player == &p1)
	{
		if (g_IsP1Left == true)
		{
			if (_player->playerpoint.x <= 4)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x -= 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}

		else if (g_IsP1Left == false)
		{
			if (_player->playerpoint.x + _player->current->BmpX >= 1020)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x += 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}
	}

	else if (_player->GetChID() == 1 && _player == &p2)
	{
		if (g_IsP1Left == false)
		{
			if (_player->playerpoint.x <= 4)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x -= 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}

		else if (g_IsP1Left == true)
		{
			if (_player->playerpoint.x + _player->current->BmpX >= 1020)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x += 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}
	}
	// ---------------------------

	// ---------- 이오리 백점프 예외 ----------
	if (_player->GetChID() == 3 && _player == &p1)
	{
		if (g_IsP1Left == true)
		{
			if (_player->playerpoint.x <= 4)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x -= 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}

		else if (g_IsP1Left == false)
		{
			if (_player->playerpoint.x + _player->current->BmpX >= 1020)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x += 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}
	}

	else if (_player->GetChID() == 3 && _player == &p2)
	{
		if (g_IsP1Left == false)
		{
			if (_player->playerpoint.x <= 4)
			{
				if (_player->current->Current_Frame > 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x -= 8;
				if (_player->current->Current_Frame > 59)
				{
					_player->status = 2;
				}
			}
		}

		else if (g_IsP1Left == true)
		{
			if (_player->playerpoint.x + _player->current->BmpX >= 1020)
			{
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}

			else
			{
				if (_player->current->Current_Frame > 10)
					_player->playerpoint.x += 8;
				if (_player->current->Current_Frame >= 59)
				{
					_player->status = 2;
				}
			}
		}
	}
	// ---------------------------

	else if (_player->GetChID() != 1 && _player->GetChID() != 3)
	{
		// -------------- 공용 백점 ---------------
		if (_player->playerpoint.y >= 600 && _player == &p1)
		{
			if (g_IsP1Left == true)
			{
				if (_player->playerpoint.x <= 4)
				{
					_player->playerpoint.y -= 5;
				}

				else
				{
					_player->playerpoint.y -= 5;
					_player->playerpoint.x -= 5;
				}
			}

			else if (g_IsP1Left == false)
			{
				if (_player->playerpoint.x + p1.current->BmpX >= 1020)
				{
					_player->playerpoint.y -= 5;
				}

				else
				{
					_player->playerpoint.y -= 5;
					_player->playerpoint.x += 5;
				}
			}
		}



		else if (_player->playerpoint.y >= 600 && _player == &p2)
		{
			if (g_IsP1Left == false)
			{
				if (_player->playerpoint.x <= 4)
				{
					_player->playerpoint.y -= 5;
				}

				else
				{
					_player->playerpoint.y -= 5;
					_player->playerpoint.x -= 5;
				}
			}

			else
			{
				if (_player->playerpoint.x + p2.current->BmpX >= 1020)
				{
					_player->playerpoint.y -= 5;
				}

				else
				{
					_player->playerpoint.y -= 5;
					_player->playerpoint.x += 5;
				}
			}
		}

		/*else if (_player->playerpoint.y >= 600 && _player == &p2)
		{
			if (g_IsP1Left = false)
			{
				if (_player->playerpoint.x <= 4)
				{
					_player->playerpoint.y -= 5;
				}

				else
				{
					_player->playerpoint.y -= 5;
					_player->playerpoint.x -= 10;
				}
			}

			else
			{
				if (_player->playerpoint.x >= 1020)
				{
					_player->playerpoint.y -= 5;
				}

				else
				{
					_player->playerpoint.y -= 5;
					_player->playerpoint.x += 10;
				}
			}
		}*/

		else if (_player->playerpoint.y < 600)
		{
			_player->status = 11;
		}
	}
}

void DoDOWNBJUMP(Player* _player)
{

	if (_player == &p1)
	{
		if (g_IsP1Left == true)
		{
			if (_player->playerpoint.x <= 4)
			{
				_player->playerpoint.y += 5;
			}

			else
			{
				_player->playerpoint.y += 5;
				_player->playerpoint.x -= 5;
			}
		}

		else if (g_IsP1Left == false)
		{
			if (_player->playerpoint.x + p1.current->BmpX >= 1020)
			{
				_player->playerpoint.y += 5;
			}

			else
			{
				_player->playerpoint.y += 5;
				_player->playerpoint.x += 5;
			}
		}
	}



	else if (_player == &p2)
	{
		if (g_IsP1Left == false)
		{
			if (_player->playerpoint.x <= 4)
			{
				_player->playerpoint.y += 5;
			}

			else
			{
				_player->playerpoint.y += 5;
				_player->playerpoint.x -= 5;
			}
		}

		else
		{
			if (_player->playerpoint.x + p2.current->BmpX >= 1020)
			{
				_player->playerpoint.y += 5;
			}

			else
			{
				_player->playerpoint.y += 5;
				_player->playerpoint.x += 5;
			}
		}
	}

	if (_player->playerpoint.y >= 700)
	{
		_player->status = 2;
	}
}




void DoIDLE(Player* _player)
{

}

void DoINTRO(Player* _player)
{
	if (_player->GetChID() == 4 && _player == &p2)
	{
		p2.playerpoint.x = 586;
	}
}

void DoUPJUMP(Player* _player)
{
	if (_player->playerpoint.y > 250)
	{
		_player->playerpoint.y -= 5;
	}

	else if (_player->playerpoint.y <= 250)
	{
		_player->status = 8;
	}
}


void DoLOSE(Player* _player)
{
	if ((_player == &p1 && g_IsP1Left == true) || (_player == &p2 && g_IsP1Left == false))
	{
		if (_player->playerpoint.y < 700 && (4 < _player->playerpoint.x))
		{
			_player->playerpoint.y += 10;
			_player->playerpoint.x -= 10;
		}

		else if (_player->playerpoint.y < 700 && (4 > _player->playerpoint.x))
		{
			_player->playerpoint.y += 10;
		}
	}

	else if ((_player == &p1 && g_IsP1Left == false) || (_player == &p2 && g_IsP1Left == true))
	{
		if (_player->playerpoint.y < 700 && _player->playerpoint.x < 950)
		{
			_player->playerpoint.y += 10;
			_player->playerpoint.x += 10;
		}

		else if (_player->playerpoint.y < 700 && _player->playerpoint.x > 950)
		{
			_player->playerpoint.y += 10;
		}
	}
}

void DoWIN(Player* _player)
{

}

void DoDOWNJUMP(Player* _player)
{
	if (_player->playerpoint.y < 700)
		_player->playerpoint.y += 5;

	else if (_player->playerpoint.y >= 700)
	{
		_player->playerpoint.y = 700;
		_player->status = 2;
	}
}

void DoLKICK(Player* _player)
{
	if (_player->playerpoint.y < 700)
	{
		if (_player->playerpoint.x <= 4)
		{
			_player->playerpoint.y += 10;
		}

		else
		{
			_player->playerpoint.y += 10;;
			_player->playerpoint.x -= 10;;
		}
	}

	else if (_player->playerpoint.y >= 700)
	{
		_player->current->Current_Frame = 0;
		_player->status = 2;
	}
}

void DoRKICK(Player* _player)
{
	if (_player->playerpoint.y < 700)
	{

		if (_player->playerpoint.x + p1.current->BmpX >= 1020)
		{
			_player->playerpoint.y += 10;;
		}

		else
		{
			_player->playerpoint.y += 10;;
			_player->playerpoint.x += 10;;
		}
	}

	else if (_player->playerpoint.y >= 700)
	{
		_player->current->Current_Frame = 0;
		_player->status = 2;
	}
}

void DoKICK(Player* _player)
{
	if (g_IsP1Left == true && _player == &p1)
	{
		_player->status = 10;
	}

	else if (g_IsP1Left == false && _player == &p1)
	{
		_player->status = 9;
	}

	else if (g_IsP1Left == true && _player == &p2)
	{
		_player->status = 9;
	}

	else if (g_IsP1Left == false && _player == &p2)
	{
		_player->status = 10;
	}
}

void CheckStatus(Player* _player)
{
	switch (_player->status)
	{
		case 1:
		{
			DoBJUMP(_player);
		}
		break;

		case 2:
		{
			DoIDLE(_player);
		}
		break;

		case 3:
		{
			DoINTRO(_player);
		}
		break;

		case 4:
		{
			DoUPJUMP(_player);
		}
		break;

		case 5:
		{
			DoKICK(_player);
		}
		break;

		case 6:
		{
			DoLOSE(_player);
		}
		break;

		case 7:
		{
			DoWIN(_player);
		}
		break;

		case 8:
		{
			DoDOWNJUMP(_player);
		}
		break;

		case 9:
		{
			DoLKICK(_player);
		}
		break;

		case 10:
		{
			DoRKICK(_player);
		}
		break;

		case 11:
		{
			DoDOWNBJUMP(_player);
		}
		break;
	}
}



void ReturnGame()
{

}