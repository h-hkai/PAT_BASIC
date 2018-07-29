#include<iostream>

using namespace std;

int main() {
    int a[10] = {0};
    int num, flag;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        a[i] = num;
    }

    for (int i = 1; i < 10; i++) {
        if (a[i] != 0) {
            flag = i;
            break;
        }
    }
    
    if(a[0] == 0) {
        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < a[i]; j++) {
                cout << i;
            }
        }
    } else {
        cout << flag;
        a[flag]--;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < a[i]; j++) {
                cout << i;
            }
        }
    }

    cout << endl;

    return 0;
}