class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int n = arr.size();
        vector<int> ans(k);
        // Case 1
        if (arr[0] > x)
        {
            for (int i = 0; i < k; i++)
            {
                ans[i] = arr[i];
            }
            return ans;
        }
        // Case 2
        if (arr[n - 1] < x)
        {
            for (int i = 0; i < k; i++)
            {
                ans[i] = arr[n - k + i];
            }
            return ans;
        }

        int lo = 0;
        int hi = n - 1;
        bool flag = false;
        int t = 0; // representing current index of ans
        int mid = -1;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] == x)
            {
                flag = true;
                ans[t] = arr[mid];
                t++;
                break;
            }
            else if (arr[mid] < x)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        int lb = hi;
        int ub = lo;

        if (flag == true)
        {
            lb = mid - 1;
            ub = mid + 1;
        }

        while (t < k && lb >= 0 && ub <= n - 1)
        {
            if (abs(x - arr[lb]) <= abs(x - arr[ub]))
            {
                ans[t] = arr[lb];
                lb--;
            }
            else
            {
                ans[t] = arr[ub];
                ub++;
            }
            t++;
        }
        if (lb < 0)
        {
            while (t < k)
            {
                ans[t] = arr[ub];
                ub++;
                t++;
            }
        }
        if (ub > n - 1)
        {
            while (t < k)
            {
                ans[t] = arr[lb];
                lb--;
                t++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};