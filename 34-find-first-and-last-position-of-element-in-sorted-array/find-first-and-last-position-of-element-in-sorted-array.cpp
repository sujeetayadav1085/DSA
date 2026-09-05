class Solution {
public:
int first_occur(vector<int>& nums,int k){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==k){
            first=mid;
            high=mid-1;
        }else if(nums[mid]<k) low=mid+1;
        else{
            high=mid-1;
        }
    }
    return first;
}
int last_occur(vector<int>& nums,int k){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int last=-1; 
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==k){
            last=mid;
            low=mid+1;
        } else if(nums[mid]<k) low=mid+1;
        else{
            high=mid-1;
        }
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_occur(nums,target);
        if(first==-1) return {-1,-1};
        int last=last_occur(nums,target);
        return {first,last};
        // vector<int> ans(2);
        // int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        // int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        // ans[0]=lb;
        // ans[1]=ub-1;
        // if(lb==nums.size() || nums[lb]!=target){
        //     ans[0]=-1;
        //     ans[1]=-1;
        // }
        
        // return ans;
        // vector<int> ans(2);

        // int first_index=-1;
        // int last_index=-1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         if(first_index==-1){
        //             first_index=i;
        //         }
        //         last_index=i;
        //     }
        // }
        //     ans[0]=first_index;
        //     ans[1]=last_index;
        
        // return ans;

        // this is brute force approach taking O(n) time complexity.
    }
};