//Suma de Números Pares//
#include <iostream>
using namespace std;
int main (void){
    int n;
    int suma = 0;
    cout <<"Digite el valor de cual desea conocer la sumatoria de los digitos pares: \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        
        if (i % 2 == 0)
        {
            suma += i;
            cout <<"La sumatoria de los digitos pares de su numero ingresado es " << suma << "\n";
        }
        
    }
    
    return 0;
}