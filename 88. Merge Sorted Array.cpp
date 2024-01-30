#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        auto k = m + n - 1;
        m--;
        n--;
        while (n >= 0)
        {
            if (m >= 0 and nums1[m] > nums2[n])
                nums1[k--] = nums1[m--];
            else
                nums1[k--] = nums2[n--];
        }
    }
};
