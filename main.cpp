#include <iostream>
using namespace std;
int somma (float a, float b)
{
    float r;
    r=a+b;
    return r;
}
int sottrazione (float a, float b)
{
    float r;
    r=a-b;
    return r;
}
int moltiplicazione (float a, float b)
{
    float r;
    r=a*b;
    return r;
}
int divisione (float a, float b)
{
    float r;
    r=a/b;
    return r;
}
int potenza (float a, float b)
{
    float r;
    int i;
    r=a;
    i=0;
    while(i<=b-1)
    {
        r=a*b;
        i=i+1;
    }
    return r;
}
float input(float z)
{
    cout<<"Inserisci il numero positivo"<<endl;
    cin>>z;
    return z;
}
int main() {
    float a, b, s, sott, m, d, p;
    a=0;
    b=0;
    cout<<"Scrivi due numeri"<<endl;
    a=input(a);
    b=input(b);
    s=somma(a, b);
    sott=sottrazione(a, b);
    m=moltiplicazione(a, b);
    d=divisione(a, b);
    p=potenza(a, b);
    cout<<"Il risultato della somma è "<<s<<", della sottrazione "<<sott<<", della moltiplicazione "<<m<<", della divisione "<<d<<" e dell'elevamento a potenza " <<p;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
