//Caso general:
// Tres enteros A,B y K
//Se retorna el numero de enteros en el rango de [A...B] que son divisibles entre K
//{ i : A ≤ i ≤ B, i mod K = 0 }

/*A y B son enteros dentro del rango [0..2,000,000,000];
K es un entero dentro del rango [1..2,000,000,000];
A ≤ B.*/


//caso particular:
//Tres enteros A=6, B=!! y K=2
//{ i : 6 ≤ i ≤ 11, i mod 2 = 0 }
//{6,8 y 10} ---> debe retornar 3

//pseudocodigo
//1.inicializar las variables A,B y K
//Crear variable contador =0
//3.Crear un array con los numeros de A a B
//4.for(inicia en A, i<=B, i++)
//  4.1si(i mod k=0)
//      4.1.1contador aumenta
//

#include<iostream>
#include<vector>
using namespace std;

int solution(int A, int B, int K)
{
//paso2
int cont=0;
//paso3
 for(int i = A; i <= B; i++)
 {
        //Paso 3.1
        if(i%K == 0)
        {
        //Paso 3.1.1- Contador aumenta
         cont = cont+1;
        }
    }
    //paso 4
    return cont;
}
int main()
{
    //paso 1
    int A,B,K;
    cout<<"Captura valor de A"<<endl;
    cin>>A;
    cout<<"Captura valor de B"<<endl;
    cin>>B;
    cout<<"Captura valor de K"<<endl;
    cin>>K;
    cout<< "Tu resultado es" << endl;
    //Llamar a la funcion solucion y guardar en una variable resultado
    //Imprimir resultado
    int result;
    result = solution(A,B,K);
    cout<< result << endl;
}