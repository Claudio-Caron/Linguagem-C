#include <iostream>
using namespace std;
void BubbleSort(int *, n);
int main()
{
    int v[]=[3, 2, 1, 6, 5, 4, 8, 9,7];
        cout<< "Vetor ordenado: "<< endl ;
    BubbleSort(&v, 10);
    for (int i=0; i<=9; i++){
        cout << v[i]<< end;
    }
}
void BubbleSort(int *v, n)
{
    int i, j, aux;
    for (i = 0; i < n; i++)
    {
        for (j=0; j<(n-1);j++)
            if (v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        for (j=0; j<n; j++)
            cout<< v[j]<< fflush;
    }
}