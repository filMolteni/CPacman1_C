#pragma once
class CPunto
{
private:
	int r, c;
public:
	CPunto(int r, int c);
	CPunto();

	int getR();
	int getC();
	void setR(int r);
	void setC(int c);
};

