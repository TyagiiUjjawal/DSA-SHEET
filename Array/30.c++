//Chocolate Distribution
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
   sort(a.begin(),a.end());

    int ans=INT_MAX;

    for(int i=0;i<n-m+1;i++){

        if(ans>(a[i+m-1]-a[i])){

            ans=(a[i+m-1]-a[i]);

        }

    }

    return ans;
    }  