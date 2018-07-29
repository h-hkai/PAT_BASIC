#include<iostream>
#include<stdio.h>

using namespace std;

struct node {
    int cow;
    int num;
} p[100];

void init () {
    for (int i = 0; i < 50; i++) {
        p[i].cow = 0;
        p[i].num = 0;
    }
}

int main() {
    int n;
    char c;
    int flag;
    int t = 0, count = 0;

    cin >> n >> c;

    //cout << n << c;

    init();

    for (int i = 1; i < 50; i += 2) {
        t = t + i;
        count++;
        p[count].cow = 2*count - 1;
        p[count].num =  t*2 - 1;

        //cout << p[i].num << endl;
    }
    for (int i = 0; i < 50; i++) {
        if (p[i].num > n) {
            flag = i - 1;
            //cout << flag;
            break;
        } 
    }
    int count2 = 0;   //记录前面空格的数量；
    int flag2 = p[flag].cow / 2;
    //cout << flag2;
    for (int i = 0; i < flag2; i++) {       
        for (int j = 0; j < count2; j++) {
            cout << ' ';
        }
        int flag3 = p[flag].cow - 2*count2;
        //cout << "flag3 = " << flag3;
        for (int j = 0; j < flag3; j++) {
            cout << c;
        }
        count2++;
        cout << endl;
    }
    for (int i = 0; i < count2; i++) {
        cout << ' ';
    }
    cout << c << endl;
    count2--;
    for (int i = 0; i < flag2; i++) {       
        for (int j = 0; j < count2; j++) {
            cout << ' ';
        }
        int flag3 = p[flag].cow - 2*count2;
        //cout << "flag3 = " << flag3;
        for (int j = 0; j < flag3; j++) {
            cout << c;
        }
        count2--;
        cout << endl;
    }

    int flag4 = n - p[flag].num;
    if (flag4 != 0)
        cout << flag4 << endl;

    return 0;
}