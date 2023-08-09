class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, j = 0, result = 0;
        map<char, int> m;
        while (j < s.length())
        {
            m[s[j]]++;
            if (m[s[j]] == 2)
            {
                while (m[s[j]] == 2)
                {
                    m[s[i]]--;
                    i++;
                }
            }
            result = max(result, j - i + 1);
            j++;
        }
        return result;
    }
};