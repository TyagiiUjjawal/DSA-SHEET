// Function to find maximum product subarray
class Solution{
public:

	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long int maxi=INT_MIN;
	      long long int p=1;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	        p=p*arr[i];
	           maxi=max(maxi,p);
	        }else{
	           
	            maxi=max(0ll,maxi);
	            p=1;
	        }
	    }
	    p=1;
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]!=0){
	        p=p*arr[i];
	           maxi=max(maxi,p);
	        }else{
	           
	            maxi=max(0ll,maxi);
	            p=1;
	        }
	    }
	    return maxi;
	}
};