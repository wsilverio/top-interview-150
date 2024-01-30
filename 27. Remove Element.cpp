#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        auto dest = nums.begin();
        for (const auto &n : nums)
        {
            if (n != val)
                *dest++ = n;
        }
        return dest - nums.begin();
    }
};
