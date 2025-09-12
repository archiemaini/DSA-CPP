class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        for(auto interval:interval){
        if(res.empty()|| res.back()[1]<interval[0]){
            res.push_back(interval);
        
        }
        else{
            res.back()[1]=max(res.back()[1],interval[1]);
        }
    }
    return res;
    }
};

