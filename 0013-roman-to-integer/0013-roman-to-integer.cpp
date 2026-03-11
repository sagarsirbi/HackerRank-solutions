# include <map>

class Solution {
public:
    int romanToInt(string s) {
        int intval=0;
        map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i=0; i<s.length(); i++) {
            for (auto j: roman) {
                if (s[i]==j.first) {
                    int temp=roman[s[i+1]];
                    if (temp>roman[s[i]]) {
                        intval=intval-j.second;
                    } else {
                        intval+=j.second;
                    }
                }
            }
        }
        return intval;
    }
};