#include<bits/stdc++.h>
using namespace std;

// chal bhaaja 
static bool cmp(pair<int, int> &a, pair<int,int> &b){
    return a.second < b.second;
}    

bool isValidSudoku(vector<vector<char>>& board) {
    bool flag = true;
    for(int i = 0; i < 9; i++){
        unordered_map<char, vector<char>> a;
        for(int j = 0; j < 9; j++){
            if(nums[i][j] != "."){
                a[nums[i][j]].push_back(".");
            }
        }
        for(auto it : a){
            if(it.second.size()>1){
                flag = false;
                return flag;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            unordered_map<char, vector<char>> a;
            if (nums[j][i] != "."){
                a[nums[j][i]].push_back(".");
            }
        }
        for(auto it : a){
            if(it.second.size() > 1){
                flag = false;
                return flag;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        unordered_map<char, vector<char>> a;
        for(int j = 0; j < 3; j++){
            if(nums[i][j] != "."){
                a[nums[i][j]].push_back(".");
            }
        }
        for(auto it : a){
            if(a.second.size() > 1){
                flag = false;
                return flag;
            }
        }
        a.cl
    }

    return flag;
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
