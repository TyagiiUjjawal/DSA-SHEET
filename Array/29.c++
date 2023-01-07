//trapping rain water
static long trappingWater(int arr[], int n) { 
        // Your code here
        int start=arr[0],temp=0, max=1;
        long water =0;
        
        for(int i=1;i<n-1;i++){
            if(start==0 || start<arr[i]){
                start=arr[i];
                continue;
            }
            
            if(max<=i){
                max=i;
                for(int j=i;j<n;j++){
                    if(arr[max]<arr[j])
                       max=j;
                }
            }
            
            if(arr[max]>start){
                water+=(start-arr[i]);
            }else{
                water+=(arr[max]-arr[i]);
            }
        }
        return water;
    } 