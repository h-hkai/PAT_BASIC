#include<stdio.h>
#include<iostream>
#define M 100005
using namespace std;

char a[M], b[M];
char a_max, b_max;
int a_vic = 0, b_vic = 0;
int a_fai = 0, b_fai = 0;
int a_dra = 0, b_dra = 0;
int a_c = 0, a_j = 0, a_b = 0;
int b_c = 0, b_j = 0, b_b = 0;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 'C' && b[i] == 'J') {
            a_c++;
            b_j++;
            a_vic++;
            b_fai++;
        } else if (a[i] == 'J' && b[i] == 'B') {
            a_j++;
            b_b++;
            a_vic++;
            b_fai++;
        } else if (a[i] == 'B' && b[i] == 'C') {
            a_b++;
            b_c++;
            a_vic++;
            b_fai++;
        } else if (b[i] == 'C' && a[i] == 'J') {
            b_c++;
            a_j++;
            b_vic++;
            a_fai++;
        } else if (b[i] == 'J' && a[i] == 'B') {
            b_j++;
            a_b++;
            b_vic++;
            a_fai++;
        } else if (b[i] == 'B' && a[i] == 'C') {
            b_b++;
            a_c++;
            b_vic++;
            a_fai++;
        } else if (a[i] == 'C' && b[i] == 'C') {
            a_dra++;
            b_dra++;
        } else if (a[i] == 'J' && b[i] == 'J') {
            a_dra++;
            b_dra++;           
        } else if (a[i] == 'B' && b[i] == 'B') {
            a_dra++;
            b_dra++;
        }

    }

    if (a_b >= a_c && a_b >= a_j) {
        a_max = 'B';
    } else if (a_c > a_b && a_c >= a_j) {
        a_max = 'C';
    } else if (a_j > a_b && a_j > a_c) {
        a_max = 'J';
    }

    if (b_b >= b_c && b_b >= b_j) {
        b_max = 'B';
    } else if (b_c > b_b && b_c >= b_j) {
        b_max = 'C';
    } else if(b_j > b_b && b_j > b_c) {
        b_max = 'J';
    }

    cout << a_vic << ' ' << a_dra << ' ' << a_fai << endl;
    cout << b_vic << ' ' << b_dra << ' ' << b_fai << endl;
    cout << a_max << ' ' << b_max << endl;

    return 0;
}