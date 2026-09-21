//TWO POINTER APPROACH
#include <bits/stdc++.h>
using namespace std;
vector<int> findarrayintersection(vector<int> &a,int n, vector<int> &b, int m)
{
    int i=0;int j=0;
    vector<int> ans;
    while(i<n && j<m){ /// Jab tak dono arrays mein elements hain
        if(a[i] <b[j]){ // Agar a[i] chhota hai
            i++;
        }
        else if(b[j]<a[i]){ // Agar b[j] chhota hai
            j++;
        }
        else{ // Matlab a[i] == b[j]
            ans.push_back(a[i]);  // Common element ko answer mein add karo
            i++;
            j++;
        }
    }
    return ans;
}
int main() {
    

    return 0;
}