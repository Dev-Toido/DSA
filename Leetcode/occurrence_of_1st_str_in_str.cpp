#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        
        if (haystack.size() == 0 || needle.size() == 0 || needle.size() > haystack.size())
        {
            return -1;
        }

        bool isFound = true;
        for (int i = 0; i < haystack.size() - needle.size() + 1; i++)
        {
            isFound = true;
            for (int j = 0; j < needle.size(); j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    isFound = false;
                }
            }
            if (isFound)
            {
                return i;
                break;
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}