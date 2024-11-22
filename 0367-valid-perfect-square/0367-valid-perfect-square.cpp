class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int s =1, e = num;
        while(s <= e){
            int m = s + (e - s) / 2;
            long long square = (long long)m * m;
            if(square == num) return true;
            else if(square < num) s = m + 1;
            else e = m - 1;
        }
        return false;
    }
};