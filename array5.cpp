#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> N;

    int numeros[N];

    // Ingresar los números
    for (int i = 0; i < N; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Mostrar el arreglo invertido
    cout << "\nArreglo en orden invertido:\n";
    for (int i = N - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
