class Solution {
public:
string trim(const string& str) {
    // Find the first non-space character from the beginning
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        // If no non-space characters found, return an empty string
        return "";
    }

    // Find the last non-space character from the end
    size_t end = str.find_last_not_of(" \t\n\r\f\v");

    // Return the substring containing the trimmed characters
    return str.substr(start, end - start + 1);
}
    int lengthOfLastWord(string s) {
        string str=trim(s);
        int l=str.size();
        int c=0;
        for(int i=l-1;i>=0;i--){
            if(str[i]!=' '){
                c++;
            } else {
                break;
            }
        }
        return c;
    }
};
