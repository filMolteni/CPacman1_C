#include "CPacman.h"
#include "misureDiGioco.h"
#include<stdio.h>
#include<stdlib.h>

CPacman::CPacman()
{
    direzione = 'a';
    isInMovimento = false;
}
int CPacman::getR()
{
    return this->cordinata.getR();
}

int CPacman::getC()
{
    return this->cordinata.getC();
}

void CPacman::setR(int r)
{
    this->cordinata.setR(r);
}

void CPacman::setC(int c)
{
    this->cordinata.setC(c);
}

void CPacman::muoviConControlli(char alto, char sotto, char sinistra, char destra)
{


    if (getD() == 'd' && destra == ']') {
        setC(1);
    }
    else if (getD() == 'a' && sinistra == '[') {
        setC(COLONNE - 2);
    }
    else {
        if (direzione == 's' && sotto != '#')
            this->setR(this->getR() + 1);
        if (direzione == 'w' && alto != '#')
            this->setR(this->getR() - 1);
        if (direzione == 'd' && destra != '#')
            this->setC(this->getC() + 1);
        if (direzione == 'a' && sinistra != '#')
            this->setC(this->getC() - 1);
    }

}
CPunto CPacman::getPunto() {
    return cordinata;
}
char CPacman::getD()
{
    return this->direzione;
}
void CPacman::setD(char d)
{
    this->direzione = d;
}

