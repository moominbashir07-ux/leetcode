#include <bits/stdc++.h>
using namespace std;
int secondsmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;//Because we want any normal number to be smaller than it.
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
        ssmallest = smallest;
        smallest=arr[i]; 
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
           ssmallest=arr[i];
        }
    }
    return ssmallest;
}
int main() {
    

    return 0;
}