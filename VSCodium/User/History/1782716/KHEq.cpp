#include<bits/stdc++.h>
using namespace std;


static bool cmp(pair<int, int> &a, pair<int,int> &b){
    return a.second < b.second;
}    

bool isValidSudoku(vector<vector<char>>& board) {
    bool flag = true;
    for(int i = 0; i < 9; i++){
        unordered_map<char, int> a;
        for(int j = 0; j < 9; j++){
            a[nums[i][j]]
        }
    }        
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
