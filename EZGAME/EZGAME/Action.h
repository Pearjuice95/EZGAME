#pragma once
#include <windows.h>
#include "Collider.h"
#include "Player.h"

void DoBJUMP(Player* _player);
void DoDOWNBJUMP(Player* _player);
void DoIDLE(Player* _player);
void DoINTRO(Player* _player);
void DoUPJUMP(Player* _player);
void DoLOSE(Player* _player);
void DoWIN(Player* _player);
void DoDOWNJUMP(Player* _player);
void DoLKICK(Player* _player);
void DoRKICK(Player* _player);
void DoKICK(Player* _player);
void CheckStatus(Player* _player);

void ReturnGame();
/*
		else if (_player->GetChID() == 2 && _player->playerpoint.y < 600 &&
		_player == &p1)
		{
		if (g_IsP1Left = true)
		{
			if (_player->playerpoint.x <= 4)
			{
				_player->playerpoint.y += 5;
			}

			else
			{
				_player->playerpoint.y += 5;
				_player->playerpoint.x -= 10;
			}
		}

		else
		{
			if (_player->playerpoint.x >= 1020)
			{
				_player->playerpoint.y += 5;
			}

			else
			{
				_player->playerpoint.y += 5;
				_player->playerpoint.x += 10;
			}
		}
		}

		else if (_player->GetChID() == 2 && _player->playerpoint.y < 600 &&
			_player == &p1)
		{
			if (g_IsP1Left = true)
			{
				if (_player->playerpoint.x <= 4)
				{
					_player->playerpoint.y += 5;
				}

				else
				{
					_player->playerpoint.y += 5;
					_player->playerpoint.x -= 10;
				}
			}

			else
			{
				if (_player->playerpoint.x >= 1020)
				{
					_player->playerpoint.y += 5;
				}

				else
				{
					_player->playerpoint.y += 5;
					_player->playerpoint.x += 10;
				}
			}
		}
		*/