#include<bits/stdc++.h>
using namespace std;


static bool cmp(pair<int, int> &a, pair<int,int> &b){
    return a.second < b.second;
}    

bool isValidSudoku(vector<vector<char>>& board) {
            
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
