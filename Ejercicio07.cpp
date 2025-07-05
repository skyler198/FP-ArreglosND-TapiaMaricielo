#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];

    cout << "==========================================" << endl;
    cout << "          ROTACION DE UNA MATRIZ          " << endl;
    cout << "==========================================\n" << endl;

    cout << "Ingrese los valores de la matriz 4x4:\n" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    system("pause");
    system("cls");

    return 0;
}
