    //Function to return length of longest subsequence of consecutive integers.
Class Solution{
 public:
    
    
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here4
       sort(arr,arr+n);

      int res=1;

      int count=1;

      for(int i=1;i<n;i++)
      {

          if((arr[i-1]+1)==arr[i])
          {
              res++;

              count=max(res,count);

          }
          else if(arr[i-1]==arr[i])
          continue;
          else
          res=1;
      }
      return count;
    }
};