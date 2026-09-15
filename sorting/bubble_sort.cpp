#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){ //Is pass mein mujhe array ke kis index tak comparison karna hai?
        int didswap = 0;
        for(int j=0;j<=i-1;j++){//j actual mein array ke elements ko pair mein compare karta hai:
            if(arr[j]>arr[j+1]){ //j ka next element
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
        cout<<"runs\n";
    }
}
int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}