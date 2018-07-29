#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int n;
int arr[10];
bool flag = true;
int _count = 0;
int num1 = 0, num2 = 0; 
int sub;

void solve(int x) {
    _count = 0;
    num1 = num2 = 0;
    while(x) {
        int ant = x % 10;
        arr[_count++] = ant;
        x = x / 10;
    }

    sort(arr, arr+_count);

    for (int i = _count-1; i >= 0; i--) {
        num1 = num1 * 10 + arr[i];
    }

    for (int i = 0; i < _count; i++) {
        num2 = num2 * 10 + arr[i];
    }

    sub = num1 - num2;

    if (sub != 0)
        cout << num1 << ' ' << '-' << ' ' << num2 << ' ' << '=' << ' ' << sub << endl;
    else 
        cout << num1 << ' ' << '-' << ' ' << num2 << ' ' << '=' << ' ' << "0000" << endl;

    if (num1 == num2 || sub == 6174) {
        flag = false;
    }
}

int main() {
    cin >> n;

    sub = n;

    while(flag) {
        solve(sub);
    }

    return 0;
}