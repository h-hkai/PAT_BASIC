#include<iostream>
#include<string>

using namespace std;

int main() {
    long long num_a, num_b;
    long long sum_a = 0, sum_b = 0;
    int a, b;
    cin >> num_a >> a >> num_b >> b;
    while(num_a != 0) {
        int flag = num_a % 10;
        if (flag == a) {
            sum_a = sum_a * 10 + a;
        }
        num_a /= 10;
    }

    while(num_b != 0) {
        int flag = num_b % 10;
        if (flag == b) {
            sum_b = sum_b * 10 + b;
        }
        num_b /= 10;
    }

    cout << sum_a + sum_b << endl;
    
    return 0;
}