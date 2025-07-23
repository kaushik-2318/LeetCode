class Solution {
public:
int maxSatisfaction(vector<int> &satisfaction)
{
    sort(satisfaction.begin(), satisfaction.end());

    vector<int> suff(satisfaction.size());

    int n = satisfaction.size();

    suff[n - 1] = satisfaction[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = satisfaction[i] + suff[i + 1];
    }

    int idx = -1;

    for (int i = 0; i < suff.size(); i++)
    {
        if (suff[i] >= 0)
        {
            idx = i;
            break;
        }
    }

    int ans = 0;
    int i = idx;
    int j = 1;
    while (i < satisfaction.size())
    {
        ans = ans + (satisfaction[i] * j);

        j++;
        i++;
    }
    return ans;
}
};