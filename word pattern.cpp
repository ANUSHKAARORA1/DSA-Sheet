class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>mS;
        unordered_map<string, char>mT;
        int i=0, j=0;
        int m = pattern.length(), n = s.length();
        while(i<m && j<n)
        {
            string str;
            while(j<n && s[j]!=' ')
            {
                str.push_back(s[j]);
                j++;
            }
            if(mS.find(pattern[i])==mS.end() && i<m)
            {
                mS[pattern[i]] = str;
            }
            else if(mS.find(pattern[i])!=mS.end() && mS[pattern[i]]!=str)
            {
                return false;
            }
            if(mT.find(str)==mT.end())
            {
                mT[str] = pattern[i];
            }
            else if(mT.find(str)!=mT.end() && mT[str]!=pattern[i])
            {
                return false;
            }
            i++;
            j++;
        }
        if(i!=m)
        {
            return false;
        }
        if(j!=n+1)
        {
            return false;
        }
        return true;
    }
};
