#include <string>
#include <list>
#include <cctype>

using namespace std;

class Solution
{
public:
    int calculate(string s)
    {
        int ans = 0;
        int num = 0;
        int sign = 1;
        list<int> stack = {sign};
        for (auto c : s)
        {
            if (isdigit(c))
                num = num * 10 + (c - '0');
            else if (c == '(')
                stack.push_back(sign);
            else if (c == ')')
                stack.pop_back();
            else if (c == '+' or c == '-')
            {
                ans += sign * num;
                sign = (c == '+' ? 1 : -1) * stack.back();
                num = 0;
            }
        }
        ans += sign * num;
        return ans;
    }
};

#ifdef MAIN
#include <iostream>
int main(int argc, char **argv)
{
    if (argc == 2)
        cout << Solution().calculate(argv[1]);
    return 0;
}
#endif
