#pragma once
#include "CPunto.h"
class CPacman
{
private:
	CPunto cordinata;
	char direzione;
	bool isInMovimento;
public:
	CPacman();
	int getR();
	int getC();
	void setR(int r);
	void setC(int c);
	void setD(char d);
	CPunto getPunto();
	void muoviConControlli(char alto, char sotto, char sinistra, char destra);
	char getD();

};

