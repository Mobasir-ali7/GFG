class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long n = arr.size()+1;
        long totalsum = n*(n+1)/2;
        long  arraysum = 0; 
        
        for(int i = 0; i<arr.size(); i++){
            arraysum += arr[i];
        }
        return totalsum- arraysum;
    }
};