class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        double revNum = 0;
        while(x>0){
            int ld = x%10;
            revNum = (revNum*10)+ld;
            x = x/10;
        }
        if(original == revNum){
            return true;
        }
        else{
            return false;
        }
    }
};