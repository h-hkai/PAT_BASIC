#include<stdio.h>
#include<iostream>

using namespace std;

int a[10005], p[1000];
int count;

void is_priem(int x) {
    for (int i = 0; i < x; i++) {
        a[i] = 1;
    }
    a[1] = 0;
    for (int i = 2; i < x; i++) {
        if (a[i]) {
            p[count++] = i;
            for (int j = i + i; j < x; j += i) {
                a[j] = 0;
            }
        }
    }
}

int main() {

    int n, m;
    count = 1;

    cin >> m >> n;

    is_priem(10000);

    for (int i = m; i <= n; i += 10) {
        for (int j = i; j < i + 9 && j <= n; j++) {
            cout << p[j] << ' ';
        }
        cout << p[i+9] << endl;
    }

    return 0;
}