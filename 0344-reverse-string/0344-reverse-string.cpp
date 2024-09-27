class Solution {
private: 
    void reverse(vector<char>& s, int left, int right){
        if(left >= right)
            return;
        swap(s[left], s[right]);
        reverse(s, left + 1, right - 1);
    }
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0, right = n - 1;
        // while(left <= right){
        //     swap(s[left], s[right]);
        //     left++;
        //     right--;
        // }
        reverse(s, left, right);
    }
};