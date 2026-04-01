#include <iostream>
using namespace std;

int x;
int menuPilihan;

bool prima(int x){
    if (x <= 1) return false;
    int i = 2;
    while (i <= x /2){
        if (x % i == 0){            //Kalau n bisa dibagi i (habis dibagi) : berarti bukan prima
            return false;           //hasilnya bukan prima
        }
        i++;
    }
    return true;
}

bool fibonacci(int x){
    
}