#include <iostream>
#include <ctime>

using namespace std;


struct atk{
    string barang;
    int harga, stock;

    atk *next;
};

atk *head, *tail, *baru, *newNode, *del, *before;

void daftarBarang(atk *terbaru){

    while (terbaru != NULL)
    {
        cout << "Barang  : " << terbaru->barang << endl;
        cout << "Harga   : " << terbaru->harga << endl;
        cout << "Stock   : " << terbaru->stock << endl;
        cout << endl;

        terbaru = terbaru->next;
    }
}

// Tambah barang awal
void tambahAwal(){
    newNode = new atk();
    cout << "Barang     : ";
    cin >> newNode->barang;

    cout << "Harga      : ";
    cin >> newNode->harga;

    cout << "Stock      : ";
    cin >> newNode->stock;

    newNode->next = head;
    head = newNode;
    cout << endl;

    daftarBarang(head);
}

void tambahTengah(atk *terbaru, int before){
    newNode = new atk();
    newNode->next = terbaru;

    for (int i = 1; i < before; i++){
        terbaru = terbaru->next;
    }

    cout << "Barang     : ";
    cin >> newNode->barang;

    cout << "Harga      : ";
    cin >> newNode->harga;

    cout << "Stock      : ";
    cin >> newNode->stock;

    newNode->next = terbaru->next;
    terbaru->next = newNode;
    cout << endl;

    daftarBarang(head);
}

// Tambah barang akhir
void tambahAkhir(){
    newNode = new atk;

    cout << "Barang     : ";
    cin >> newNode->barang;

    cout << "Harga      : ";
    cin >> newNode->harga;

    cout << "Stock      : ";
    cin >> newNode->stock;

    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
    cout << endl;

    daftarBarang(head);
}

// Hapus barang awal
void hapusAwal(){
    del = head;
    head = head->next;
    delete del;
}

// Hapus barang akhir
void hapusAkhir(){
    del = tail;
    // traversal
    baru = head;
    while (baru->next != tail){
        baru = baru->next;
    }
    tail = baru;
    tail->next = NULL;
    delete del;
}

// Ubah barang awal 
void ubahAwal(string barang, int harga, int stock){
    head->barang = barang;
    head->harga = harga;
    head->stock = stock;
}

// ubah barang akhir
void ubahAkhir(string barang, int harga, int stock){
    tail->barang = barang;
    tail->harga = harga;
    tail->stock = stock;
}

void cariBarang(atk *terbaru){
    string barang2, ubah, ubah1, ubah2;

    cout << "Cari barang : ";
    cin >> barang2;

    // Cari barang sampai dapat
    while (terbaru->barang != barang2){
        if (terbaru->next == NULL){
            cout << "Barang Habis !" << endl;
            return;
        }terbaru = terbaru->next;
    }

    // Output Pencarian
    cout << "Barang       : " << terbaru->barang << endl;
    cout << "Harga        : " << terbaru->harga << endl;
    cout << "Stock        : " << terbaru->stock << endl;
    cout << endl;

    // Ubah barang
    d:
    cout << "Ingin Mengubah ? (y/n)";
    cin >> ubah;
    if(ubah == "y" || ubah == "Y"){    
        cout << "Ubah awal/akhir ?";
        cin >> ubah1;

        if (ubah1 == "awal" || ubah1 == "Awal" || ubah1 == "AWAL" ){
            cout << "Barang/harga/stok ?";
            cin >> ubah2;
            if(ubah2 == "Barang" || ubah2 == "BARANG" || ubah2 == "barang"){
                cout << "Barang       : ";
                cin >> head->barang;
            }else if(ubah2 == "Harga" || ubah2 == "HARGA" || ubah2 == "harga"){
                cout << "Harga        : ";
                cin >> head->harga;
            }else if(ubah2 == "Stock" || ubah2 == "STOCK" || ubah2 == "stock"){    
                cout << "Stock        : ";
                cin >> head->stock;
                cout << endl;
            }else{
                goto d;
            }
        }else if(ubah1 == "akhir" || ubah1 == "Akhir" || ubah1 == "AKHIR"){
            cout << "Barang/harga/stok ?";
            cin >> ubah2;
            if(ubah2 == "Barang" || ubah2 == "BARANG" || ubah2 == "barang"){
                cout << "Barang       : ";
                cin >> tail->barang;
            }else if(ubah2 == "Harga" || ubah2 == "HARGA" || ubah2 == "harga"){
                cout << "Harga        : ";
                cin >> tail->harga;
            }else if(ubah2 == "Stock" || ubah2 == "STOCK" || ubah2 == "stock"){    
                cout << "Stock        : ";
                cin >> tail->stock;
                cout << endl;
            }else{
                goto d;
            }
        }else{
            cout << "TIDAK DAPAT MENGUBAH !";
            goto d;
        }
    }else if(ubah =="n" || ubah == "N"){
        
    }else{
        goto d;
    }
}

