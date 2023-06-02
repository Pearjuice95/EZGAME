#pragma once

#include <vector>
#include <windows.h>
#include "Animation.h"
#include <vector>
#include "Texture.h"

static std::vector<CTexture*> g_TextureVector;

static Animation g_Akuma_BJUMP;
static Animation g_Akuma_IDLE;
static Animation g_Akuma_INTRO;
static Animation g_Akuma_JUMP;
static Animation g_Akuma_KICK;
static Animation g_Akuma_LOSE;
static Animation g_Akuma_WIN;

static Animation g_Akuma_BJUMPM;
static Animation g_Akuma_IDLEM;
static Animation g_Akuma_INTROM;
static Animation g_Akuma_JUMPM;
static Animation g_Akuma_KICKM;
static Animation g_Akuma_LOSEM;
static Animation g_Akuma_WINM;

static Animation g_Haohmaru_BJUMP;
static Animation g_Haohmaru_IDLE;
static Animation g_Haohmaru_INTRO;
static Animation g_Haohmaru_JUMP;
static Animation g_Haohmaru_KICK;
static Animation g_Haohmaru_LOSE;
static Animation g_Haohmaru_WIN;
static Animation g_Haohmaru_BJUMPM;
static Animation g_Haohmaru_IDLEM;
static Animation g_Haohmaru_INTROM;
static Animation g_Haohmaru_JUMPM;
static Animation g_Haohmaru_KICKM;
static Animation g_Haohmaru_LOSEM;
static Animation g_Haohmaru_WINM;

static Animation g_Iori_BJUMP;
static Animation g_Iori_IDLE;
static Animation g_Iori_INTRO;
static Animation g_Iori_JUMP;
static Animation g_Iori_KICK;
static Animation g_Iori_LOSE;
static Animation g_Iori_WIN;
static Animation g_Iori_BJUMPM;
static Animation g_Iori_IDLEM;
static Animation g_Iori_INTROM;
static Animation g_Iori_JUMPM;
static Animation g_Iori_KICKM;
static Animation g_Iori_LOSEM;
static Animation g_Iori_WINM;

static Animation g_Kim_BJUMP;
static Animation g_Kim_IDLE;
static Animation g_Kim_INTRO;
static Animation g_Kim_JUMP;
static Animation g_Kim_KICK;
static Animation g_Kim_LOSE;
static Animation g_Kim_WIN;
static Animation g_Kim_BJUMPM;
static Animation g_Kim_IDLEM;
static Animation g_Kim_INTROM;
static Animation g_Kim_JUMPM;
static Animation g_Kim_KICKM;
static Animation g_Kim_LOSEM;
static Animation g_Kim_WINM;

static Animation g_Nanaya_BJUMP;
static Animation g_Nanaya_IDLE;
static Animation g_Nanaya_INTRO;
static Animation g_Nanaya_JUMP;
static Animation g_Nanaya_KICK;
static Animation g_Nanaya_LOSE;
static Animation g_Nanaya_WIN;
static Animation g_Nanaya_BJUMPM;
static Animation g_Nanaya_IDLEM;
static Animation g_Nanaya_INTROM;
static Animation g_Nanaya_JUMPM;
static Animation g_Nanaya_KICKM;
static Animation g_Nanaya_LOSEM;
static Animation g_Nanaya_WINM;

static Animation g_Ryu_BJUMP;
static Animation g_Ryu_IDLE;
static Animation g_Ryu_INTRO;
static Animation g_Ryu_JUMP;
static Animation g_Ryu_KICK;
static Animation g_Ryu_LOSE;
static Animation g_Ryu_WIN;
static Animation g_Ryu_BJUMPM;
static Animation g_Ryu_IDLEM;
static Animation g_Ryu_INTROM;
static Animation g_Ryu_JUMPM;
static Animation g_Ryu_KICKM;
static Animation g_Ryu_LOSEM;
static Animation g_Ryu_WINM;

Animation g_BackGround;

static CTexture map;

void LoadImageToAni(const char* ImgName, Animation& _Anime, const int& count, HDC hdc);
void LoadMap(HDC hdc);