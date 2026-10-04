class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min = arr[0];
        int max = arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min)
            min=arr[i];
            else if(arr[i]>max)
            max=arr[i];
        }
        return {min, max};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna