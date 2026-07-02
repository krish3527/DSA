class Solution {
public:
    bool isPalindrome(int x) {
        long  rev =0;
        int original =x;
      while(x>0){
          int digit =x%10;
          x=x/10;
          rev = rev*10+digit;
         }
    if(original == rev){
         return true;
    }
    else{
     return false; 
    }

}       
    
};