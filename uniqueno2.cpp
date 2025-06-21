vector<int> singleNum(vector<int>& arr) {
        // Code here.
       
        int xorval=0;
        for(auto i:arr)
        {
            xorval= i ^ xorval;
        }
        xorval  &= - xorval;
         vector<int>result(2,0);
        for(int num:arr)
        {
            if((num & xorval)==0)
            {
                result[0]^=num;
            }
            else{
                result[1]^=num;
            }
        }
        if(result[0]>result[1])
        {
            swap(result[0],result[1]);
        }
        return result;
    }
