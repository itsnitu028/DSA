class Solution {
public:
    bool isPalindrome(int x) {
      long int reverse = 0;
      int n=x;
        if(n<0)
            return false;
    // Copy of the original number so that the original
    // number remains unchanged while finding the reverse
   long int temp = n;
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    // If reverse is equal to the original number, the
    // number is palindrome
    return (reverse == n);  
    }
};