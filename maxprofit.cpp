// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    int buy = prices[0];

    for(int i = 1; i < prices.size(); ++i) {
        if(prices[i] - buy > profit) {
            profit = prices[i] - buy;
        }
        if(prices[i] < buy) {
            buy = prices[i];
        }
    }
    return profit;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    assert(maxProfit(prices) == 5);

    return 0;
}