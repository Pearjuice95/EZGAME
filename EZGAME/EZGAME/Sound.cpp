#include "Sound.h"
#include <fmod.h>
#include "fmod.hpp"

void SoundSystem()
{
	System_Create(&pSystem);

	pSystem->init(32, FMOD_INIT_NORMAL, NULL);

	pSystem->createSound("Sound/selectbgm.mp3", FMOD_LOOP_NORMAL, NULL, &pSound[0]); // �������

	pSystem->createSound("Sound/Akuma_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[1]); // ���� ����
	pSystem->createSound("Sound/Akuma_jump.mp3", FMOD_DEFAULT, NULL, &pSound[2]); // ���� ����
	pSystem->createSound("Sound/Akuma_kick.mp3", FMOD_DEFAULT, NULL, &pSound[3]); // ���� ű
	pSystem->createSound("Sound/Akuma_win.mp3", FMOD_DEFAULT, NULL, &pSound[4]); // ���� �¸�
	pSystem->createSound("Sound/Akuma_lose.mp3", FMOD_DEFAULT, NULL, &pSound[5]); // ���� �й�

	pSystem->createSound("Sound/Haoh_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[6]); // �Ͽ����� ����
	pSystem->createSound("Sound/Haoh_jump.mp3", FMOD_DEFAULT, NULL, &pSound[7]); // �Ͽ����� ����
	pSystem->createSound("Sound/Haoh_kick.mp3", FMOD_DEFAULT, NULL, &pSound[8]); // �Ͽ����� ű
	pSystem->createSound("Sound/Haoh_win.mp3", FMOD_DEFAULT, NULL, &pSound[9]); // �Ͽ����� �¸�
	pSystem->createSound("Sound/Haoh_lose.mp3", FMOD_DEFAULT, NULL, &pSound[10]); // �Ͽ����� �й�

	pSystem->createSound("Sound/Iori_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[11]); // �̿��� ����
	pSystem->createSound("Sound/Iori_jump.mp3", FMOD_DEFAULT, NULL, &pSound[12]); // �̿��� ����
	pSystem->createSound("Sound/Iori_kick.mp3", FMOD_DEFAULT, NULL, &pSound[13]); // �̿��� ű
	pSystem->createSound("Sound/Iori_win.mp3", FMOD_DEFAULT, NULL, &pSound[14]); // �̿��� �¸�
	pSystem->createSound("Sound/Iori_lose.mp3", FMOD_DEFAULT, NULL, &pSound[15]); // �̿��� �й�

	pSystem->createSound("Sound/Kim_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[16]); // �谩ȯ ����
	pSystem->createSound("Sound/Kim_jump.mp3", FMOD_DEFAULT, NULL, &pSound[17]); // �谩ȯ ����
	pSystem->createSound("Sound/Kim_kick.mp3", FMOD_DEFAULT, NULL, &pSound[18]); // �谩ȯ ű
	pSystem->createSound("Sound/Kim_win.mp3", FMOD_DEFAULT, NULL, &pSound[19]); // �谩ȯ �¸�
	pSystem->createSound("Sound/Kim_lose.mp3", FMOD_DEFAULT, NULL, &pSound[20]); // �谩ȯ �й�

	pSystem->createSound("Sound/Nanaya_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[21]); // ������ ����
	pSystem->createSound("Sound/Nanaya_jump.mp3", FMOD_DEFAULT, NULL, &pSound[22]); // ������ ����
	pSystem->createSound("Sound/Nanaya_kick.mp3", FMOD_DEFAULT, NULL, &pSound[23]); // ������ ű
	pSystem->createSound("Sound/Nanaya_win.mp3", FMOD_DEFAULT, NULL, &pSound[24]); // ������ �¸�
	pSystem->createSound("Sound/Nanaya_lose.mp3", FMOD_DEFAULT, NULL, &pSound[25]); // ������ �й�

	pSystem->createSound("Sound/Ryu_bjump.mp3", FMOD_DEFAULT, NULL, &pSound[26]); // �� ����
	pSystem->createSound("Sound/Ryu_jump.mp3", FMOD_DEFAULT, NULL, &pSound[27]); // �� ����
	pSystem->createSound("Sound/Ryu_kick.mp3", FMOD_DEFAULT, NULL, &pSound[28]); // �� ű
	pSystem->createSound("Sound/Ryu_win.mp3", FMOD_DEFAULT, NULL, &pSound[29]); // �� �¸�
	pSystem->createSound("Sound/Ryu_lose.mp3", FMOD_DEFAULT, NULL, &pSound[30]); // �� �й�

	pSystem->createSound("Sound/ready.mp3", FMOD_DEFAULT, NULL, &pSound[31]); // ����
	pSystem->createSound("Sound/go.mp3", FMOD_DEFAULT, NULL, &pSound[32]); // ��

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