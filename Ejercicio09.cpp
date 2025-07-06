#include <iostream>
using namespace std;

int main(){
    int N;
    
    cout << "==============================================" << endl;
    cout << "                Cuadrado Latino               " << endl;
    cout << "==============================================" << endl;
	
    cout << "Ingrese el orden del cuadrado latino: ";
    cin >> N;
	
    int matriz[N][N];
    
    for(int i = 0; i <N; i++){
    	for(int j = 0; j < N; j++){
    		matriz[i][j] = (j - i + N) % N + 1;
		}
	}
	
    cout << "\n---- Cuadrado latino de orden " << N << ": ----\n" << endl;
    for (int i = 0; i < N; i++){
    	cout << "             ";
        for (int j = 0; j < N; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
	
	return 0;
}