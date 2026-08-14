class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        
        int n = arr.size();
        
  long long maxi = INT_MIN , prefix = 0;
  
  for(int i = 0; i<n; i++){
      prefix = prefix + arr[i];
      maxi = max(prefix, maxi);
      
      if(prefix<0){
          prefix = 0;
      }
      
  }
  return maxi;
        
    }
};