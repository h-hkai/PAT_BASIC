#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
    int n;
    int t = 1;
    cin >> n;
    while(n--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if ((a  + b) > c) {
            cout << "Case #" << t << ": true" << endl;
        } else {
            cout << "Case #" << t << ": false" << endl;
        }
        t++;
    }

    return 0;
}