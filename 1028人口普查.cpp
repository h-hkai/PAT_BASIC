#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string>

using namespace std;

struct people {
    string name;
    int sum;
} p[100005];

bool cmp(people a, people b) {
    return a.sum > b.sum;
}

int main()
{
    int n;
    int count1 = 0, count2 = 0;
    int yy, mm, dd, _sum;
    char date[20];
    string _name;

    cin >> n;

    int flag1 = 2014 * 365 + 9 * 30 + 6;
    int flag2 = 1814 * 365 + 9 * 30 + 6;
    for (int i = 0; i < n; i++) {
        cin >> _name >> date;
        //int len = strlen(date);
        yy = (date[0] - 48) * 1000 + (date[1] - 48) * 100 + (date[2] - 48) * 10 + (date[3] - 48);
        mm = (date[5] - 48) * 10 + (date[6] - 48);
        dd = (date[8] - 48) * 10 + (date[9] - 48);
        _sum = yy * 365 + mm * 30 + dd;
        if (_sum <= flag1 && _sum >= flag2) {
            count1++;
            p[count2].name = _name;
            p[count2++].sum = _sum;
        }
    }
    sort(p, p+n, cmp);
    cout << count1 << ' ' << p[count1-1].name << ' ' << p[0].name;

    return 0;
}
