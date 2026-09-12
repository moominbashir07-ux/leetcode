// armstrong logic ye hai ki sum of all the numbers ka cube us number kai barabar ana chaehiye
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int original =n;
    int sum = 0;
    int lastdigit = 0;
    while(n>0){
        lastdigit=n%10;// Number ke last digit ko nikalte hain
        sum = sum+(lastdigit*lastdigit*lastdigit);//last digit ko multiply karaya 
        n = n/10;// Original number se last digit hata dete hain
    }
    if(sum == original){
        cout<<"its an armstrong";
    }
    else{
        cout<<"its not armstrong";
    }
    return 0;
}