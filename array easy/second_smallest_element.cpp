#include <bits/stdc++.h>
using namespace std;
int secondsmallest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]!= smallest && a[i]<ssmallest){
            ssmallest = a[i];
        }
    }
}

int main() {
    

    return 0;
}