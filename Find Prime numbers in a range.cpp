class Solution {
  public:
  
  int isprime(int n)
  {
      int flag=0;
      
      if(n<=1)
      {
          return 0;
      }
      else if(n>=2)
      {
          for(int i=2;i*i<=n;i++)
          {
              if(n%i==0)
              {
                  return 0;
                  flag=1;
              }
          }
          if(flag==0)
          {
              return 1;
          }
      }
  }
  
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> v;
        
        //traverse from M to N 
        //check if a number is prime
        
        for(int i=M;i<=N;i++)
        {
            int n=isprime(i);
            if(n==1)
            {
               v.push_back(i); 
            }
        }
        
        
        return v;
    }
};
