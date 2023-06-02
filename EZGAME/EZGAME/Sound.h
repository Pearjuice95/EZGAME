#pragma once
#include<iostream>
#include "fmod_api_core/inc/fmod.hpp"
#include "fmod_api_core/inc/fmod_errors.h"

using namespace FMOD;

static System* pSystem;
static Sound* pSound[35];
static Channel* pBGM;
static Channel* pEFFECT[35];


void SoundSystem();

void SoundPlay(int Sound_num);

void BGM();
void BGMPasue();
void BGMPlay();