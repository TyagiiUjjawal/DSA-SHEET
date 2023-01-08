class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int  n1=array1.size();
        int n2=array2.size();
        int tl=n1+n2;
        if(n1>n2){

            return MedianOfArrays(array2,array1);

        }
        int l=0;
        int h=n1;
        while(l<=h){
            int aleft=(l+h)/2;
            int bleft=(tl+1)/2-aleft;
            int ar=(aleft==n1)?INT_MAX:array1[aleft];
            int al=(aleft==0)?INT_MIN:array1[aleft-1];
            int bl=(bleft==0)?INT_MIN:array2[bleft-1];
            int br=(bleft==n2)?INT_MAX:array2[bleft];
            if(al<=br && bl<=ar){
                if(tl%2==0){
                    return (max(al,bl)+min(ar,br))/2.0;
                }
                return (double)max(al,bl);
                
            }
            else if(al>br){
                h=aleft-1;
            }else{
                l=aleft+1;
            }
        }
        return 0.0;
    
    }
};