#include <vector>
#include <unordered_map>
#include <exception>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (const auto val : nums)
        {
            map[val]++; // (the first call to operator[] initialized the counter with zero)
        }
        const auto n = nums.size() / 2;
        for (const auto pair : map)
        {
            if (pair.second > n)
                return pair.first;
        }
        throw runtime_error("invalid input array");
    }
};
