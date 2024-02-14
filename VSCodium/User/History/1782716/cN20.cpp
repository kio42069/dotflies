#include<bits/stdc++.h>
using namespace std;


static bool cmp(pair<int, int> &a, pair<int,int> &b){
    return a.second < b.second;
}    

vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> a;
    for(int i = 0; i < nums.size(); i++){
        int t = 1;
        for(int j = 0; j < nums.size(); j++){
            if(i != j){
                t *= nums[j];
            }
        }
        a.push_back(t);
    }
    return a;
}


int main(){
    vector<int> nums;
    vector<int> fin = productExceptSelf(nums);
    for(auto it:fin){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
