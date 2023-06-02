#pragma once
#include "Texture.h"
#include <windows.h>
#include "Animation.h"

void Animator(HDC hdc, int px, int py, int psizex, int psizey, std::vector<CTexture*> character,
	int bx, int by, int bsizex, int bsizey);

void Anim2Frame(HDC hdc, int px, int psizex, int psizey, Animation& _Anime);

void Anim2FrameMir(HDC hdc, int px, int psizex, int psizey, Animation& _Anime);

void WhosLeft();
void AniPlay1P(HDC hdc);
void AniPlay2P(HDC hdc);
void PlayIntro(HDC hdc);
void PlayEnding(HDC hdc);
void KickAni1P(HDC hdc);
void KickAni2P(HDC hdc);