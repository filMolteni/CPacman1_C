#pragma once
#include "CPunto.h"
class CFantasma4
{
	//creo 4 Classi CFantasma differenti
private:
	CPunto cordinata;
	char direzione;
public:
	CFantasma4();
	int getR();
	int getC();
	void setR(int r);
	void setC(int c);
	void setD(char d);
	void muovi(char alto, char sotto, char sinistra, char destra);
	char carattereRnd();

};