#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int cmn = 0;
        int maxe = 0;
        int next = 1;
        while(int cmn < prices.size()){
            if(next == prices.size()){
                cmn++;
                next = cmn+1;
            }
            int diff = prices[num] - prices[next];
            maxe = max(diff, maxe);
            if(diff < 0){
                
            }
        }
    }


int main(){
    vector<int> prices = {7,6,4,3,1};
    int a = maxProfit(prices);
    cout << a << endl;
    return 0;
}
