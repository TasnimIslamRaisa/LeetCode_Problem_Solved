class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackLen = haystack.size();
        int needleLen = needle.size();

        // If needle is an empty string, return 0 as per problem statement
        if (needleLen == 0) {
            return 0;
        }

        // If needle is longer than haystack, it can't be found
        if (needleLen > haystackLen) {
            return -1;
        }

        // Slide the needle over the haystack
        for (int i = 0; i <= haystackLen - needleLen; ++i) {
            // Check if the substring of haystack matches needle
            if (haystack.substr(i, needleLen) == needle) {
                return i;
            }
        }

        // If no match is found, return -1
        return -1;
    }
};

