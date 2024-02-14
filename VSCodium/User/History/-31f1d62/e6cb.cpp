#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int cmn = 0;
        int maxe = 0;
        int next = 1;
        while(cmn < prices.size()){
            if(next == prices.size()){
                cmn++;
                next = cmn+1;
            }
            else{    
                int diff = prices[cmn] - prices[next];
                maxe = max(diff, maxe);
                if(diff <= 0){
                    cmn++;
                    next = cmn+1;
                }
                else{
                    next++;
                }
            }
        }
        return maxe;
    }


int main(){
    vector<int> prices = {7,6,4,3,1};
    int a = maxProfit(prices);
    cout << a << endl;
    return 0;
}
