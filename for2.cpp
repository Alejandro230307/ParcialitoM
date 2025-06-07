#include <iostream>
using namespace std;
int main (void){
    int n;
    int suma = 0;
    cout <<"Digite el valor que desea conocer la sumatoria : \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        suma += i;
        cout << "La sumatoria de "<< n << " es: " << suma << "\n";
    }
    

    return 0;
}