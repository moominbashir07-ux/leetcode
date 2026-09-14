#include <bits/stdc++.h>
using namespace std;
//unorderd mai order nahi ata unorderd mai answer ata hai
int main() {
    int n; cin>>n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //o(1)
        mpp[arr[i]]++;
    }
    
    // iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


    int q;cin>>q;
    while(q--){
        int number;cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }

    return 0;
}