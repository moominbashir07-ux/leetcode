// Write a C++ function to find the second largest element in an array.
#include <bits/stdc++.h>
using namespace std;
int secondlargest(vector<int> &arr, int n){
    int largest =arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            arr[i]=largest;
        }
        else if(arr[i]<largest&& arr[i]>slargest){
            slargest = arr[i];
            
        }
    }
    return slargest;

};
int main() {
    

    return 0;
}