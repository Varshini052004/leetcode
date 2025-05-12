class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int num =nums[i];
            int value=target-num;
            if(mpp.find(value)!=mpp.end()){
                return{mpp[value],i};
            }
             mpp[num] = i;
         }
            return{-1,-1};
        
    }
};