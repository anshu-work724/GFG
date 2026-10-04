class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int slargest = -1;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>largest){
                slargest = largest;
                largest = arr[i];
            }
            else if(arr[i]>slargest and arr[i]<largest){
                slargest = arr[i];
            }
            
        }
        
        return slargest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna