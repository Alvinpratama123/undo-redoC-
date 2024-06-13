#include <iostream>
#define MAX 10
using namespace std;

struct stack {
    int top, data[MAX];
} tumpukan;

void init() {
    tumpukan.top = -1;
}

bool isEmpty() {
    return tumpukan.top == -1;
}

bool isFull() {
    return tumpukan.top == MAX - 1;
}

void push() {
    if (isFull()) {
        cout << "\nTumpukan penuh" << endl;
    } else {
        tumpukan.top++;
        cout << "\nMasukan data = ";
        cin >> tumpukan.data[tumpukan.top];
        cout << "Data " << tumpukan.data[tumpukan.top] << " masuk ke stack" << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "\nData kosong\n" << endl;
    } else {
        cout << "\nData " << tumpukan.data[tumpukan.top] << " sudah terambil" << endl;
        tumpukan.top--;
    }
}

void printStack() {
    if (isEmpty()) {
        cout << "Tumpukan kosong" << endl;
    } else {
        cout << "\nTumpukan: ";
        for (int i = tumpukan.top; i >= 0; i--)
            cout << tumpukan.data[i] << ((i == 0) ? "" : ", ");
        cout << endl;
    }
}

int main() {
    int pilihan, data;
    init();
    do {
        printStack();
        cout << "\n1. Input Data (push)\n";
        cout << "2. Hapus Data (pop)\n";
        cout << "3. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << "Keluar..." << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }
    } while (pilihan != 3);

    return 0;
}
