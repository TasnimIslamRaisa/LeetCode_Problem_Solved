class Solution {
public:
    int romanToInt(string s) {
        map<char,int>map;
        map.insert({'I',1});
        map.insert({'V',5});
        map.insert({'X',10});
        map.insert({'L',50});
        map.insert({'C',100});
        map.insert({'D',500});
        map.insert({'M',1000});
        int result=0;
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1 || map[s[i]]>=map[s[i+1]]){
                result+=map[s[i]];
            } else {
            result-=map[s[i]];
            }
        }
        return result;
    }
};
