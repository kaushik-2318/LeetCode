class Solution {
public:
int maximumGain(string s, int x, int y)
{
    int sum = 0, i = 0, j = 1;
    if (x >= y)
    {
        i = 0;
        j = 1;
        while (i < s.length() && j < s.length())
        {
            if (s[i] == 'a' && s[j] == 'b')
            {
                s.erase(i, 2);
                sum += x;
                i = max(0, i - 1);
                j = i + 1;
            }
            else
            {
                i++;
                j++;
            }
        }
        i = 0;
        j = 1;
        while (i < s.length() && j < s.length())
        {
            if (s[i] == 'b' && s[j] == 'a')
            {
                s.erase(i, 2);
                sum = sum + y;
                i = max(0, i - 1);
                j = i + 1;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    else if (x < y)
    {
        i = 0;
        j = 1;
        while (i < s.length() && j < s.length())
        {
            if (s[i] == 'b' && s[j] == 'a')
            {
                s.erase(i, 2);
                sum += y;
                i = max(0, i - 1);
                j = i + 1;
            }
            else
            {
                i++;
                j++;
            }
        }
        i = 0;
        j = 1;
        while (i < s.length() && j < s.length())
        {
            if (s[i] == 'a' && s[j] == 'b')
            {
                s.erase(i, 2);
                sum += x;
                i = max(0, i - 1);
                j = i + 1;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    return sum;
}
};