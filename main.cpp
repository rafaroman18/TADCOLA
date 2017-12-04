#include <iostream>
#include "tadpiladinamico.h"
#include "tadcoladinamico.h"
using namespace std;
bool isomorfica (Pila<int> , Cola<int> );

int main()
{
    Pila<int> P;
    Cola<int> C;
    P.push(1);P.push(5);P.push(1);P.push(6);
    C.push(13);C.push(6);C.push(13);C.push(5);
    cout<<isomorfica(P,C);
    return 0;
}

bool isomorfica (Pila<int> P, Cola<int> C)
{
    bool valido=true;
    Pila<int> AUXP=P;
    Cola<int> AUXC=C;
    int CONTP=0,CONTC=0;
    while(!AUXP.vacia())
    {
        AUXP.pop();
        CONTP++;
    }
    while(!AUXC.vacia())
    {
        AUXC.pop();
        CONTC++;
    }
    int vecP[CONTP];
    int vecC[CONTC];
    int i;
    for(i=0;i<CONTP;i++)
    {
        vecP[i]=P.tope();
        P.pop();
    }
    for(i=0;i<CONTC;i++)
    {
        vecC[i]=C.frente();
        C.pop();
    }
    if(CONTC>CONTP)
    {
        for(i=0;i<CONTP;i++)
        {
            
        }
    }

    return valido;
}