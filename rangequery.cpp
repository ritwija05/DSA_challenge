#include <vector>
#include <algorithm>
using namespace std;
    int pref[10005];
    void NumArray(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) pref[i+1] = pref[i] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return pref[right + 1] - pref[left];
    }

