# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br> Nama		: Achmad Ajie Priyajie
<br>NIM		:	1227050002
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Pada UAS ini mahasiswa diminta untuk membuat dua buah program diantaranya :<br>
  1.  Menukar nilai baris dan kolom dalam suatu array atau pada matematika bisa disebut sebagai transpose matriks, nilai yang ditukar didapat dari angka yang diinputkan.
  2.	Mencari dan menampilkan bilangan yang tidak habis dibagi 3, 5, dan 7 dari angka yang diinputkan.
## Source Code
  Source code soal no 1 :
  ```cpp
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
    cout << "bentuk akhir setelah ditukar : " << endl;
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
  ```
  Source code soal no 2 : 
  ```cpp
  #include <iostream>
#include <conio.h>
using namespace std;

int main()
{
     //2. deret matematika bilangan yang tidak habis dibagi 3 5 dan 7
    //input banyaknya baris 0-20
    //input banyaknya kolom
    //tampil bilangan yang tidak habis dibagi 3 5 dan 7
    int array[20][20], baris, kolom;
    cout << "masukkan jumlah baris : ";cin >> baris;
    cout << "masukkan jumlah kolom : ";cin >> kolom;
    cout << "masukkan nilai : " << endl;
    for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << "masukkan nilai baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j];
        }
    }
    cout << "nilai awal :" << endl;
    for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "nilai akhir (yang tidak habis dibagi 3,5 dan 7) :" << endl;
    for(int i = 0; i < baris ;i++){
            for(int j = 0; j < kolom ;j++){
                if(array[i][j]%3 != 0 && array[i][j]%5 != 0 && array[i][j]%7 != 0){
                    cout << array[i][j] << " ";
                }
                else{
                }
            }
    }
    getch();
    getch();
    return 0;
}

  ```
## Output
