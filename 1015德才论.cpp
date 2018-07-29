#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

struct people {
    int num;
    int EQ;
    int IQ;
};

people eeii[100005];
people eei[100005];
people ei[100005];
people ie[100005];

bool cmp(people a, people b) {
    int sum_a = a.EQ + a.IQ;
    int sum_b = b.EQ + b.IQ;
    if (sum_a > sum_b) {
        return true;
    } else {
        return false;
    }
    if (sum_a == sum_b && a.EQ > b.EQ) {
        return true;
    } else {
        return false;
    } 
    if (sum_a == sum_b && a.EQ == b.EQ && a.num < b.num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, l, h;
    int _num, _EQ, _IQ;
    int sum_count, count1, count2, count3, count4;
    sum_count = count1 = count2 = count3 = count4 = 0;

    cin >> n >> l >> h;

    for (int i = 0; i < n; i++) {
        cin >> _num >> _EQ >> _IQ;
        if (_EQ >= h && _IQ >= h) {
            eeii[count1].EQ = _EQ;
            eeii[count1].IQ = _IQ;
            eeii[count1].num = _num;
            count1++;
        } else if (_EQ > h && _IQ < h && _IQ >= l) {
            eei[count2].EQ = _EQ;
            eei[count2].IQ = _IQ;
            eei[count2].num = _num;
            count2++;            
        } else if (_EQ >= l && _EQ < h && _IQ < h && _IQ >= l && _EQ > _IQ) {
            ei[count3].EQ = _EQ;
            ei[count3].IQ = _IQ;
            ei[count3].num = _num;
            count3++;            
        } else if (_EQ >= l && _IQ >= l && _EQ < _IQ) {
            ie[count4].EQ = _EQ;
            ie[count4].IQ = _IQ;
            ie[count4].num = _num;
            count4++;      
        }
    }

    sum_count = count1 + count2 + count3 + count4;
    cout << sum_count << endl;
    //cout << count1 << ' ' << count2 << ' ' << count3 << ' ' << count4 << endl;

    sort(eeii, eeii + count1, cmp);
    sort(eei, eei + count2, cmp);
    sort(ei, ei + count3, cmp);
    sort(ie, ie + count4, cmp);

    for (int i = 0; i < count1; i++) {
        cout << eeii[i].num << ' ' << eeii[i].EQ << ' ' << eeii[i].IQ << endl;
    }

    for (int i = 0; i < count2; i++) {
        cout << eei[i].num << ' ' << eei[i].EQ << ' ' << eei[i].IQ << endl;
    }

    for (int i = 0; i < count3; i++) {
        cout << ei[i].num << ' ' << ei[i].EQ << ' ' << ei[i].IQ << endl;
    }

    for (int i = 0; i < count4; i++) {
        cout << ie[i].num << ' ' << ie[i].EQ << ' ' << ie[i].IQ << endl;
    }

    return 0;
}