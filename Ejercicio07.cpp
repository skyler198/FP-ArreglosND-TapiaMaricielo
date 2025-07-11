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
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    system("pause");
    system("cls");
    
    cout << "\n------- Matriz inicial: -------\n" << endl;
    
    for (int i = 0; i < 4; i++) {
        cout << "           ";
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    
    
    int matrizRotada[4][4];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrizRotada[j][3 - i] = matriz[i][j];
        }
    }

    cout << "\n----- Matriz Rotada 90 grados en sentido horario: -----\n" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "           ";
        for (int j = 0; j < 4; j++) {
            cout << matrizRotada[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
