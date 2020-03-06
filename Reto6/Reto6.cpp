#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solution(vector<int> &V)
{
    int j,i,aux;
    int num;
    int n =V.size();
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(V[i]>V[j])
            {
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }
    for(int z = 0; z < V.size(); z++)
    {
        if(z!=0)
        {
            V[z]==z+1
        }
        else
        {

        }
    }
}

int main()
{

    int fal;
    num=fal;
    vector <int> A={2,3,5,1,6};
    cout<<"Hay un numero faltante, es: "<<fal<<endl;
    solution(A);

}
