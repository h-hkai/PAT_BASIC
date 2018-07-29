#include<iostream>

using namespace std;

int main() {
    long long a, b, c, d;
    long long ant[100], count = 0;
    cin >> a >> b >> d;
    c = a + b;
    while(c) {
        long long flag = c % d;
        ant[count++] = flag;
        c = c / d;
    }
    for (int i = count-1; i >= 0; i--) {
        cout << ant[i];
    }
    return 0;
}