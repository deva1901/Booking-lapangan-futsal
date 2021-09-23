#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <limits.h>
#include <stdio.h>

using namespace std;

struct lapang
{
    int no_lapang;
    string nama_lapang;
    string ukuran_lapang;
    string harga;
};
lapang data_lapang[3];
int jml_lapang = 0;

struct booking
{
    string nama_customer;
    string nama_tim;
    lapang lapang;
    int jam;
    int inphari;
    string hari;
    booking *next;
};
booking *head = NULL;

struct tree
{
    int data;
    string jabatan;
    string nama;
    tree *left, *right;
};
tree *pohon, *root;

const int size = 10;

struct dataq
{
    string nama;
    string ukuran;
    string harga;
};

struct queue
{
    dataq tmp[size];
    int top;
} antrian;

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

bool cekkosong()
{
    if (head == NULL)
        return true;
    return false;
}

void header()
{
    cout << "================================\n";
    cout << "           FUTSAL KUY           \n";
    cout << "   Jalan Merdeka Utara No. 68   \n";
    cout << "       Telp.088221133455        \n";
    cout << "================================\n";
}

void awal()
{
    system("CLS");
    cout << "================================\n";
    cout << "   SELAMAT DATANG DI KUYFUTSAL  \n";
    cout << "     BOOKING TEMPAT DISINI !    \n";
    cout << "================================\n\n";
    cout << "       TATA CARA BOOKING        \n";
    cout << "1. Ketik enter untuk memulai    \n";
    cout << "2. Pilih menu pemesanan lapangan\n";
    cout << "3. Isi data dengan lengkap      \n";
    cout << "4. Ketik Y untuk konfirmasi pemesanan\n\n";
    cout << "     **Selamat Bertanding**      \n";
    cout << " Tekan Enter untuk mulai aplikasi";
    getch();
}

void menu()
{
    system("cls");
    header();
    cout << "================================\n";
    cout << "             *Menu*             \n";
    cout << "     1. Jadwal lapangan         \n";
    cout << "     2. Pemesanan Lapangan      \n";
    cout << "     3. Riwayat Pemesanan       \n";
    cout << "     4. Lokasi       \n";
    cout << "================================\n";
    cout << "================================\n";
    cout << "          *Menu Admin*          \n";
    cout << "     5. Insert Data Lapangan    \n";
    cout << "     6. Struktur organisasi\n";
    cout << "================================\n";
}

