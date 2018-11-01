#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
#include <map>
#include <limits>
#include <numeric>
#include <regex>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    size_t N;
    cin >> N;
    cin.ignore();

    vector<int> price(N);
    for(int& p : price)
    {
        cin >> p;
        cin.ignore();
    }

    int bestT = 300000, bestA = 300000, bestAT = 300000;
    for(int i = 0; i < N; ++i)
    {
        int t;
        cin >> t;
        cin.ignore();

        if(t == 1)
            bestT = min(bestT, price[i]);
        else if(t == 2)
            bestA = min(bestA, price[i]);
        else
            bestAT = min(bestAT, price[i]);
    }

    cout << min(bestA + bestT, bestAT) << endl;

    return 0;
}