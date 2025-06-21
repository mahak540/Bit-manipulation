int missingNum(vector<int>& arr) {
        // code here
        int sum=0;
        int n=arr.size()+1;
        for(int i=0;i<n-1;i++)
        {
            sum+=arr[i];
            
        }
        long long s=(n*1LL*(n+1))/2;
        return s-sum;
    }
