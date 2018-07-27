#include<iostream>

using namespace std;

int main() {
    int arr[105];
    int n, m;
    int index;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m%n; i++) { //the times of move right;
        index = arr[n-1];
        for (int j = n-2; j >= 0; j--) {
            arr[j+1] = arr[j];
        }
        arr[0] = index;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n-1) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}