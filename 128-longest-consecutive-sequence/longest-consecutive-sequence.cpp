class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int count = 1;
        int maxcount = 1;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-1; i++)
        {
            if(nums[i+1] == nums[i] + 1)
            {
                count++;
                maxcount = max(count, maxcount);
            }
            else if(nums[i+1] == nums[i])
            {
                count = count;
            }
            else if(nums[i+1] != nums[i] + 1)
            {
                count = 1;
            }
        }
        return maxcount;
    }
};