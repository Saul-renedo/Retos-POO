#include<iostream>
using namespace std;


int minsalto(int X, int Y, int D)
{
int dif, res;
dif=(y-x)/d;
return res;


}

int main()
{
    int x, y, d;
    int res;

    cout<<"Ingresa el valor del punto de inicio:"<<endl;
    cin>> x;
    cout<<"Ingresa el valor del punto de fin:"<<endl;
    cin>> y;
    cout<<"Ingresa el valor de la distancia del salto:"<<endl;
    cin>> d;

    res = minsalto(x,y,d);

    cout<<"Numero de saltos minimos es: "<<res;
}