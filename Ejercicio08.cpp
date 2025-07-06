#include<iostream>
using namespace std;

int main(){
	int matriz[5][5];

    cout << "============================================" << endl;
    cout << "     RECORRIDO EN ESPIRAL DE MATRIZ 5x5     " << endl;
    cout << "============================================\n" << endl;

    cout << "Ingrese los valores de la matriz 5x5:\n" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    system("pause");
    system("cls");

    cout << "\n-------- Matriz Inicial: --------\n" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "            ";
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}