//Psceudo-codigo

//Descripción del reto:

//Caso general:
//Array A (no vacío) de N enteros
//0 < P < N
//P va a dividir la cinta en dos partes:
// Parte 1: A[0], A[1], ... A[P-1]
// Parte 2: A[P], A[P+1], ... A[N-1]
// Se obtiene la diferencia absoluta de la suma de ambas partes
// Y se quiere obtener el valor mínimo de todas las diferencias absolutas posibles


//Caso particular:
//Array A (no vacío) de 5 enteros
//0 < P < 5

//Si P == 1:
//P va a dividir la cinta en dos partes:
// Parte 1: A[0]
// Parte 2: A[1],A[2],A[3],A[4]

//Si P == 3:
//P va a dividir la cinta en dos partes:
// Parte 1: A[0], A[1], A[2]
// Parte 2: A[3], A[4]

// Se obtiene la diferencia absoluta de la suma de ambas partes
//Diferencias posibles: 7,5,1,7

// Y se quiere obtener el valor mínimo de todas las diferencias absolutas posibles
//Mínimo: 1 --> Salida

//................................................

//Pseudo-código

//0. Nada
// A = [3, 1, 2, 4, 3];

//0.1 Inicializar minimo
// minimo = 100000000

//1. Repetir N-1 veces:
    //1.1 Partir array en dos partes dependiendo de P (empezando en 1, terminando en N-1)
    //1.2 Obtener suma de la 1a parte
    //1.3 Obtener suma de la 2a parte
    //1.4 Resta de ambas sumas
    //1.5 Obtener valor absoluto de la resta --> valorActual
    //1.6 Si valorActual es menor que min
        //1.6.1 Guardar valorActual en la variable min

//2. Retornar el valor de min

//Escenario con mayor valor
//A = [-1000, -1000, -1000... 1000, 1000, 1000]
//1a parte: -50000000
//2a parte: 50000000

#include<iostream>
#include <stdlib.h>
#include<vector>

using namespace std;

int solution(vector<int> A)
{
    //Paso 0.1:
    int min = 100000000; //Máxima diferencia posible
    int N = A.size(); //Número de enteros en A

    //Paso 1:
    for(int P = 1; P < N; P++)
    {
        //1.1 Partir array en dos partes
        vector<int> parte1(A.begin(), A.end()-(N-P));
        vector<int> parte2(A.begin()+P, A.end());
        /*for(int i = 0; i < parte1.size(); i++){
           cout<<parte1[i]<< ", ";
        }
        cout<<endl;
        for(int i = 0; i < parte2.size(); i++){
            cout<<parte2[i]<< ", ";
        }
        cout<<endl;
        */
        //Paso 1.2
        int suma1 = 0; //Suma total de parte 1
        for(int i = 0; i < parte1.size(); i++)
        {
           suma1 = suma1 + parte1[i];
        }

        //Paso 1.3
        int suma2 = 0; //Suma total de parte 2
        for(int i = 0; i < parte2.size(); i++)
        {
           suma2 = suma2 + parte2[i];
        }

        //1.4 y 1.5
        int valorActual = abs(suma1 - suma2);

        //1.6
    }

    //Paso 2
    return min;

}

int main()
{
    vector<int> A{3, 1, 2, 4, 3};
    cout << solution(A) << endl;
}