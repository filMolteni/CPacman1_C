#include "CFantasma.h"
#include "misureDiGioco.h"
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>
CFantasma1::CFantasma1()
{
    direzione = 'a';
}
int CFantasma1::getR()
{
    return this->cordinata.getR();
}

int CFantasma1::getC()
{
    return this->cordinata.getC();
}

void CFantasma1::setR(int r)
{
    this->cordinata.setR(r);
}

void CFantasma1::setC(int c)
{
    this->cordinata.setC(c);
}
void CFantasma1::muovi(char alto, char sotto, char sinistra, char destra,CPunto coorPac)
{

    if (coorPac.getR() > getR()) {
        if (sotto != '#' && direzione != 'w')
        {
            setR(getR()+1);
            setD('s');
            return;
        }
    }
    else if(coorPac.getR() < getR())
    {
        if (alto != '#' && direzione != 's')
        {
            setR(getR() - 1);
            setD('w');
            return;
        }
    }
    if (coorPac.getC() > getC()) {
        if (destra != '#' && direzione != 'a')
        {
            setC(getC() + 1);
            setD('d');
            return;
        }
    }
    else if (coorPac.getC() < getC()) {
        if (sinistra != '#' && direzione != 'd')
        {
            setC(getC() - 1);
            setD('a');
            return;
        }
    }
    


   
        if (sotto != '#' && direzione != 'w')
        {
            setR(getR() + 1);
            setD('s');
            return;
        }
    
        if (alto != '#' && direzione != 's')
        {
            setR(getR() - 1);
            setD('w');
            return;
        }
    
        if (destra != '#' && direzione != 'a')
        {
            setC(getC() + 1);
            setD('d');
            return;
        }
   
        if (sinistra != '#' && direzione != 'd')
        {
            setC(getC() - 1);
            setD('a');
            return;
        }
    
        setD(' ');


    /*int carattereACaso = carattereRnd();

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
        else if (direzione == 'w' && alto != '#' && alto != '2' && alto != '3' && alto != '4')
            this->setR(this->getR() - 1);
        else if (direzione == 'd' && destra != '#' && destra != '2' && destra != '3' && destra != '4')
            this->setC(this->getC() + 1);
        else if (direzione == 'a' && sinistra != '#' && sinistra != '2' && sinistra != '3' && sinistra != '4')
            this->setC(this->getC() - 1);
    }
    */
}
CPunto CFantasma1::getPunto() {
    return cordinata;
}
char CFantasma1::carattereRnd() {
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
void CFantasma1::setD(char d)
{
    this->direzione = d;
}
