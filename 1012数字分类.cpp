#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
    bool flag = true;
    int arr[1005], index, count = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum5 = 0;
    float  sum4 = 0;

    scanf("%d", &index);
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < index; i++) {
        // A1
        if (arr[i] % 5 == 0 && arr[i] % 2 == 0) {
            sum1 += arr[i];  
        }
        //A2
        else if (arr[i] % 5 == 1) { 
            if(flag) {
                sum2 += arr[i];
                flag = false;
            } else {
                sum2 -= arr[i];
                flag = true;
            }
        }
        //A3
        else if (arr[i] % 5 == 2) {
            sum3++;
        }
        //A4
        else if (arr[i] % 5 == 3) {
            sum4 += arr[i];
            count++;
        }
        //A5
        else if (arr[i] % 5 == 4) {
            sum5 = max(sum5, arr[i]);
        }
    }

    if (sum1 == 0) {
        printf("N ");
    } else {
        printf("%d ", sum1);
    }

    if (sum2 == 0) {
        printf("N ");
    } else {
        printf("%d ", sum2);
    }

    if (sum3 == 0) {
        printf("N ");
    } else {
        printf("%d ", sum3);
    }

    if (sum4 == 0) {
        printf("N ");
    } else {
        printf("%.1f ", (double)sum4 / count);
    }

    if (sum5 == 0) {
        printf("N");
    } else {
        printf("%d", sum5);
    }






    return 0;
}