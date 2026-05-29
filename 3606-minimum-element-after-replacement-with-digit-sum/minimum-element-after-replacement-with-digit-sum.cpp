class Solution {
public:
   
         int digitSum(int n) {
        int sum = 0;

        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minElement(vector<int>& nums) {
        int result = 37; // 1 <= nums[i] <= 10^4 and biggest sum can be obtained by 9999 (whose digit sum = 36)

        for(int num : nums) {
            int s = digitSum(num); 

            result = min(result, s);
        }

        return result;
    }
};