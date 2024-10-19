class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0; 
        int j = nums.size() - 1;
        while(i <= j){
            int mid = i + (j - i)/2;
            if(nums[mid] == target){
                return solve(nums, mid, target);
            }
            else if(nums[mid] < target){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        return {-1, -1}; 
    }
    vector<int> solve(vector<int>& nums, int mid, int target){
        int low = mid, high = mid;
        while(low >= 0 && nums[low] == target)
            low--;
        
        while(high < nums.size() && nums[high] == target)
            high++;
        return {low+1, high-1};
    }
};