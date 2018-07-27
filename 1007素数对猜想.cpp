#include<iostream>

using namespace std;

int a[500005];
int p[10000];
int t = 0;

void is_prime(int x) {
    a[1] = 0;

    for (int i = 2; i <= x; i++) {
        a[i] = 1;
    }
    for (int i = 2; i <= x; i++) {
        if(a[i]) {
            p[t++] = i;
            for (int j = i+i; j <= x; j += i) {
                a[j] = 0;
            }
        }
    }
}

int main() {

    int n;
    int count = 0;
    cin >> n;
    is_prime(n);
    for (int i = t-1; i > 0; i--) {
        if(p[i] - p[i-1] == 2)
            count++;
    }

    cout << count << endl;

    return 0;
}