//palandrome;
class Solution {
public:
    bool isPalindrome(int x) {
        int original = 0;
        double revNum = 0;
        while(x>0){
            int ld = x%10; // Number ke last digit ko nikalte hain
            revNum = (revNum*10)+ld; // Last digit ko reverse number mein add karte hain
            x = x/10;// Original number se last digit hata dete hain
        }
        if(original == revNum){
            return true;
        }
        else{
            return false;
        }

    }
};