class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        double r=0;
        if(x<0)
        return false;
        while(x!=0)
            {
                r=r*10+x%10;
                x/=10;
            }
        if(r==temp)
            return true;
        return false;
        
    }
};