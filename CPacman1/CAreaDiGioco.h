#pragma once
#include "CPacman.h"
#include "CFantasma.h"
#include "CFantasma2.h"
#include "CFantasma3.h"
#include "CFantasma4.h"
#include <string>
#include "misureDiGioco.h"

using namespace std;
class CAreaDiGioco
{
private:
	int punteggio;
	char griglia[RIGHE][COLONNE];
	CPacman pacman;
	CFantasma1 fantasma1;
	CFantasma2 fantasma2;
	CFantasma3 fantasma3;
	CFantasma4 fantasma4;

public:
	bool powerUp;
	string isPartitaVinta(char carattereDaCercare);
	CAreaDiGioco();
	void InitLivello1();
	void power();
	void next(char);
	void MangiaCaramella();
	CPunto getFromChar(char carattereDaCercare);
	string getFrame();
	string isPartitaPersa();
};

