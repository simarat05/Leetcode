class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int tempsums=0;
        int maxsum=INT_MIN;

        while(j<n)
        {
            tempsums=tempsums+nums[j];
            if(tempsums < 0)
            {
                j++;
                i=j;
                maxsum=max(maxsum, tempsums);
                tempsums=0;
            }
            else{
                maxsum=max(maxsum, tempsums);
                j++;
            }
        }
        return maxsum;
    }
};