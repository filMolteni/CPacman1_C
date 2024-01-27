#include <iostream>
#include "CAreaDiGioco.h"
#include <Windows.h>
#include <conio.h>
#include <time.h>
#define TEMPO_POWERUP 10
using namespace std;



int getch_noblock() {
	if (_kbhit())
	{
		int c = _getch();
		fflush(stdin);
		return c;
	}
	else
		return -1;
}

void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}
void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

void main()
{
	char tasto;
	ShowConsoleCursor(false);
	CAreaDiGioco area;
	CPacman personaggio;
	srand(time(NULL));
	bool flag = true;
	


	time_t tempoInizioPowerup = time(NULL);



	while (true)
	{
		time_t actually_time = time(NULL);
		tasto = getch_noblock();
		setCursorPosition(0, 0);
		area.next(tasto);

		if (area.powerUp && flag)//prendo il tempo quando prendo il powerup,il flag  serve a non riprendere il tempo
		{
			system("color f0");
			tempoInizioPowerup = time(NULL);
			flag = false;
		}



		if ((tempoInizioPowerup + TEMPO_POWERUP <= actually_time) && area.powerUp)

		{
			system("color 0f");
			area.powerUp = false;
			flag = true;

		}
		if(area.powerUp != true){
			string sconfitta = area.isPartitaPersa();
			if (sconfitta == "hai perso") {
				system("cls");
				cout << sconfitta;
				return;
			}
		}
		string vittoria = area.isPartitaVinta('.');
		if (vittoria == "hai vinto") {
			system("cls");
			cout << vittoria;
			return;
		}
		cout << area.getFrame();
		Sleep(500);
	}


}