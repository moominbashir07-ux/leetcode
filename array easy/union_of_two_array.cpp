//brute force approach
#include <bits/stdc++.h>
using namespace std;
vector<int> sortedarray(vector<int> a, vector<int> b){
    int n1=a.size();
    int n2=b.size();
    set<int> st;//This creates an empty set of integers.
    for(int i=0;i<n1;i++){
        st.insert(a[i]);//a[i] accesses the current element of a.
    }    
    for(int i=0;i<n2;i++){
        st.insert(b[i]);//Each element of b gets inserted into the set.
    }
    vector<int> temp;//Creates an empty vector called temp.
    for(auto it: st){//Go through every element present in st.
        temp.push_back(it);//push_back() adds an element to the end of a vector.
    }
    return temp;
}

int main() {
    

    return 0;
}
//optimal Approach(two pointer)
#include <bits/stdc++.h>              // C++ ki commonly used libraries include karta hai
using namespace std;                   // std:: baar-baar likhne ki zarurat nahi

vector<int> sortedarray1(vector<int> a, vector<int> b) {  // 2 sorted arrays leta hai, union return karta hai

    int n1 = a.size();                 // Array a ka size
    int n2 = b.size();                 // Array b ka size

    int i = 0;                         // i → array a ka pointer
    int j = 0;                         // j → array b ka pointer

    vector<int> uniarr;                // Final union store karega

    while (i < n1 && j < n2) {         // Jab tak dono arrays mein elements hain

        if (a[i] <= b[j]) {            // Agar a ka current element chhota/equal hai

            if (uniarr.size() == 0 ||  // Agar result empty hai
                uniarr.back() != a[i]) // OR current element duplicate nahi hai
            {
                uniarr.push_back(a[i]); // a[i] ko result mein add karo
            }

            i++;                       // a ka pointer next element par

        }
        else {                         // Agar b[j] chhota hai

            if (uniarr.size() == 0 ||  // Agar result empty hai
                uniarr.back() != b[j]) // OR b[j] duplicate nahi hai
            {
                uniarr.push_back(b[j]); // b[j] ko result mein add karo
            }

            j++;                       // b ka pointer next element par
        }
    }

    while (j < n2) {                   // Agar b mein kuch elements bach gaye

        if (uniarr.size() == 0 ||      // Agar result empty hai
            uniarr.back() != b[j])     // OR duplicate nahi hai
        {
            uniarr.push_back(b[j]);    // b ka remaining element add karo
        }

        j++;                           // b ka pointer aage badhao
    }

    while (i < n1) {                   // Agar a mein kuch elements bach gaye

        if (uniarr.size() == 0 ||      // Agar result empty hai
            uniarr.back() != a[i])     // OR duplicate nahi hai
        {
            uniarr.push_back(a[i]);    // a ka remaining element add karo
        }

        i++;                           // a ka pointer aage badhao
    }

    return uniarr;                     // Final union return karo
}