class Solution {
private:
    int sumby(vector<int> & nums,int divisor){
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ceil(double(nums[i])/double(divisor));
    }
    return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high = *max_element(nums.begin(),nums.end());
        int ans=-1;
        if(nums.size()>threshold) return -1;
        while(low<=high){
            int mid=(high+low)/2;
            if(sumby(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return ans;
    }
};