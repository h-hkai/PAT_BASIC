#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

struct people {
    char name[15];
    char num[15];
    int score;
} p[5000];

bool cmp(people a, people b) {
    return a.score > b.score;
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].num >> p[i].score;
    }

    sort(p, p+n, cmp);

    cout << p[0].name << " " << p[0].num << endl;
    cout << p[n-1].name << " " << p[n-1].num << endl;

    return 0;
}
