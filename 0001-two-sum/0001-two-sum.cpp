class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int moreReq = target - num ;
            if(map.find(moreReq)!= map.end()){

                return {map[moreReq],i};
            }
            map[num] =i;}
            return {-1,-1};
                    }
    
};