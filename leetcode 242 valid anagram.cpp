leetcode 242 valid anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
      
       if(s.length()!=t.length()) return false;
       int count[26];
       for(int i=0;i<s.length();i++){
       count[s[i]-'a']++;
       }
       for(int i=0;i<t.length();i++){
          int x=--count[t[i]-'a'];
          if(x<0) return false;
       }
       return true;
    }
};
