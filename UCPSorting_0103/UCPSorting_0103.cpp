//UCPSorting_0103
// 
//UCP Algoritma
// 
//JAWAB :
//1. Untuk membandingkan di insertion sort kita harus membagi list nya menjadi yang tersortir dan belum tersortir.
// biasanya list yang tersortir mempunyai elemen pertama yang berada di list tersebut. Untuk menukar elemen nya langkah yang pertama adalah 
// menaruh "i" pada pass 1 dan menaruh "j= i-1" setelah itu jika "j" lebih besar dari pada i simpan i nya pada temporary dan lakukan j+1 lakukan lah sampai itu tersortir
// 
// 
//2. Untuk selection sort ia akan mengscan list nya berulang kali ,memilih elemen nya dan memindahkan elemenya ke tempat yang benar dengan menukarkan posisi di list.
// 
// 
//3. Cara untuk mengetahuinya tergantung berapa panjangnya variable array yang akan di masukan dan metode sort yang digunakan.

//4. KONVERSI KE C++

#include <iostream>
using namespace std;

int n = 3;
int dipa[];

void input() {
    cout << "Masukan " << n << " elemen:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> dipa[i];
    }
}

void selectionSort() {
    for (int j = 0; j < n - 2; j++) {
        
        int i = 0;
        int min_Index = j;

        for (int i = j + 1; n - 1;) {
            if (dipa[j] < dipa[min_Index]) {
                min_Index = j;
            }
        }
        if (min_Index = i) {
            int temp = dipa[i];
            dipa[i] = dipa[min_Index];
            dipa[min_Index] = temp;
        }
    }
}


void display() {
    cout << "Elemen yang telah tersusun:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << dipa[i] << " ";
    }
    cout << endl;
}



int main() {

    void input();
    void selectionSort();
    void display();

    return 0;
}