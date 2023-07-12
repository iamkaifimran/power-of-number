
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code hereint 
       long long half=1;
       int mod=1e9+7;
       if(R==0)return 1;

       else if(R==1) return N%mod;
       else
        half=power(N,R/2);
       half=(half*half)%mod;
       if(R%2!=0)
       {
           half=(half*N)%mod;
           
       }
       return half;
       
       
        
    }

};