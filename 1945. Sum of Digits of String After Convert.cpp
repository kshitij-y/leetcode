class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    
    int getLucky(string s, int k) {
        int sum = 0;
        
        for (auto c : s) {
            int val = c - 'a' + 1;
            
            sum += digitSum(val);
        }
        
        while (--k) {
            sum = digitSum(sum);
        }

        return sum;
    }
};
