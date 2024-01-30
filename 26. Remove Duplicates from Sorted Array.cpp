#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        auto unique = nums.begin();
        for (auto it = nums.cbegin() + 1; it < nums.cend(); ++it)
        {
            if (*it == *unique)
                continue;
            *++unique = *it;
        }
        return unique - nums.begin() + 1;
    }
};
