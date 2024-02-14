#include<bits/stdc++.h>
using namespace std;


static bool cmp(pair<int, int> &a, pair<int,int> &b){
    return a.second < b.second;
}    

vector<int> productExceptSelf(vector<int>& nums) {
    int value = 1;
    
}

// https://www.amazon.in/MY-TRIDEV-TRADERS-Transformer-Switching/dp/B07LCVY4Q3
int main(){
    vector<int> nums;
    vector<int> fin = productExceptSelf(nums);
    for(auto it:fin){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
