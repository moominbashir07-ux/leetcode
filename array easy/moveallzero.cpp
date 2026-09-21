#include <bits/stdc++.h>
using namespace std;
void movezeros(vector<int> & arr){
    int i = 0;
    for(int j=1;j<arr.size();j++){
        if(arr[j]!=0){
            arr[i]= arr[j];
            i++;
        }
        
    }
    while(i<arr.size()){
        arr[i]=0;
        i++;
    }
}

int main() {
    

    return 0;
}