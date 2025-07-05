#include<iostream>

using namespace std;
int main(){
	int matriz[6][6];

	cout << "==========================================================" << endl;
    cout << "                  Reflejar una Imagen " << endl;
    cout << "==========================================================\n" << endl;

	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << "Ingrese los valores de la matriz en la posicion: [" << i << "] [" << j << "] :";
			cin >> matriz[i][j];
		}
	}
	system("pause");
	system("cls");
	
	cout << "Matriz actual:" << endl;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	
	return 0;
}