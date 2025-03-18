#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //Perulangan While
    cout << "Perulangan While" << endl;
    int x;
    int PerulanganWhile = 0;
    int PerulanganDoWhile = 0;
    srand(time(0));
    x = rand() % 10;

    cout << "Nilai x awal : " << x << endl;
    while(x < 7){
        cout << "Nilai x : " << x << "Lari keliling Lapangan" << endl;
        x = rand() % 10;
        PerulanganWhile++;
    }
}

