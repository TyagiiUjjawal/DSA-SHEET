//triplet sum 
bool find3Numbers(int A[], int n, int X)

    {
        int start, end, sum;
        sort(A, A+n);
        for(int i = 0; i < n; i++)
        {
            start = i+1;
            end = n-1;
            while(start < end)
            {
                sum = A[i] + A[start] + A[end];
               
                if(sum == X)    return true;
                else if(sum < X)    start++;
                else end--;

            }
        }
        return false;
    }