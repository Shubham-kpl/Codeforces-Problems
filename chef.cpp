class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, pair<int, int>>mp;
        
        
        int maxi = 0, s = 0;
        for(int i = 0; i < n; i++) {
            if(mp[nums[i]].first == 0) {
                mp[nums[i]] = make_pair(1, nums[i]);
            }
            else {
                mp[nums[i]] = make_pair(mp[nums[i]].first++, mp[nums[i]].second);
            }
            if(mp[nums[i]].first > k) {
                maxi = max(maxi, i - s);
                while(s <= mp[nums[i]].second) {
                    mp[nums[s]].first--;
                    s++;
                }
            }
        }
        if(maxi == 0) {
            return n;
        }
        return maxi;
    }
};