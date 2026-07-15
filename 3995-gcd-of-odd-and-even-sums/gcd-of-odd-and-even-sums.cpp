class Solution {
public:
    int gcdOfOddEvenSums(int n) {
         // Sum of first n odd numbers  = n * n
        // Sum of first n even numbers = n * (n + 1) ,__gcd is inbuitlt function
        // return __gcd(n * n, n * (n + 1)); 
          // gcd(n*n, n*(n+1)) = n * gcd(n, n+1) = n * 1 = n
        return n;
    }
};