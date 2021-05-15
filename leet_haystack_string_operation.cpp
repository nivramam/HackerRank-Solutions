class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        else if(needle.length() > haystack.length())
            return -1;
        int pos = haystack.find(needle);
        return pos;
    }
};
