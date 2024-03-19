class Solution {
public:
    int searchInsert(vector<int>& nums, int m) {
        int left = 0;
	int right = nums.size() - 1;
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(nums[mid] == m)
			return  mid;
		else if(nums[mid] < m)
			left = mid + 1;
		else
			right = mid - 1; 
	}
	return left;
    }
};