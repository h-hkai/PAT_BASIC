#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char arr[][10] = {"0", "1", "12", "123", "1234", "12345", "123456", "1234567", "12345678", "123456789"};

int main() {

    int n;
    int g, s, b;

    cin >> n;

    g = n % 10;
    s = (n / 10) % 10;
    b = (n / 100) % 10;

    for (int i = 0; i < b; i++) {
        cout << "B";
    }
    for (int i = 0; i < s; i++) {
        cout << "S";
    }
    cout << arr[g] << endl;

    return 0;
}
