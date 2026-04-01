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
    int a = 0, b = 1, c = 0;

    while (c <= x){
        if (c == x){
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> x;
}

void tampilPrima() {
    if (prima(x)) {
        cout << x << " adalah bilangan prima." << endl;
    } else {
        cout << x << " bukan bilangan prima." << endl;
    }
}

void tampilFibonacci() {
    if (fibonacci(x)) {
        cout << x << " termasuk bilangan Fibonacci." << endl;
    } else {
        cout << x << " bukan bilangan Fibonacci." << endl;
    }
}

void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main() {
    while (true) {
        tampilMenu();
        cin >> menuPilihan;

        switch (menuPilihan) {
            case 1:
                inputAngka();
                tampilPrima();
                break;
            case 2:
                inputAngka();
                tampilFibonacci();
                break;
            case 0:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
}