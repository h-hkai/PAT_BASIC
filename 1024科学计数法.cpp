#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char s[50000];
    int count1 = 0, count2 = 0, count3 = 0, ant = 0;
    char sign1, sign2, index[50000], a[50000];
    cin >> s;
    int len = strlen(s);

    sign1 = s[0];
    for (int i = 1; i < len; i++) {
        if (s[i] != 'E') {
            a[count1++] = s[i];
        } else {
            break;
        }
    }
    sign2 = s[count1+2];
    for (int i = count1+3; i < len; i++) {
        index[count2++] = s[i];
    }
    for (int i = 0; i < count2; i++) {
        ant = ant * 10 + index[i] - 48;
    }

    if (sign1 == '-') {
        cout << '-';
    }

    if (ant == 0) {
        for (int i = 0; i < count1; i++) {
            cout << a[i];
        }
        return 0;
    }

    if (sign2 == '-') {
        cout << "0.";
        for (int i = 1; i < ant; i++) {
            cout << '0';
        }
        for (int i = 0; i < count1; i++) {
            if (a[i] != '.')
                cout << a[i];
        }
    } else {
        if (ant > count1-2) {
            for (int i = 0; i < count1; i++) {
                if (a[i] != '.')
                    cout << a[i];
            }
            for (int i = 1; i < ant; i++) {
                cout << '0';
            }
        } else {
            for (int i = 0; i < count1; i++) {
                if (a[i] == '.') {
                    break;
                }
                cout << a[i];
                count3++;
            }
            count3++;
            for (int i = 0; i < ant; i++) {
                cout << a[count3++];
            }
            cout << '.';
            for (int i = count3; i < count1; i++) {
                cout << a[i];
            }
        }

    }

    return 0;
}
