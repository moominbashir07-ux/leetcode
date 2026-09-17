#include <bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int> arr) {

    for(int i = 1; i < n; i++) {

        if(arr[i] < arr[i-1]) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << isSorted(n, arr);

    return 0;
}