#include <iostream>
using namespace std;

int main(){
    string namaadmin = "adnan";
    string password = "admin123";
    string namain,  passwordin, pembeli;
    int jml;
    do{
        cout << "masukkan nama admin : ";
        cin >> namain;
        cout << "masukkan passowrd : ";
        cin >> passwordin;
    } while(passwordin != password || namain != namaadmin);

    cout << "masukkan nama pembeli : ";
    cin >> pembeli;
    cout << "berapa total berat pakaian : ";
    cin >> jml;
    cout << "masukkan jenis layanan :" << endl;
    cout << "1. 4 jam" << endl;
    cout << "2. 7 jam" << endl;
    cout << "3. 10 jam" << endl;
    
}
