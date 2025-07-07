#include<iostream>
using namespace std;
int main (){
	int matriz[4][4];
	cout << "Ingrese el valores parala matriz: "<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "Posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	system("pause");
	system("cls");

	return 0;
}