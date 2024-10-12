class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        
        vector<int> ls;
        
        for(int i = 0; i < n ;i++){
            if(cnt1 == 0 && nums[i] != ele2){
                cnt1 = 1;
                ele1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != ele1){
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == ele1) cnt1++;
            if(nums[i] == ele2) cnt2++;
            
        }
        int mini = (int)(n/3) + 1;
        if(cnt1 >= mini) ls.push_back(ele1);
        if(cnt2 >= mini) ls.push_back(ele2);
        
        sort(ls.begin(), ls.end());
        return ls;
    }
};