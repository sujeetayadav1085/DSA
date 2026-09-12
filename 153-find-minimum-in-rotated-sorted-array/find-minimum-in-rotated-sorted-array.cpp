class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low = 0,high=n-1;
        int min= INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<min){
                min=nums[mid];
            }
            if(nums[low]<=nums[mid] && nums[low]>=nums[high]){
                low=mid+1;
            } else{
                high=mid-1;
            }

        }
        return min;
    }
};