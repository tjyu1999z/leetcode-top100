/*
 *  time complexity: O(log(n))
 *  space complexity: O(1)
 */

class Solution{
public:
    int searchInsert(vector<int> &nums, int target){
        int l = 0;
        int r = nums.size();
        
        while(l < r){
            int m = (l + r) / 2;
            if(nums[m] == target)
                return m;
            if(nums[m] > target)
                r = m;
            else
                l = m + 1;
        }
        
        return l;
    }
};
