#include<iostream>
#include<stdio.h>
#include<string.h>
#include<map>

using namespace std;

void change(char *a, int x) {
    for (int i = 0; i < x; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] + 'A' - 'a';
        }
    }
}

map<char, int>M;

int main() {
    int count;
    int a[100] = {0};
    char s1[100], s2[100];
    
    cin >> s1 >> s2;

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    change(s1, len1);
    change(s2, len2);
    for (int i = 0; i < len2; i++) {
        M[s2[i]] = 1;
    }
    for (int i = 0; i < len1; i++) {
        if (M[s1[i]] != 1) {
            M[s1[i]] = 1;
            cout << s1[i];
        }
    }

    return 0;
}
