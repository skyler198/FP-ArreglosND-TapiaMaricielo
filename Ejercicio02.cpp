#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {
    	
        {1, 2, 3},
        {4, 2, 6},
        {7, 2, 9}
    };
    
    cout << "------ MATRIZ DE 3x3 ------\n" << endl;
    for (int i = 0; i < 3; i++){
    	cout << "          ";
    	for(int j = 0; j< 3; j++){
    		cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
    int valor;
    cout << "\nIngrese el numero a buscar: ";
    cin >> valor;

	cout << "\nEl numero " << valor << " se encuentra en:\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == valor){
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
    
    return 0;
}
