class Solution {
public:
    int getPivot(vector<int>& nums){
        int start = 0;
        int end = nums.size();
        int mid = start + (end - start) / 2;
        while(start < end){
            if (nums[mid] > nums[nums.size() - 1]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }
    int binarySearch(vector<int>& nums, int s, int e, int k){
        int start = s;
        int end = e;
        int mid = start + (end - start) / 2;
        while(start <= end){
            if(nums[mid] == k){
                return mid;
            }
            if(nums[mid] < k){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
     }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int p = getPivot(nums);
        if(target >= nums[p] && target <= nums[n - 1]){
            return binarySearch(nums, p, n -1, target);
        }
        else{
            return binarySearch(nums, 0, p -1, target);
        }
    }
};