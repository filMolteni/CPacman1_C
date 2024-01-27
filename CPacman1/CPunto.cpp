#include "CPunto.h"

CPunto::CPunto(int r, int c)
{
	this->r = r;
	this->c = c;
}

CPunto::CPunto()
{
	r = 0;
	c = 0;
}

int CPunto::getR() {
	return r;
}

int CPunto::getC() {
	return c;
}

void CPunto::setR(int r) {
	this->r = r;
}

void CPunto::setC(int c) {
	this->c = c;
}

