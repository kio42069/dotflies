#include <bits/stdc++.h>
using namespace std;

    bool match(vector<int>a , vector<int> b){
        for(int i = 0; i < 3; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }


    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(*nums.begin() > 0 || nums[nums.size()-1] < 0){
            vector<vector<int>> a = {};
            return a;
        }
        vector<vector<int>> ans;
        int i = 0;
        int j = nums.size()-1;
        while(nums[i] <= 0){
            int a = nums[i];
            int b = nums[j];
            int c = -a-b;
            auto it = lower_bound(nums.begin(), nums.end(), c);
            int pos = (int)(it-nums.begin());
            if(it != nums.end() && pos != i & pos != j){
                vector<int> temp = {*it, a, b};
                sort(temp.begin(), temp.end());
                bool flag = false;
                for(auto it : ans){
                    if(match(it, temp)){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    ans.push_back(temp);
                }
            }
            if(nums[j] >= 0 && i < j-1){
                j--;
            }
            else{
                i++;
                j = nums.size()-1;
            }
        }
        return ans;
    }


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    for(auto it : ans){
        for(auto jt : it){
            cout << jt << " ";
        }
        cout << endl;
    }
    return 0;
}
