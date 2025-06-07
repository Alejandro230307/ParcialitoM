#include <iostream>
using namespace std;
int main (void){
    int n;
    cout <<"Ingrese el valor de cual desea conocer cuanto numeros pares contiene \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i <<"\n";
        }   
    }
    return 0;
}