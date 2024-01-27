#pragma once
class CPunto
{
private:
	int r, c;
public:
	CPunto(int r, int c);
	CPunto();
	bool equal(CPunto);
	int getR();
	int getC();
	void setR(int r);
	void setC(int c);
};

