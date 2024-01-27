#include "CFantasma2.h"
#include "misureDiGioco.h"
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>
CFantasma2::CFantasma2()
{
    direzione = 'a';
}
int CFantasma2::getR()
{
    return this->cordinata.getR();
}

int CFantasma2::getC()
{
    return this->cordinata.getC();
}

void CFantasma2::setR(int r)
{
    this->cordinata.setR(r);
}

void CFantasma2::setC(int c)
{
    this->cordinata.setC(c);
}
void CFantasma2::muovi(char alto, char sotto, char sinistra, char destra)
{
    int carattereACaso = carattereRnd();

    setD(carattereACaso);
    if (carattereACaso == 'd' && destra == ']') {
        setC(1);
    }
    else if (carattereACaso == 'a' && sinistra == '[') {
        setC(COLONNE - 2);
    }
    else {
        if (direzione == 's' && sotto != '#' && sotto != '2' && sotto != '3' && sotto != '4')
            this->setR(this->getR() + 1);
        if (direzione == 'w' && alto != '#' && alto != '2' && alto != '3' && alto != '4')
            this->setR(this->getR() - 1);
        if (direzione == 'd' && destra != '#' && destra != '2' && destra != '3' && destra != '4')
            this->setC(this->getC() + 1);
        if (direzione == 'a' && sinistra != '#' && sinistra != '2' && sinistra != '3' && sinistra != '4')
            this->setC(this->getC() - 1);
    }

}
char CFantasma2::carattereRnd() {
    int num = rand() % 4 + 1;
    if (num == 1)
        return 's';
    if (num == 2)
        return 'd';
    if (num == 3)
        return 'w';
    if (num == 4)
        return 'a';

}
void CFantasma2::setD(char d)
{
    this->direzione = d;
}