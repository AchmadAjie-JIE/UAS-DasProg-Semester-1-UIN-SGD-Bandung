#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //1. input banyaknya baris dan kolom pakai dimensi dua
    //isi dengan nilai
    //setelah diisi tukar baris dan kolom
    int baris, kolom;
    cout << "masukkan banyak baris : ";cin >> baris;
    cout << "masukkan banyak kolom : ";cin >> kolom;
    const int baris_R = baris;
    const int kolom_R = kolom;
    int array[baris_R][kolom_R];
    int tuker[kolom_R][baris_R];
    cout << "masukkan nilai : " << endl;
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            cout << "baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j]; 
        }
    }
    cout << "bentuk awal : " << endl;
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            tuker[j][i] = array[i][j];
        }
    }
    cout << "bentuk akhir : " << endl;
    for(int i = 0; i < kolom_R; i++){
        for(int j = 0; j < baris_R; j++){
            cout << tuker[i][j] << " ";
        }
        cout << endl;
    }
    
    getch();  
    getch();         
    return 0;
}