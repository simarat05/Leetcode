class Solution {
private:
    void cresubsets(vector<vector<int>>& result, vector<int> current, int index, vector<int>& nums){
        result.push_back(current);

        for(int i=index; i<nums.size(); i++)
        {
            current.push_back(nums[i]);
            cresubsets(result, current, i + 1, nums);
            current.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        cresubsets(result, current, 0, nums);
        return result;
    }
};