void transaksiBarang(atk *terbaru){
    string barang1;
    int jumlah;
    srand(time(0));
    int kode_struk = rand();

    cout << "Pilih barang : ";
    cin >> barang1;

    if (terbaru == NULL)
    {
        cout << "Barang Habis !" << endl;
        cout << endl;
        return;
    }

    while (terbaru->barang != barang1){
        if (terbaru->next == NULL){
            cout << "Barang Habis !" << endl;
            return;
        }
        terbaru = terbaru->next;
    }

    cout <<"Jumlah : ";
    cin >> jumlah;
    cout << endl;

    cout << "========= STRUK PEMBELIAN BARANG ! =========" << endl;
    cout << "Barang       : " << terbaru->barang << endl;
    cout << "Harga        : " << terbaru->harga*jumlah << endl;
    terbaru->stock-jumlah;
    cout << "Kode Struk   : " << kode_struk << endl;
    cout << endl;

    time_t waktu = time(0);
    cout << ctime(&waktu) << endl;
    cout << "============================================"<< endl;

    terbaru->stock = terbaru->stock-jumlah;
    daftarBarang(head);
}

int main(){
    atk *one, *two, *three;

    one = new atk();
    two = new atk();
    three = new atk();

    // Isi Node
    one->barang = "Pensil";
    two->barang = "Pulpen";
    three->barang = "Spidol";

    one->harga = 1000;
    two->harga = 2000;
    three->harga = 5000;

    one->stock = 1;
    two->stock = 1;
    three->stock = 1;


    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    head=one;
    tail=three;

    string pilih, hapus, tambah, looping = "oke";
    int menu, before, nomor;

    a:
    do{
    cout << " ========TOKO ATK========" << endl;
    cout << " || 1. DAFTAR BARANG   ||" << endl;
    cout << " || 2. TAMBAH BARANG   ||" << endl;
    cout << " || 3. HAPUS BARANG    ||" << endl;
    cout << " || 4. CARI BARANG     ||" << endl;
    cout << " || 5. TRANSAKSI BARANG||" << endl;
    cout << " || 6. KELUAR          ||" << endl;
    cout << " ========================" << endl;
    cout << "PILIH MENU: ";
    cin  >> menu;

    if (menu == 1){        
        daftarBarang(head);
    }else if(menu == 2){
        b:
        cout << "Tambah awal/tengah/akhir ?";
        cin >> tambah;
        if(tambah == "awal" || tambah == "AWAL"){
            tambahAwal();
        }else if(tambah == "tengah" || tambah == "TENGAH"){
            cout << "Setelah : ";
            cin >> before;
            tambahTengah(head, before);
        }else if(tambah == "akhir" || tambah == "AKHIR"){
            tambahAkhir();
        }else{
            goto b;
        }
    }else if(menu == 3){
        c:
        cout << "Hapus awal/tengah/akhir ?";
        cin >> hapus;
        if(hapus == "awal" || hapus == "AWAL" || hapus == "Awal"){
            hapusAwal();
        }else if(hapus == "akhir" || hapus == "AKHIR" || hapus == "Akhir"){
            hapusAkhir();
        }else{
            goto c;
        }
    }else if(menu == 4){
        cariBarang(head);
    }else if(menu == 5){
        daftarBarang(head);
        transaksiBarang(head);
    }else if(menu == 6){
        cout << "TERIMAKASIH TELAH MAMPIR!";
    }else{
        goto a;
    }
    }while(looping == "oke");
    
}