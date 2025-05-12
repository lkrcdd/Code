#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    map<string, int> table;
    table["a"] = 1;
    table["b"] = 5;
    table["c"] = 3;

    for (const auto &pair : table)
    {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    vector<pair<string, int> > vec(table.begin(), table.end());
    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i].first << " : " << vec[i].second << std::endl;
    }
}