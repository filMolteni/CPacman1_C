#include "CAreaDiGioco.h"
#include "Livello1.h"
#include <Windows.h>

CAreaDiGioco::CAreaDiGioco()
{
	//inizializza il punteggio
	this->punteggio = 0;
	//init il prirmo livello
	this->InitLivello1();
	powerUp = false;
}

void CAreaDiGioco::InitLivello1()
{
	//inizializza la matrice con dei caratteri...
	for (int i = 0; i < RIGHE; i++)
	{
		for (int j = 0; j < COLONNE; j++)
		{
			griglia[i][j] = livello1[i][j];
		}
	}
	//inizializza il pacman
		//trovo il punto di partenza
	CPunto coordPac = getFromChar('.');
	CPunto coordFan = getFromChar(' ');
	//setto coord al Pacman
	pacman.setC(coordPac.getC());
	pacman.setR(coordPac.getR());
	//setto coord al Fantasma
	fantasma1.setC(coordFan.getC());
	fantasma1.setR(coordFan.getR());
	//setto cord fantasma2
	fantasma2.setC(coordFan.getC());
	fantasma2.setR(coordFan.getR());
	//setto cord fantasma3
	fantasma3.setC(coordFan.getC());
	fantasma3.setR(coordFan.getR());
	//setto cord fantasma4
	fantasma4.setC(coordFan.getC());
	fantasma4.setR(coordFan.getR());



	//inizializza i fantasmi
		//li posiziono nella "gabbia"
}
void CAreaDiGioco::MangiaCaramella() {
	if (griglia[pacman.getR()][pacman.getC()] == CARAMELLA) {
		griglia[pacman.getR()][pacman.getC()] = VUOTO;
		this->punteggio++;
	}
	if (griglia[pacman.getR()][pacman.getC()] == POWERUP) {
		griglia[pacman.getR()][pacman.getC()] = VUOTO;
		this->punteggio++;
		powerUp = true;
	}
}
void CAreaDiGioco::power() {
	if (powerUp == true) {
		if (pacman.getC() == fantasma1.getC() && pacman.getR() == fantasma1.getR()) {
			fantasma1.setC(COLONNE / 2);
			fantasma1.setR(RIGHE / 2);
			this->punteggio += 100;
		}
		if (pacman.getC() == fantasma2.getC() && pacman.getR() == fantasma2.getR()) {
			fantasma2.setC(COLONNE / 2);
			fantasma2.setR(RIGHE / 2);
			this->punteggio += 100;
		}
		if (pacman.getC() == fantasma3.getC() && pacman.getR() == fantasma3.getR()) {
			fantasma3.setC(COLONNE / 2);
			fantasma3.setR(RIGHE / 2);
			this->punteggio += 100;
		}
		if (pacman.getC() == fantasma4.getC() && pacman.getR() == fantasma4.getR()) {
			fantasma4.setC(COLONNE / 2);
			fantasma4.setR(RIGHE / 2);
			this->punteggio += 100;
		}
	}
}
void CAreaDiGioco::next(char tasto)
{
	char w = griglia[pacman.getR() - 1][pacman.getC()];
	char s = griglia[pacman.getR() + 1][pacman.getC()];
	char a = griglia[pacman.getR()][pacman.getC() - 1];
	char d = griglia[pacman.getR()][pacman.getC() + 1];
	//cordinate fanatsma1
	char sopra = griglia[fantasma1.getR() - 1][fantasma1.getC()];
	char sotto = griglia[fantasma1.getR() + 1][fantasma1.getC()];
	char sinistra = griglia[fantasma1.getR()][fantasma1.getC() - 1];
	char destra = griglia[fantasma1.getR()][fantasma1.getC() + 1];
	//cordinate fanatsma2
	char sopra2 = griglia[fantasma2.getR() - 1][fantasma2.getC()];
	char sotto2 = griglia[fantasma2.getR() + 1][fantasma2.getC()];
	char sinistra2 = griglia[fantasma2.getR()][fantasma2.getC() - 1];
	char destra2 = griglia[fantasma2.getR()][fantasma2.getC() + 1];
	//cordinate fanatsma3
	char sopra3 = griglia[fantasma3.getR() - 1][fantasma3.getC()];
	char sotto3 = griglia[fantasma3.getR() + 1][fantasma3.getC()];
	char sinistra3 = griglia[fantasma3.getR()][fantasma3.getC() - 1];
	char destra3 = griglia[fantasma3.getR()][fantasma3.getC() + 1];
	//cordinate fanatsma3
	char sopra4 = griglia[fantasma4.getR() - 1][fantasma4.getC()];
	char sotto4 = griglia[fantasma4.getR() + 1][fantasma4.getC()];
	char sinistra4 = griglia[fantasma4.getR()][fantasma4.getC() - 1];
	char destra4 = griglia[fantasma4.getR()][fantasma4.getC() + 1];

	switch (tasto)
	{
	case 'w':
	case 'd':
	case 's':
	case 'a':

		pacman.setD(tasto);
		break;
	}
	pacman.muoviConControlli(w, s, a, d);
	fantasma1.muovi(sopra, sotto, sinistra, destra,pacman.getPunto());
	fantasma2.muovi(sopra2, sotto2, sinistra2, destra2);
	fantasma3.muovi(sopra3, sotto3, sinistra3, destra3);
	fantasma4.muovi(sopra4, sotto4, sinistra4, destra4);
	MangiaCaramella();
	power();
}
string CAreaDiGioco::isPartitaPersa() {
	if (pacman.getR() == fantasma1.getR() && pacman.getC() == fantasma1.getC() || pacman.getR() == fantasma2.getR() && pacman.getC() == fantasma2.getC() || pacman.getR() == fantasma3.getR() && pacman.getC() == fantasma3.getC() || pacman.getR() == fantasma4.getR() && pacman.getC() == fantasma4.getC()) {
		return "hai perso";
	}
	return"s";
	//if (pacman.getPunto().equal(fantasma1.getPunto())) {}
}

