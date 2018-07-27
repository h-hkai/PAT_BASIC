#include<stdio.h>
#include<iostream>

using namespace std;

int a[10000005], p[10005];
int count, i, j;

void is_priem(int x) {
    for (i = 0; i < x; i++) {
        a[i] = 1;
    }
    a[1] = 0;
    for (i = 2; i < x; i++) {
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

    for (i = m; i <= n; i += 10) {
        for (j = i; j < i + 9 && j < n; j++) {
            cout << p[j] << ' ';
        }
        if (i + 9 <= n)
            cout << p[i+9] << endl;
        else
            cout << p[n] << endl;
    }

    return 0;
}