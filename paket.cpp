#include <iostream>
#define MAX 8

using namespace std;
struct paket{
    string nama_paket;
    int berat;
    string kota;
    bool penuh();
    bool kosong();
    void tambahkan();
    void hapus();
    void tampil();
};

paket stack[MAX];
int atas = 0;

bool paket::penuh(){
    if(atas == MAX){
        return true;
    }else{
        return false;
    }
}

bool paket::kosong(){
    if(atas == 0){
        return true;
    }else{
        return false;
    }
}

void paket::tambahkan(){
    if(penuh()){
        cout << "Penuh" << endl;
    }else{
        cout << "Nama Paket : ";
        cin >> stack[atas].nama_paket;
        cout << "Berat Paket : ";
        cin >> stack[atas].berat;
        cout << "Kota Tujuan : ";
        cin >> stack[atas].kota;

        atas++;
    }
}

void paket::hapus(){
    if(kosong()){
        cout << "Masih Kosong" << endl;
    }else{
        atas--;
    }
}

void paket::tampil(){
    if(kosong()){
        cout << "Masih Kosong" << endl;
    }
    else{
        cout << endl;
        for(int i = 0 ; i < atas ; i++){
            cout << i+1 << ". " << stack[i].nama_paket << " " << stack[i].berat << " " << stack[i].kota << endl;
        }
    }
}

int main(){
    int pilih;
    paket pkt;
    do{
        cout << endl << endl;
        cout << "1. Tambah Paket" << endl;
        cout << "2. Hapus Paket" << endl;
        cout << "3. Tampil Data Paket" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        if(pilih==1)
            {
               pkt.tambahkan();
            }
        if(pilih==2)
            {
                 pkt.hapus();
            }
        if(pilih==3)
            {
                pkt.tampil();
            }
        if(pilih==4)
            {
            cout << "Terima Kasih" << endl;
            }
    }while(pilih != 4);
}


