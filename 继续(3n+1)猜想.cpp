#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n, m;
int arr[105];
int flag[1000];

bool cmp(int a, int b) {
    return a > b;
}

queue<int> q;

void solve(int x) {
    while(x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
            flag[x]++;
        } else {
            x = ((x * 3) + 1) / 2;
            flag[x]++;
        }
    }
}

int main() {

    memset(flag, 0, sizeof(flag));    //注意一下memset函数的用法
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        solve(arr[i]);
    }
    sort(arr, arr+n);

    for (int i = n-1; i >= 0; i--) {
        //cout << "flag[" << arr[i] << "] = " << flag[arr[i]] << endl;
        if (flag[arr[i]] == 0) {
            q.push(arr[i]);
        }
    }

    if (q.size() > 1) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << q.front();
    q.pop();


    return 0;
}

