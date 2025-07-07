#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
        {5, 2, 7, 4},
        {1, 6, 3, 8},
        {9, 0, 3, 1},
        {1, 3, 8, 5}
    };
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
