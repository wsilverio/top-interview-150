#include <string>
#include <list>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        const unordered_map<char, char> pairs = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        list<char> stack;
        for (auto c : s)
        {
            if (c == '(' or c == '[' or c == '{')
                stack.push_back(c);
            else if (not stack.empty() and c == pairs.at(stack.back()))
                stack.pop_back();
            else
                return false;
        }
        return stack.empty();
    }
};

#ifdef MAIN
#include <iostream>
#include <iomanip>
int main(int argc, char **argv)
{
    if (argc == 2)
        cout << std::boolalpha << Solution().isValid(argv[1]);
    return 0;
}
#endif
