class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s = nums.size();

        int count=0;
        int maxcount=0;
        for(int i=0; i<s; i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxcount=max(maxcount, count);
            }
            else count=0;
        }
        return maxcount;
    }
};