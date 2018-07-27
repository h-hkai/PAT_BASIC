#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct num {
    int coe;
    int ind;
    int mul;
} p[100000];

int main() {
    int count = 0;
    int n, m;
    while (cin >> n >> m) {
        p[count].coe = n;
        p[count].ind = m;
        p[count++].mul = m * n;
    }

    if (p[0].ind == 0) {
        cout << '0' << ' ' << '0';
    } else {
        cout << p[0].mul << ' ' << p[0].ind - 1;
    }

    for (int i = 1; i < count-1; i++) {
        if (p[i].ind != 0) {
            cout << ' ' << p[i].mul << ' ' << p[i].ind - 1;
        } else {
            cout << ' ' << '0' << ' ' << '0';
        }
            
    }
    
    if (p[count-1].ind != 0) {
      cout << ' ' << p[count-1].mul << ' ' << p[count-1].ind - 1;
    }    
    return 0;
}