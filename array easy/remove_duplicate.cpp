#include <bits/stdc++.h>
using namespace std;
int removedupe(vector<int> &arr){
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
        }
    }
    return i+1;
}
int main() {

    return 0;
}