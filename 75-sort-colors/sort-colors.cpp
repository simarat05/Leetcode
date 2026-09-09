class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int>map;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            map[nums[i]]++;
        }
        
        int idx = 0;
        for (int i = 0; i < map[0]; i++) {
            nums[idx++] = 0;
        }
        
        for (int i = 0; i < map[1]; i++) {
            nums[idx++] = 1;
        }
        
        for (int i = 0; i < map[2]; i++) {
            nums[idx++] = 2;
        }
        
    }
};