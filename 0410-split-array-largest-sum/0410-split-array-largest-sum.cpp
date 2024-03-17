class Solution {
private:
    bool isPossible(vector<int> &nums, int k, int mid){
        int subArrayCount = 1;
        int subSum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(subSum + nums[i] <= mid){
                subSum += nums[i];
            }
            else{
                subArrayCount++;
                if(subArrayCount > k || nums[i] > mid){
                    return false;
                }
                subSum = nums[i];
            }
        }
        return true;
}
public:
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        int e = sum;
        int mid = s +( e - s) / 2;
        int ans = -1;
        while(s <= e){
            if( isPossible(nums, k, mid) ){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + ( e - s) / 2;
        }
        return ans;
    }
};