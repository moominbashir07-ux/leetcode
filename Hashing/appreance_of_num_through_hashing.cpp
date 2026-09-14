#include <bits/stdc++.h>
// Query    Question                    Answer
//   1      1 kitni baar hai?             2
//   2      2 kitni baar hai?             1
//   4      4 kitni baar hai?             0
//   0      0 kitni baar hai?             0
//   2      2 kitni baar hai?             1
using namespace std;
 
int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};

    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    // fetch
    int q;
    cin >> q;

    while(q--){
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}