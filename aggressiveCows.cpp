int aggressiveCows(vector<int> &stalls, int k)

{

    int n=stalls.size();

    sort(stalls.begin(),stalls.end());

    int i=1,j=stalls[n-1];

    int ans=0;

    while(i<=j){

        int mid=(i+j)/2;

        int cow=1;

        int p=1,prev=stalls[0];

        while(p<n){

                   if(stalls[p]-prev>=mid){

                       cow++;

                       prev=stalls[p];

                   }  

            p++;

        }

        if(cow>=k){

            i=mid+1;

            ans=max(ans,mid);

        }

        else{ 

            j=mid-1;

        }

        

 

    }

    return ans;

}