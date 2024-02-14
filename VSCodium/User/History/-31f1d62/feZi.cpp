#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1){
            return 0;
        }
        vector<int> pricesCopy(prices);
        sort(pricesCopy.begin(), pricesCopy.end());
        auto it = find(prices.begin(), prices.end(), pricesCopy[0]);
        if (2){
            return 0;
        }
        int small = *it;
        vector<int> pr(it, prices.end());
        sort(pr.begin(), pr.end());
        int big = pr[pr.size()-1];
        return big-small;
    }


int main(){
    vector<int> prices = {7,6,4,3,1};
    int a = maxProfit(prices);
    cout << a << endl;
    return 0;
}
