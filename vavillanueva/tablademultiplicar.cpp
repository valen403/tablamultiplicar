#include <iostream>

using namespace std;

int main() {
    int numero;
    cout<< "ingrese un numero:"<< endl;
    cin>> numero;

    for (int i = 1; i<= 10; i++){
        cout << numero <<"x" <<i << "=" <<numero * i << endl;
    }
}
