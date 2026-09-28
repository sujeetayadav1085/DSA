class Solution {
private:
    bool possible(vector<int>& bloomDay, int day,int m, int k){
        int count=0;
        int bouquet=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
            } else{
                count=0;
            }
        }
        return bouquet>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return low;
        
    }
};