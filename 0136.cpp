/*
 *  time complexity: O(n)
 *  space complexity: O(1)
 */

class Solution{
    public:
        int singleNumber(vector<int> &nums){
            int ans = 0;
            for(int n : nums)
                ans ^= num;
            
            return ans;
        }
};
