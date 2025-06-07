#include <iostream>
using namespace std;
int main (void){
    int monto, precio;
    cout <<"Ingrese el monto total de su compra: \n";
    cin >> monto;
    if (monto <= 100)
    {
        cout <<"Muchas gracias por su compra, vuelva pronto! \n";
    }
    else
    {
        cout << "El precio total a pagar es de: " << monto * 0.90 << ". Muchas gracias por su compra vuelva pronto \n";
    }
    

    return 0;
}