#include <iostream>
using namespace std;

double luas, alas, tinggi;
void procedurInput(){
    cout << "Masukkan Nilai luas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}

void procedurHitungLuas(){
    luas = 0,5 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " << luas << endl;
}

int main() {
    procedurInput();
    procedurHitungLuas();
    procedurOutput();

}