#include <iostream>
#include "tadpiladinamico.h"
#include "tadcoladinamico.h"
using namespace std;
void invertir (Cola<int>&,int,int);
int main()
{
    int a=1,b=0;
    Cola<int> C,H;
    C.push(3);C.push(6);C.push(1);C.push(5);C.push(4);
    C.push(6);C.push(8);C.push(2);C.push(3);C.push(0);
    H=C;
    while(!H.vacia())
    {
        cout<<H.frente()<<" ";
        H.pop();
    }
    cout<<endl;
    invertir(C,a,b);
    while(!C.vacia())
    {
        cout<<C.frente()<<" ";
        C.pop();
    }

    return 0;
}

void invertir (Cola<int>& c,int a,int b)
{
    Cola<int> AUX;
    Pila<int> P;
    bool valido=true;
    while(c.frente()!=a && valido)
    {
        AUX.push(c.frente());
        c.pop();
        if(c.vacia())
        {
            valido=false;
        }
    }
    while(c.frente()!=b && valido)
    {
        P.push(c.frente());
        c.pop();
        if(c.vacia())
        {
            valido= false;
        }
    }
    P.push(b);
    c.pop();
    while(!P.vacia() && valido)
    {
        AUX.push(P.tope());
        P.pop();
    }
    while(!c.vacia() && valido)
    {
        AUX.push(c.frente());
        c.pop();
    }
    c=AUX;
    /*while(!AUX.vacia())
    {
        c->push(AUX.frente());
        AUX.pop();
    }*/
}