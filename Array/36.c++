 int  n1=a.size();
        int n2=b.size();
        int tl=n1+n2;
        if(n1>n2){

            return MedianOfArrays(b,a);

        }
        int l=0;
        int h=n1;
        while(l<=h){
            int aleft=(l+h)/2;
            int bleft=(tl+1)/2-aleft;
            int al=(aleft==0)?INT_MIN:a[aleft-1];
            int ar=(aleft==n1)?INT_MAX:a[left];
            int bl=(bleft==0)?INT_MIN:b[left-1];
            int br=(bleft==n2)?INT_MAX:b[left];
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