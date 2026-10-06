class Solution {
private:
    
    void reverseHelper(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
        
        reverseHelper(nums, 0, n - 1);
        
        reverseHelper(nums, 0, k - 1);
    
        reverseHelper(nums, k, n - 1);
    }
};