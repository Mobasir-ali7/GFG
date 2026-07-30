class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        int largest = arr[0];
        
        // largest element
        for(int i = 0 ; i<n; i++){
            
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        
        
        //second largest element
        
        int second = -1;
        
        for(int i =0; i<n; i++){
            
            if(arr[i]!=largest && arr[i]>second){
                second = arr[i];
            }
        }
        
        return second;
    }
};