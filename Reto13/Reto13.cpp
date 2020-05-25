//Caso general:
//Tenemos N discos
//Están numerados de 0 a N-1
//El array A tiene N enteros no negativos que especifican el radio
//El disco J es dibujado con centro en (J, 0) y radio A[J]
//Un disco J y otro K intersectan si J ≠ K y si al menos existe un punto de contacto entre ellos

//Caso particular:
//Tenemos 6 discos
//Están numerados de 0 a 5
//El array A tiene 6 enteros no negativos que especifican el radio
//El disco 3 es dibujado con centro en (3, 0) y radio 1
//El disco 3 y el disco 4 intersectan si J ≠ K y si al menos existe un punto de contacto entre ellos

//Pseudocódigo
//A[0] = 1;  A[1] = 5;  A[2] = 2;  A[3] = 1;  A[4] = 4;  A[5] = 0;

    //0. Comparar el disco 0 con todos los siguientes
        // Discoizq = A la posición del disco izq. sumarle el radio
        // Discoder = A la posición del disco der. restarle el radio
        // Si discoizq es mayor o igual discoder
            //Aumentar el contador de intersecciones
    //1. Comparar el disco 1 con todos los siguientes
    //2. Comparar el disco 2 con todos los siguientes
    //...
    //N-2. Comparar el disco N-2 con todos los siguientes (solo N-1)

    //Retornar el número de intersecciones

#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>A)
{
    int N = A.size();
    int intersec = 0;
    for(int i = 0; i <= N-2; i++)
    {
        for(int j = i+1; j <= N-1; j++)
        {
           int DI = i+A[i];
           int DD = j-A[j];
            if(DI >= DD)
            {
                intersec++;
            }
        }
    }
    return intersec;
}

int main(){
    vector<int> entrada {1,5,2,1,4,0};
    cout<<solution(entrada) << endl;
}