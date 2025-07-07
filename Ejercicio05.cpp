#include <iostream>
using namespace std;

int main() {
	int matriz[4][4];
	cout << "Ingrese el valores para la matriz: "<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "Posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	system("pause");
	system("cls");
    
    cout << "   ---- Matriz: ----" << endl;
    for(int i = 0; i < 4; i++){
    	cout << "        ";
    	for(int j = 0; j < 4; j++){
    		cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	


    return 0;
}
