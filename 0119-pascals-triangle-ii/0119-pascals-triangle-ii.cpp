class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int> ansrow;
        ansrow.push_back(ans);
        for(int i=0;i<rowIndex;i++){
            ans=ans*(rowIndex-i);
            ans=ans/(i+1);
            ansrow.push_back(ans);
        }        
        return ansrow;
    }
};