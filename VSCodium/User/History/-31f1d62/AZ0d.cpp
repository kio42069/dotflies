#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        vector<int> pricesCopy(prices);
        sort(pricesCopy.begin(), pricesCopy.end());
        auto it = find(prices.begin(), prices.end(), pricesCopy[0]);
        if (it == prices.end())
    }


int main(){
    vector<int> prices = {};
    int a = maxProfit(prices);
    cout << a << endl;
    return 0;
}
