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
    cout << endl;
    system("pause");
    
    cout << "\n-------- \nRecorrido en espiral: --------\n" << endl;
    
    int inicioFila = 0;
    int finFila = 4;
    int inicioColumna = 0;
    int finColumna = 4;

    while (inicioFila <= finFila && inicioColumna <= finColumna) {
   
        for (int j = inicioColumna; j <= finColumna; j++) {
            cout << matriz[inicioFila][j] << " ";
        }
        inicioFila++;

        for (int i = inicioFila; i <= finFila; i++) {
            cout << matriz[i][finColumna] << " ";
        }
        finColumna--;

        if (inicioFila <= finFila) {
            for (int j = finColumna; j >= inicioColumna; j--) {
                cout << matriz[finFila][j] << " ";
            }
            finFila--;
        }

        if (inicioColumna <= finColumna) {
            for (int i = finFila; i >= inicioFila; i--) {
                cout << matriz[i][inicioColumna] << " ";
            }
            inicioColumna++;
        }
    }
    
    return 0;
}