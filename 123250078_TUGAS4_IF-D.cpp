#include <iostream>
using namespace std;

int pilihGanjilGenap(string jenis);
int main(){
    int total = 0, pembagi = 0;
    float rata;
    int baris, kolom;
    cout << "masukan baris : ";
    cin >> baris;
    cout << "masukan kolom : ";
    cin >> kolom;
    int nilai[255][255];

    for (int i = 0; i < baris; i++){
        for (int j =0; j<kolom; j++){
            cout << "masukan nilai di [" << i << "] [" << j << "] : ";
            cin >> nilai[i][j];
        }
    }

    int tes1, tes2;
    cout << "===================" << endl;      
    for (int i = 0; i < baris; i++){
        for (int j =0; j<kolom; j++){
            cout << " | " << nilai[i][j] << " | ";
        
        } 
        cout << endl;

    }
    cout << "===================" << endl;
    int kei = pilihGanjilGenap("baris");
    int kej = pilihGanjilGenap("kolom");
    cout << "===================" << endl;
    cout  << "hasil : ";
    int data[100];
    int index = 0;
    for (int i = 0; i < baris; i++){
        for (int j =0; j<kolom; j++){
            tes1 = (i+1)%2;
            tes2 = (j+1)%2;
            if(tes1 == kei && tes2 == kej ){
                    data[index] = nilai[i][j];
                    cout << " | " << data[index] << " | " << flush;
                index++;
            }
        } 
    }
    if (index == 0) {
        cout << "\nTidak ada data yang sesuai!\n";
        return 0;
    }
    for (int i = 0; i < index; i++) {
        total += data[i];
        pembagi++;
    }
    rata = total * 1.0 / pembagi;
    cout << "\nRata-rata : " << rata << endl;
    return 0;
}
int pilihGanjilGenap(string jenis) {
    string input;
    while (true) {
        cout << jenis << " : ";
        cin >> input;
        if (input == "genap" || input == "Genap")
            return 0;
        else if (input == "ganjil" || input == "Ganjil")
            return 1;
        else
            cout << "Input salah! Harap ketik 'ganjil' atau 'genap'.\n";
    }
}
