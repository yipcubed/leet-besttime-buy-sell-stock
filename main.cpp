// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
          return 0;
        int lowest = prices[0];
        int highest = prices[0];
        int bestProfitSoFar = 0;
        for (int i = 1; i < prices.size(); ++i) {
          if (prices[i] > highest) {
            highest = prices[i];
            int profit =  highest - lowest;
            bestProfitSoFar = profit > bestProfitSoFar ? profit : bestProfitSoFar;
            continue;
          }
          if (prices[i] < lowest) {
            lowest = prices[i];
            highest = prices[i];
          }
        }

        return bestProfitSoFar;
    }
};

int main() {
  Solution S;

  vector<int> v1{7,1,5,3,6,4};

  cout << "5? " << S.maxProfit(v1) << endl;

  vector<int> v2{7,6,4,3,1};
  cout << "0? " << S.maxProfit(v2) << endl;

  cout << "Done!" << endl;

  return 0;
}
