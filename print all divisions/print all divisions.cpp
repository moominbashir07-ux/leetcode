//print all deviations
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// void printdivisors(int n){
//     for(int i =1;i<=n;i++){
//         if(n%i == 0){
//             cout<<i<<" ";
//         }}
//     }
    
// int main() {
//     int n;cin>>n;
// printdivisors(n);
//     return 0;}


//OR WE CAN USE THIS METIOD TO DECREASE TIME COMPLEXITY
// TIME COMPLEXITY IS O(sqrt(n))    
#include <bits/stdc++.h>
    using namespace std;
    void printdiv(int n){
        vector<int> ls;
        for(int i=1;i*i<=sqrt(n);i++){
            if(n%i==0){
                ls.push_back(i);
                
                if((n/i)!= i){
                    ls.push_back(n/i);
                }
            }
        }
        //O(n log n): n is the number of factor
        sort(ls.begin(),ls.end());
        for (auto it:ls) cout<<it<<" ";
    }
    int main() {
        int n;cin>>n;
        printdiv(n);
        return 0;
    }
//     Take a number n.

// Run a loop from i = 1 to sqrt(n).

// If n % i == 0:
//     i is a divisor.
//     Store i in the vector.
//     Store n/i also because divisors come in pairs.

// If i == n/i, don't store it twice.

// After the loop, sort the vector.

// Print all the divisors.