#include <bits/stdc++.h>
using namespace std;
// isme ye hota hai ki min number dundte hai our usko apni sahi location pe late hai until sort na hojaye array
// get the minnimun and swap it
// t.c = O(n^2) and S.c is o(1)
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){ //i batata hai abhi kis position par smallest element rakhna hai.
        int mini = i; //Yahan hum assume karte hain ki abhi i wala element hi smallest hai.
        for(int j=i;j<=n-1;j++){//j ka kaam hai remaining unsorted elements ko check karna.
            if(arr[j]<arr[mini]){//Agar arr[j] current smallest se chhota hai, toh mini ko update kar do.
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
};
int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}