void jadwal(booking *head)
{
    system("cls");
    gotoxy(25, 0);
    cout << "================================\n";
    gotoxy(25, 1);
    cout << "           FUTSAL KUY           \n";
    gotoxy(25, 2);
    cout << "   Jalan Merdeka Utara No. 68   \n";
    gotoxy(25, 3);
    cout << "       Telp.088221133455        \n";
    gotoxy(25, 4);
    cout << "================================\n";
    gotoxy(25, 5);
    cout << "================================" << endl;
    gotoxy(25, 6);
    cout << "             Jadwal             " << endl;
    gotoxy(25, 7);
    cout << "            Lapangan            " << endl;
    gotoxy(0, 8);
    cout << "===================================================================================================================" << endl;
    if (!cekkosong())
    {
        booking *tmp;
        tmp = head;
        gotoxy(0, 9);
        cout << "        Jam       |";
        gotoxy(0, 10);
        cout << "===================================================================================================================";
        gotoxy(0, 11);
        cout << "   11.00 - 12.00";
        gotoxy(0, 12);
        cout << "   12.00 - 13.00";
        gotoxy(0, 13);
        cout << "   13.00 - 14.00";
        gotoxy(0, 14);
        cout << "   14.00 - 15.00";
        gotoxy(0, 15);
        cout << "   15.00 - 16.00";
        gotoxy(0, 16);
        cout << "   16.00 - 17.00";
        gotoxy(19, 9);
        cout << "       Nama       |";
        gotoxy(38, 9);
        cout << "     Nama Tim     |";
        gotoxy(57, 9);
        cout << "     Lapangan     |";
        gotoxy(76, 9);
        cout << "       Harga      |";
        gotoxy(96, 9);
        cout << "       Hari       |";

        while (tmp != NULL)
        {
            if (tmp->jam == 1)
            {
                gotoxy(19, 11);
                cout << "      " << tmp->nama_customer;
                gotoxy(18, 11);
                cout << "|";
                gotoxy(38, 11);
                cout <<  "      " << tmp->nama_tim;
                gotoxy(37, 11);
                cout << "|";
                gotoxy(57, 11);
                cout <<  "      " << tmp->lapang.nama_lapang;
                gotoxy(56, 11);
                cout << "|";
                gotoxy(76, 11);
                cout <<  "      " << tmp->lapang.harga;
                gotoxy(75, 11);
                cout << "|";
                gotoxy(94, 11);
                cout << "|";
                gotoxy(96, 11);
                cout <<"      " << tmp->hari;
                gotoxy(114, 11);
                cout << "|";
            }
            else if (tmp->jam == 2)
            {
                gotoxy(19, 12);
                cout <<  "      " << tmp->nama_customer;
                gotoxy(18, 12);
                cout << "|";
                gotoxy(38, 12);
                cout <<  "      " << tmp->nama_tim;
                gotoxy(37, 12);
                cout << "|";
                gotoxy(57, 12);
                cout <<  "      " << tmp->lapang.nama_lapang;
                gotoxy(56, 12);
                cout << "|";
                gotoxy(76, 12);
                cout <<  "      " << tmp->lapang.harga;
                gotoxy(75, 12);
                cout << "|";
                gotoxy(94, 12);
                cout << "|";
                gotoxy(96, 12);
                cout <<"      " << tmp->hari;
                gotoxy(114, 12);
                cout << "|";
            }
            else if (tmp->jam == 3)
            {
                gotoxy(19, 13);
                cout <<  "      " << tmp->nama_customer;
                gotoxy(18, 13);
                cout << "|";
                gotoxy(38, 13);
                cout <<  "      " << tmp->nama_tim;
                gotoxy(37, 13);
                cout << "|";
                gotoxy(57, 13);
                cout <<  "      " << tmp->lapang.nama_lapang;
                gotoxy(56, 13);
                cout << "|";
                gotoxy(76, 13);
                cout <<  "      " << tmp->lapang.harga;
                gotoxy(75, 13);
                cout << "|";
                gotoxy(94, 13);
                cout << "|";
                gotoxy(96, 13);
                cout <<"      " << tmp->hari;
                gotoxy(114, 13);
                cout << "|";
            }
            else if (tmp->jam == 4)
            {
                gotoxy(19, 14);
                cout <<  "      " << tmp->nama_customer;
                gotoxy(18, 14);
                cout << "|";
                gotoxy(38, 14);
                cout <<  "      " << tmp->nama_tim;
                gotoxy(37, 14);
                cout << "|";
                gotoxy(57, 14);
                cout <<  "      " << tmp->lapang.nama_lapang;
                gotoxy(56, 14);
                cout << "|";
                gotoxy(76, 14);
                cout <<  "      " << tmp->lapang.harga;
                gotoxy(75, 14);
                cout << "|";
                gotoxy(94, 14);
                cout << "|";
                gotoxy(96, 14);
                cout <<"      " << tmp->hari;
                gotoxy(114, 14);
                cout << "|";
            }
            else if (tmp->jam == 5)
            {
                gotoxy(19, 15);
                cout <<  "      " << tmp->nama_customer;
                gotoxy(18, 15);
                cout << "|";
                gotoxy(38, 15);
                cout <<  "      " << tmp->nama_tim;
                gotoxy(37, 15);
                cout << "|";
                gotoxy(57, 15);
                cout <<  "      " << tmp->lapang.nama_lapang;
                gotoxy(56, 15);
                cout << "|";
                gotoxy(76, 15);
                cout <<  "      " << tmp->lapang.harga;
                gotoxy(75, 15);
                cout << "|";
                gotoxy(94, 15);
                cout << "|";
                gotoxy(96, 15);
                cout <<"      " << tmp->hari;
                gotoxy(114, 15);
                cout << "|";
            }
            else if (tmp->jam == 6)
            {
                gotoxy(19, 16);
                cout <<  "      " << tmp->nama_customer;
                gotoxy(18, 16);
                cout << "|";
                gotoxy(38, 16);
                cout <<  "      " << tmp->nama_tim;
                gotoxy(37, 16);
                cout << "|";
                gotoxy(57, 16);
                cout <<  "      " << tmp->lapang.nama_lapang;
                gotoxy(56, 16);
                cout << "|";
                gotoxy(76, 16);
                cout <<  "      " << tmp->lapang.harga;
                gotoxy(75, 16);
                cout << "|";
                gotoxy(94, 16);
                cout << "|";
                gotoxy(96, 16);
                cout <<"      " << tmp->hari;
                gotoxy(114, 16);
                cout << "|";
            }
            tmp = tmp->next;
        }
    }
    cout << "\n\n\n\n";
}

#define INF 99

int jarakMin(int jarak[], bool set[])
{
    int kecil = INF;
    int indeks;

    for (int i = 0; i < 7; i++)
    {
        if (set[i] == false && jarak[i] <= kecil)
        {
            kecil = jarak[i];
            indeks = i;
        }
    }
    return indeks;
}

void cetakPath(int simpan[], int j, int awal)
{
    if (simpan[j] == -1)
    {
        return;
    }
    else
    {
        cetakPath(simpan, simpan[j], awal);
        if (j == 0)
        {
            cout << "kemudian sampai di tujuan lokasi futsal" << endl;
        }
        else
        {
            cout << "kemudian pergi ke blok " << j << endl;
        }
    }
}

int tampilan(int jarak[], int n, int simpan[], int awal)
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            cout << endl;
            cout << "Dari blok " << awal << endl;
            cetakPath(simpan, i, awal);
            cout << endl;
            cout << "--------------------------------" << endl;
            cout << "Total Jarak yang ditempuh : " << jarak[i] << "km";
        }
    }
}

int djikstra(int graf[7][7], int awal)
{
    int jarak[7];
    bool set[7];
    int simpan[7];

    for (int i = 0; i < 7; i++)
    {
        jarak[i] = INF;
        set[i] = false;
        simpan[i] = -1;
    }

    jarak[awal] = 0;

    for (int i = 0; i < 7; i++)
    {
        int m = jarakMin(jarak, set);
        set[m] = true;

        for (int i = 0; i < 7; i++)
        {
            if (!set[i] && graf[m][i] && jarak[m] + graf[m][i] < jarak[i])
            {
                simpan[i] = m;
                jarak[i] = jarak[m] + graf[m][i];
            }
        }
    }
    tampilan(jarak, 7, simpan, awal);
}

void lokasi()
{
    int graf[7][7] = {
        {0, 2, 4, 0, 0, 0, 0}, // Lapangan Futsal
        {2, 0, 1, 3, 2, 0, 0}, // B1
        {4, 1, 0, 1, 0, 4, 0}, // B2
        {0, 3, 1, 0, 1, 2, 2}, // B3
        {0, 2, 1, 1, 0, 0, 2}, // B4
        {0, 0, 4, 2, 0, 0, 3}, // B5
        {0, 0, 0, 2, 2, 2, 0}, // B6
    };                         //F, B1,B2,B3,B4,B5,B6
    system("cls");
    int asal;
    header();
    cout << " ==================================" << endl;
    cout << "    *    Lintasan Terdekat    * " << endl;
    cout << "    *       Futsal Kuy        * " << endl;
    cout << " =================================" << endl;
    cout << "| 1. Blok 1 (Utara)               |" << endl;
    cout << "| 2. Blok 2 (Timur Laut)          |" << endl;
    cout << "| 3. Blok 3 (Barat Laut)          |" << endl;
    cout << "| 4. Blok 4 (Timur                |" << endl;
    cout << "| 5. Blok 5 (Barat)               |" << endl;
    cout << "| 6. Blok 6 (Selatan)             |" << endl;
    cout << " =================================" << endl;
    cout << "Darimana Anda berasal  (1-6): ";
    cin >> asal;
    cout << endl;
    system("cls");
    cout << "Mencari rute tercepat menuju blok 0 (Lapangan Futsal)....";
    Sleep(1500);
    djikstra(graf, asal);
}

void definisi_awal()
{
    pohon = NULL;
}

void insertTree(tree **root, int nilai, string jbtn, string nama)
{
    tree *new_node;
    if ((*root) == NULL)
    {
        new_node = new tree;
        new_node->data = nilai;
        new_node->jabatan = jbtn;
        new_node->nama = nama;
        new_node->left = new_node->right = NULL;

        (*root) = new_node;
        (*root)->data = nilai;
        (*root)->jabatan = jbtn;
        (*root)->nama = nama;
        (*root)->left = (*root)->right = NULL;
    }
    else if (nilai < (*root)->data)
    {
        insertTree(&(*root)->left, nilai, jbtn, nama);
    }
    else
    {
        insertTree(&(*root)->right, nilai, jbtn, nama);
    }
}

void preOrder(tree *root, int awal = 1)
{
    if (root != NULL)
    {
        if (awal == 1)
        {
            cout << "\t";
            cout << root->nama << ": " << root->jabatan << endl;
            cout << endl;
        }
        else
        {
            cout << root->nama << ": " << root->jabatan << " ";
            cout << "\t";
        }
        awal++;
        preOrder(root->left, awal);
        preOrder(root->right, awal);
    }
}

void strukturorg()
{
    string pemilik, manajer, administrasi, petugas_lap, petugas_keb;
    cout << "===============================\n";
    cout << "          FUTSAL KUY           \n";
    cout << "  Jalan Merdeka Utara No. 68   \n";
    cout << "      Telp.088221133455        \n";
    cout << "===============================\n";
    cout << "      Struktur Organisasi         " << endl;
    cout << "          Futsal Kuy              " << endl;
    cout << "          Tahun 2021              " << endl;
    cout << endl;
}

void tampilanq()
{
    int nomor = 1;
    for (int i = 0; i <= antrian.top; i++)
    {
        if (i != antrian.top)
        {
            cout << nomor++ << ". ";
            cout << antrian.tmp[i].nama << " - " << antrian.tmp[i].ukuran << " - " << antrian.tmp[i].harga << endl;
        }
    }
}

void pesan()
{
    system("CLS");
    header();
    booking *new_booking, *temp;
    new_booking = new booking;
    int pilihlapang;

    cout << "Masukan Nama Anda      : ";
    cin >> new_booking->nama_customer;
    cout << "Masukan Nama Tim Anda  : ";
    cin >> new_booking->nama_tim;
    cout << "Daftar Lapangan : " << endl;
    tampilanq();
    cout << endl;
    cout << "Pilih Lapang           : ";
    cin >> pilihlapang;
    new_booking->lapang = data_lapang[pilihlapang - 1];
    cout << "1. 11.00 - 12.00" << endl;
    cout << "2. 12.00 - 13.00" << endl;
    cout << "3. 13.00 - 14.00" << endl;
    cout << "4. 14.00 - 15.00" << endl;
    cout << "5. 15.00 - 16.00" << endl;
    cout << "6. 16.00 - 17.00" << endl;
    cout << "Masukan Waktu bermain : ";
    cin >> new_booking->jam;
    cout << "1. Senin" << endl;
    cout << "2. Selasa" << endl;
    cout << "3. Rabu" << endl;
    cout << "4. Kamis" << endl;
    cout << "5. Jumat" << endl;
    cout << "6. Sabtu" << endl;
    cout << "7. minggu" << endl;
    cout << "Masukan hari bermain : " << endl;
    cin >> new_booking->inphari;
    if(new_booking->inphari == 1){
        new_booking->hari = "Senin";
    }
    if(new_booking->inphari == 2){
        new_booking->hari = "Selasa";
    }
    if(new_booking->inphari == 3){
        new_booking->hari = "Rabu";
    }
    if(new_booking->inphari == 4){
        new_booking->hari = "Kamis";
    }
    if(new_booking->inphari == 5){
        new_booking->hari = "Jumat";
    }
    if(new_booking->inphari == 6){
        new_booking->hari = "Sabtu";
    }
    if(new_booking->inphari == 7){
        new_booking->hari = "Minggu";
    }
    cout << "-------------------------" << endl;
    cout << "Total Harga : " << new_booking->lapang.harga;
    new_booking->next = NULL;

    if (cekkosong())
    {
        head = new_booking;
        head->next = NULL;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_booking;
    }

    ofstream filenyaa;

    filenyaa.open("data.txt", ios::app);
    filenyaa << "================================" << endl;
    filenyaa << "Lapangan : " << new_booking->lapang.nama_lapang << endl;
    filenyaa << "================================" << endl;
    filenyaa << "Nama     : " << new_booking->nama_customer << endl;
    filenyaa << "Nama Tim : " << new_booking->nama_tim << endl;
    filenyaa << "Harga    : " << new_booking->lapang.harga << endl;
    filenyaa.close();
}

