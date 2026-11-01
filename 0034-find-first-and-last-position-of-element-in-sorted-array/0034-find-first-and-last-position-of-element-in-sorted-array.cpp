class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int low = 0, high = nums.size()-1;

        while(low <= high) {
            int mid = low + (high-low)/2;

            if(nums[mid] >= target) {
                if(nums[mid] == target) first = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        low = 0;
        high = nums.size()-1;

        while(low <= high) {
            int mid = low + (high-low)/2;

            if(nums[mid] <= target) {
                if(nums[mid] == target) last = mid;
                low = mid+1;
            }
            else high = mid-1;
        }

        return {first, last};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna