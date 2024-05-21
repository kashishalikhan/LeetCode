class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int len1 = haystack.length();
        int len2 = needle.length();
        int count = 0;
        int store;
        while(i<len1){
            cout<<"i = "<<i<<endl;
            char ch1 = haystack[i];
            char ch2 = needle[j];
            
            if(ch1 == ch2){
                i++;
                j++;
                count++;
                if(count == 1){
                    store = i;
                    cout<<"in";
                }
                if(count == len2){
                    return i-len2;
                }
            }
            else if(count>0){
                i = store;
                count = 0;
                cout<<"in";
                j=0;
            }
            else{
                cout<<"inelse";
                i++;
                j=0;
                count=0;
            }
        }
        return -1;
    }
};