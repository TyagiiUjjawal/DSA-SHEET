 //Minimum swaps and K together
 int minSwap(int arr[], int n, int k) {
        // Complet the function
        int cnt=0;
        for(int i =0; i<n; i++) {
            if(arr[i] <= k) ++cnt;
        }
        
        int i=0, bad=0;

        while(i<cnt){
            if(arr[i]>k)++bad;
            i++;
        }

        int ans = bad,j=cnt;
        i=0;
        while(j<n){
            if(arr[i++]>k)--bad;
            if(arr[j++] > k) ++bad;

            ans = min(ans,bad);
        }

        return ans;
    }