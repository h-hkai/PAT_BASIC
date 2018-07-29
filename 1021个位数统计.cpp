#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int ant[10] = {0};
    char a[1005];
    cin >> a;
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        int num = a[i] - 48;
        ant[num]++;
    }

    for (int i = 0; i < 10; i++) {
        if (ant[i] != 0) {
            cout << i << ':' << ant[i] << endl; 
        }
    }

    return 0;
}