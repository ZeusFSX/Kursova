#include "Header.h"
int Cube[PMax][MMax][NMax];

#include <windows.h>
#include <shlobj.h> //SHLDialog
#include <stdio.h>

#pragma comment (lib, "winmm.lib")

int main() {
	PlaySound(TEXT("mp3.wav"), NULL, SND_FILENAME);

	Menu();
	system("pause");
	return 0;
};