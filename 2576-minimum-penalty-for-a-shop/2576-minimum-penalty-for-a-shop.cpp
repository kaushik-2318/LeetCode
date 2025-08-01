class Solution {
public:
int bestClosingTime(string customers)
{
    int n = customers.length();
    vector<int> pre(n + 1);
    vector<int> suff(n + 1);

    pre[0] = 0;

    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + ((customers[i] == 'N') ? 1 : 0);

    suff[n] = 0;

    for (int i = n - 1; i >= 0; i--)
        suff[i] = suff[i + 1] + ((customers[i] == 'Y') ? 1 : 0);

    int minPen = n;

    for (int i = 0; i <= n; i++)
    {
        pre[i] = pre[i] + suff[i];
        int pen = pre[i];
        minPen = min(minPen, pen);
    }

    for (int i = 0; i <= n; i++)
    {
        int pen = pre[i];
        if (pen == minPen)
            return i;
    }

    return n;
}
};