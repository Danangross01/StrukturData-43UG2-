#include <iostream>

using namespace std;

struct paket{
    string nama_paket;
    int berat;
    string kota;

};
void tambah_pkt(paket *pkt, int *x){
    cout << "Masukkan nama paket : ";
    cin >> pkt[*x].nama_paket;
    cout << "Masukkan berat paket : ";
    cin >> pkt[*x].berat;
    cout << "Masukkan nama kota : ";
    cin >> pkt[*x].kota;
    *x = *x + 1;
    cout<< endl;
    cout << " berhasil ditambahkan" << endl;
    cout << endl;
}
void hapus_pkt(paket *pkt, int *x){
    *x = *x - 1;
    cout << pkt[*x].nama_paket<<" berhasil dihapus" <<endl;
}
void tampil_pkt(paket *pkt, int *x){
    for(int i=0; i<*x; i++){
      cout << pkt[i].nama_paket << " " << pkt[i].berat<< " " << pkt[i].kota << endl;
    }
    cout << endl;
}
int main(){
    paket pkt[100];
    int x = 0;
    int pilihan;
    do{
        cout << endl;
        cout << "1. Tambah paket" <<endl;
        cout << "2. Hapus paket terakhir" <<endl;
        cout << "3. Tampilkan paket" <<endl;
        cout << "4. Keluar" <<endl;
        cout << "Masukkan pilihan : ";
        cin >> pilihan;
        if(pilihan==1)
            {
                tambah_pkt(pkt, &x);
            }
        if(pilihan==2)
            {
                hapus_pkt(pkt, &x);
            }
        if(pilihan==3)
            {
                tampil_pkt(pkt, &x);
            }
        if(pilihan==4)
            {
            cout << "Terima Kasih" << endl;
            }
    }while(pilihan!=4);
    return 0;
}
