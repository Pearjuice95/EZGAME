#include "Sound.h"
#include <fmod.h>
#include "fmod.hpp"

void SoundSystem()
{
	System_Create(&pSystem);

	pSystem->init(32, FMOD_INIT_NORMAL, NULL);

	pSystem->createSound("Sound/selectbgm.mp3", FMOD_LOOP_NORMAL, NULL, &pSound[0]); // ¼¿·ººê±Ý

	pSystem->createSound("Sound/Akuma_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[1]); // ¾ÆÄí¸¶ ¹éÁ¡
	pSystem->createSound("Sound/Akuma_jump.mp3", FMOD_DEFAULT, NULL, &pSound[2]); // ¾ÆÄí¸¶ Á¡ÇÁ
	pSystem->createSound("Sound/Akuma_kick.mp3", FMOD_DEFAULT, NULL, &pSound[3]); // ¾ÆÄí¸¶ Å±
	pSystem->createSound("Sound/Akuma_win.mp3", FMOD_DEFAULT, NULL, &pSound[4]); // ¾ÆÄí¸¶ ½Â¸®
	pSystem->createSound("Sound/Akuma_lose.mp3", FMOD_DEFAULT, NULL, &pSound[5]); // ¾ÆÄí¸¶ ÆÐ¹è

	pSystem->createSound("Sound/Haoh_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[6]); // ÇÏ¿À¸¶·ç ¹éÁ¡
	pSystem->createSound("Sound/Haoh_jump.mp3", FMOD_DEFAULT, NULL, &pSound[7]); // ÇÏ¿À¸¶·ç Á¡ÇÁ
	pSystem->createSound("Sound/Haoh_kick.mp3", FMOD_DEFAULT, NULL, &pSound[8]); // ÇÏ¿À¸¶·ç Å±
	pSystem->createSound("Sound/Haoh_win.mp3", FMOD_DEFAULT, NULL, &pSound[9]); // ÇÏ¿À¸¶·ç ½Â¸®
	pSystem->createSound("Sound/Haoh_lose.mp3", FMOD_DEFAULT, NULL, &pSound[10]); // ÇÏ¿À¸¶·ç ÆÐ¹è

	pSystem->createSound("Sound/Iori_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[11]); // ÀÌ¿À¸® ¹éÁ¡
	pSystem->createSound("Sound/Iori_jump.mp3", FMOD_DEFAULT, NULL, &pSound[12]); // ÀÌ¿À¸® Á¡ÇÁ
	pSystem->createSound("Sound/Iori_kick.mp3", FMOD_DEFAULT, NULL, &pSound[13]); // ÀÌ¿À¸® Å±
	pSystem->createSound("Sound/Iori_win.mp3", FMOD_DEFAULT, NULL, &pSound[14]); // ÀÌ¿À¸® ½Â¸®
	pSystem->createSound("Sound/Iori_lose.mp3", FMOD_DEFAULT, NULL, &pSound[15]); // ÀÌ¿À¸® ÆÐ¹è

	pSystem->createSound("Sound/Kim_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[16]); // ±è°©È¯ ¹éÁ¡
	pSystem->createSound("Sound/Kim_jump.mp3", FMOD_DEFAULT, NULL, &pSound[17]); // ±è°©È¯ Á¡ÇÁ
	pSystem->createSound("Sound/Kim_kick.mp3", FMOD_DEFAULT, NULL, &pSound[18]); // ±è°©È¯ Å±
	pSystem->createSound("Sound/Kim_win.mp3", FMOD_DEFAULT, NULL, &pSound[19]); // ±è°©È¯ ½Â¸®
	pSystem->createSound("Sound/Kim_lose.mp3", FMOD_DEFAULT, NULL, &pSound[20]); // ±è°©È¯ ÆÐ¹è

	pSystem->createSound("Sound/Nanaya_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[21]); // ³ª³ª¾ß ¹éÁ¡
	pSystem->createSound("Sound/Nanaya_jump.mp3", FMOD_DEFAULT, NULL, &pSound[22]); // ³ª³ª¾ß Á¡ÇÁ
	pSystem->createSound("Sound/Nanaya_kick.mp3", FMOD_DEFAULT, NULL, &pSound[23]); // ³ª³ª¾ß Å±
	pSystem->createSound("Sound/Nanaya_win.mp3", FMOD_DEFAULT, NULL, &pSound[24]); // ³ª³ª¾ß ½Â¸®
	pSystem->createSound("Sound/Nanaya_lose.mp3", FMOD_DEFAULT, NULL, &pSound[25]); // ³ª³ª¾ß ÆÐ¹è

	pSystem->createSound("Sound/Ryu_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[26]); // ·ù ¹éÁ¡
	pSystem->createSound("Sound/Ryu_jump.mp3", FMOD_DEFAULT, NULL, &pSound[27]); // ·ù Á¡ÇÁ
	pSystem->createSound("Sound/Ryu_kick.mp3", FMOD_DEFAULT, NULL, &pSound[28]); // ·ù Å±
	pSystem->createSound("Sound/Ryu_win.mp3", FMOD_DEFAULT, NULL, &pSound[29]); // ·ù ½Â¸®
	pSystem->createSound("Sound/Ryu_lose.mp3", FMOD_DEFAULT, NULL, &pSound[30]); // ·ù ÆÐ¹è

	pSystem->createSound("Sound/ready.mp3", FMOD_DEFAULT, NULL, &pSound[31]); // ·¹µð
	pSystem->createSound("Sound/go.mp3", FMOD_DEFAULT, NULL, &pSound[32]); // °í

	pSystem->createSound("Sound/error.wav", FMOD_DEFAULT, NULL, &pSound[33]);
}

void SoundPlay(int Sound_num)
{
	pSystem->update();
	pSystem->playSound(pSound[Sound_num], NULL, 0, pEFFECT);

}

void BGM()
{
	pSystem->playSound(pSound[0], NULL, 0, &pBGM);
}

void BGMPasue()
{
	pBGM->setPaused(true);
}

void BGMPlay()
{
	pBGM->setPaused(false);
}