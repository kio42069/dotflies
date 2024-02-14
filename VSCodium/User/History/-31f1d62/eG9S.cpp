#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1){
            return 0;
        }
        vector<int> pricesCopy(prices);
        sort(pricesCopy.begin(), pricesCopy.end());
        auto it = find(prices.begin(), prices.end(), pricesCopy[0]);
        if ((it - prices.end()) == 1){
            return 0;
        }
        // for(int i = )
    }


int main(){
    vector<int> prices = {3,2,1};
    int a = maxProfit(prices);
    cout << a << endl;
    return 0;
}
