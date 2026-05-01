class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();

        int sum = 0; 
        for(int x : nums){
            sum+=x;
        }
        int f = 0;
        for(int i =0;i<n;i++){
            f += i  * nums[i];
        }

        int maximum = f;
        for(int k = 1;k<n;k++){
            f = f + sum - n * nums[n - k];
            maximum = max(maximum,f);
        }
        return maximum;
        
        
    }
};