void createQueue()
{
    antrian.top = 0;
}

int isFull()
{
    if (antrian.top >= size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inqueue(string harga, string ukuran, string nama)
{
    if (isFull() == 1)
    {
        cout << "Data sudah penuh";
    }
    else
    {
        antrian.tmp[antrian.top].nama = nama;
        antrian.tmp[antrian.top].ukuran = ukuran;
        antrian.tmp[antrian.top].harga = harga;
        antrian.top++;
    }
}

void inputlapang()
{
    system("CLS");
    header();
    char ulangi = 'y';
    int x = 0;
    createQueue();
    do
    {
        cout << "Masukan Nama Lapang : ";
        cin >> data_lapang[x].nama_lapang;
        cout << "Masukan Ukuran Lapang (MxM) : ";
        cin >> data_lapang[x].ukuran_lapang;
        cout << "Masukan Harga Lapang : ";
        cin >> data_lapang[x].harga;
        inqueue(data_lapang[x].harga, data_lapang[x].ukuran_lapang, data_lapang[x].nama_lapang);
        x++;
        cout << "\nMau Tambah Data Lagi? (Y/N) : ";
        cin >> ulangi;
        cout << endl;
    } while (ulangi == 'y' || ulangi == 'Y');
    jml_lapang += x;
}

void riwayat()
{
    system("cls");
    header();
    string a;
    ifstream filenya;

    filenya.open("data.txt");

    if (filenya.is_open())
    {
        while (getline(filenya, a))
        {
            cout << a << endl;
        }
    }
    else
    {
        cout << "File database tidak ditemukan";
    }
    filenya.close();
}

int main()
{
    int pilihmenu;
    char backtomenu = 'y';
    awal();
    insertTree(&pohon, 6, "Reyhan", "Pemilik");
    insertTree(&pohon, 4, "Faja", "Manajer");
    insertTree(&pohon, 7, "Alif", "Pegawai");
    do
    {
        menu();
        cout << "\nPilih Menu (1-6) : ";
        cin >> pilihmenu;

        switch (pilihmenu)
        {
        case 1:
            jadwal(head);
            break;
        case 2:
            pesan();
            break;
        case 3:
            riwayat();
            break;
        case 4:
            lokasi();
            break;
        case 5:
            inputlapang();
            break;
        case 6:
            system("cls");
            strukturorg();
            preOrder(pohon);
            break;
        default:
            cout << "Pilihan Menu Tidak Ada!";
            break;
        }
        gotoxy(0, 22);
        if (pilihmenu == 3){
            getch();
            system("cls");
            exit(0);
        }
        cout << "\nKembali ke Menu (y/n) : ";
        cin >> backtomenu;
    } while (backtomenu == 'y' || backtomenu == 'Y');
    
}