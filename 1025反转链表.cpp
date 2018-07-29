#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int c1, c2;
    int h, m, s;
    double count, flag;
    scanf("%d%d", &c1, &c2);

    count = (double)(c2 - c1) / 100;
    h = count / 3600;
    count = (double)(count - h * 3600);
    m = count / 60;
    s = count - m * 60 + 0.5;
    if (h >= 10) {
        printf("%d:", h);
    } else {
        printf("0%d:", h);
    }
    if (m >= 10) {
        printf("%d:", m);
    } else {
        printf("0%d:", m);
    }
    if (s >= 10) {
        printf("%d", s);
    } else {
        printf("0%d", s);
    }
    return 0;
}