#include <iostream>
using namespace std;

// Рекурсивна функція для обчислення n-го члена ряду
int ряд(int n) {
    if (n == 1) {
        return 1; 
    }
    return ряд(n - 1) + 2; 
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n;
    cout << "Введіть номер члена ряду: ";
    cin >> n;
    cout << n << "-й член ряду: " << ряд(n) << endl;
    return 0;
}