CPunto CAreaDiGioco::getFromChar(char carattereDaCercare)
{
	for (int i = 0; i < RIGHE; i++)
	{
		for (int j = 0; j < COLONNE; j++)
		{
			if (griglia[i][j] == carattereDaCercare)
			{
				//setta il punto i j sul pacman
				return CPunto(i, j);
			}

		}
	}
	return CPunto(-1, -1);
}
bool CAreaDiGioco::isPartitaVinta(char carattereDaCercare)
{
	for (int i = 0; i < RIGHE; i++)
	{
		for (int j = 0; j < COLONNE; j++)
		{
			if (griglia[i][j] == carattereDaCercare)
			{
				//ci sono ancora carattereDaCercare nella griglia
				return false;
			}

		}
	}
	return true;
}

string CAreaDiGioco::getFrame()
{
	string tmp = "";
	for (int i = 0; i < RIGHE; i++)
	{
		for (int j = 0; j < COLONNE; j++)
		{
			tmp += griglia[i][j];
		}
		tmp += "\r\n";
	}
	int indexACapo = tmp.find('\n');
	int posPacman = pacman.getR() * (indexACapo + 1) + pacman.getC();
	tmp.replace(posPacman, 1, "C");
	int posFantasma1 = fantasma1.getR() * (indexACapo + 1) + fantasma1.getC();
	tmp.replace(posFantasma1, 1, "1");
	int posFantasma2 = fantasma2.getR() * (indexACapo + 1) + fantasma2.getC();
	tmp.replace(posFantasma2, 1, "2");
	int posFantasma3 = fantasma3.getR() * (indexACapo + 1) + fantasma3.getC();
	tmp.replace(posFantasma3, 1, "3");
	int posFantasma4 = fantasma4.getR() * (indexACapo + 1) + fantasma4.getC();
	tmp.replace(posFantasma4, 1, "4");
	tmp += "punteggio: ";
	tmp += to_string(this->punteggio);
	return tmp;
}
