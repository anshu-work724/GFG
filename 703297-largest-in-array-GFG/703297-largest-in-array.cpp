class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int larg = arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>larg){
                larg = arr[i];
            }
        }
        return larg;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna