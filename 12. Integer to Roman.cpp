#include <string>

using std::string;

class Solution
{
public:
    string intToRoman(int num)
    {
        // Constraints: 1 <= num <= 3999
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[] = {"", "M", "MM", "MMM"};

        string result = "";

        result += thousands[num / 1000];
        num %= 1000;
        result += hundreds[num / 100];
        num %= 100;
        result += tens[num / 10];
        num %= 10;
        result += ones[num];

        return result;
    }
};

#ifdef MAIN
#include <iostream>
#include <iomanip>
int main(int argc, char **argv)
{
    if (argc == 2)
        std::cout << Solution().intToRoman(std::stoi(argv[1]));
    return 0;
}
#endif
