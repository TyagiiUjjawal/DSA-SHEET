// smallest subarray ..sum greater than X
int smallestSubWithSum(int arr[], int n, int x)

{
    int k = 0;

    int ans = 0;

    int len = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ans += arr[i];

        if (ans > x)
        {
            while (ans > x)
            {

                len = min(len, i - k + 1);

                ans -= arr[k++];
            }
        }
    }

    return len;
}

