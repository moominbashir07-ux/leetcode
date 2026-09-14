#include <bits/stdc++.h>
using namespace std;

// in this method the time complexity is very high so that we use hashing

int f(int number, int arr[], int n) {

    int count = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] == number) {
            count = count + 1;
        }
    }

    return count;
}

int main() {

    int arr[] = {2,4,5,2,6,7,8};
    int n = 7;

    int number;
    cin >> number;

    cout << f(number, arr, n);

    return 0;
}

