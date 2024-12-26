#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk Mahasiswa
struct Mahasiswa {
    int nrp;
    string nama, kelas;
    Mahasiswa* next;
    Mahasiswa(int nrp, string nama, string kelas) : nrp(nrp), nama(nama), kelas(kelas), next(nullptr) {}
};

// Kelas untuk Stack
class Stack {
private:
    Mahasiswa* top;
public:
    Stack() : top(nullptr) {}

    // Menambahkan data ke stack (Push)
    void push(int nrp, string nama, string kelas) {
        Mahasiswa* baru = new Mahasiswa(nrp, nama, kelas);
        baru->next = top;
        top = baru;
        cout << "Data " << nama << " ditambahkan ke Stack.\n";
    }
    // Menambahkan data ke stack (Push)
    void push(int nrp, string nama, string kelas) {
        Mahasiswa* baru = new Mahasiswa(nrp, nama, kelas);
        baru->next = top;
        top = baru;
        cout << "Data " << nama << " ditambahkan ke Stack.\n";
    }

    // Menghapus data dari stack (Pop)
    void pop() {
        if (!top) {
            cout << "Stack kosong!\n";
            return;
        }
        Mahasiswa* temp = top;
        top = top->next;
        cout << "Data " << temp->nama << " dihapus dari Stack.\n";
        delete temp;
    }

    // Menampilkan isi Stack
    void tampil() const {
        if (!top) {
            cout << "Stack kosong!\n";
            return;
        }
        cout << "Data dalam Stack:\n";
        Mahasiswa* current = top;
        while (current) {
            cout << "NRP: " << current->nrp << ", Nama: " << current->nama << ", Kelas: " << current->kelas << endl;
            current = current->next;
 }
    }
};

// Kelas untuk Linked List
class LinkedList {
private:
    Mahasiswa* head;
public:
    LinkedList() : head(nullptr) {}

    // Menambahkan data ke Linked List
    void tambah(int nrp, string nama, string kelas) {
        Mahasiswa* baru = new Mahasiswa(nrp, nama, kelas);
        if (!head) {
            head = baru;
        } else {
            Mahasiswa* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = baru;
        }
        cout << "Data " << nama << " ditambahkan ke Linked List.\n";
    }

    // Menghapus data berdasarkan NRP
    void hapus(int nrp) {
        if (!head) {
            cout << "Linked List kosong!\n";
            return;
        }
   if (head->nrp == nrp) {
            Mahasiswa* temp = head;
            head = head->next;
            delete temp;
            cout << "Data dengan NRP " << nrp << " dihapus.\n";
            return;
        }
        Mahasiswa* temp = head;
        while (temp->next && temp->next->nrp != nrp) temp = temp->next;
        if (temp->next) {
            Mahasiswa* hapus = temp->next;
            temp->next = hapus->next;
            delete hapus;
            cout << "Data dengan NRP " << nrp << " dihapus.\n";
        } else {
            cout << "Data dengan NRP " << nrp << " tidak ditemukan!\n";
        }
    }

    // Menampilkan semua data di Linked List
    void tampil() const {
        if (!head) {
            cout << "Linked List kosong!\n";
            return;
        }
        cout << "Data dalam Linked List:\n";
        Mahasiswa* current = head;
        while (current) {
            cout << "NRP: " << current->nrp << ", Nama: " << current->nama << ", Kelas: " << current->kelas << endl;
   current = current->next;
        }
    }
};

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "\n========= MENU =========\n";
    cout << "1. Push Stack\n";
    cout << "2. Pop Stack\n";
    cout << "3. Tampil Stack\n";
    cout << "4. Tambah Linked List\n";
    cout << "5. Hapus Linked List\n";
    cout << "6. Tampil Linked List\n";
    cout << "0. Keluar\n";
    cout << "Pilih: ";
}

int main() {
    Stack stack;
    LinkedList list;
    int pilihan, nrp;
    string nama, kelas;

    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
        case 1: // Push Stack
            cout << "Masukkan NRP, Nama, Kelas: ";
            cin >> nrp >> nama >> kelas;
            stack.push(nrp, nama, kelas);
 break;
        case 2: // Pop Stack
            stack.pop();
            break;
        case 3: // Tampil Stack
            stack.tampil();
            break;
        case 4: // Tambah Linked List
            cout << "Masukkan NRP, Nama, Kelas: ";
            cin >> nrp >> nama >> kelas;
            list.tambah(nrp, nama, kelas);
            break;
        case 5: // Hapus Linked List
            cout << "Masukkan NRP yang akan dihapus: ";
            cin >> nrp;
            list.hapus(nrp);
            break;
        case 6: // Tampil Linked List
            list.tampil();
            break;
        case 0:
            cout << "Program selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

}
