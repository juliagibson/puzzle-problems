#include<iostream>
#include<string>

using namespace std;

// Time complexity of solution: O(n), since each pointer traverses n/2
// Space complexity of solution: O(1), since each pointer only requires a single allocation

bool IsValidPalindrome(string s)
{
    // Two-pointers approach to test valid input against palindrome principle
    char p1, p2;

    // Reject inputs that are "too long"
    if (!(1 <= s.length() && s.length() <= 20000))
    {
        return false;
    }

    // Consider letters of different case to be equal
    p1 = tolower(s[0]);
    p2 = tolower(s[s.length()]);

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (!(s[i] == s[s.length() - 1 - i]))
        {
            return false;
        }
    }

    return true;

}

int main()
{
    // Test cases
    std::cout << IsValidPalindrome("a") << std::endl;
    std::cout << IsValidPalindrome("abab") << std::endl;
    std::cout << IsValidPalindrome("ababa") << std::endl;
    std::cout << IsValidPalindrome("ababA") << std::endl;
    std::cout << IsValidPalindrome("a bab") << std::endl;
    std::cout << IsValidPalindrome("a bab a") << std::endl;
}


bool IsPalindrome(std::string inputString)
{
    int left = 0;
    int right = inputString.length() - 1;
    while (left < right)
    {
        if (inputString[left] != inputString[right])
        {
            return false;
        }
        left += 1;
        right -= 1;
    }
    return true;
}

int main()
{
    std::vector<std::string> inputStrings = { "RACEACAR", "A", "ABCDEFGFEDCBA",
                                             "ABC", "ABCBA", "ABBA", "RACEACAR" };
    for (int i = 0; i < inputStrings.size(); i++)
    {
        std::cout << "Test Case # " << i + 1 << std::endl;
        std::cout << std::string(100, '-') << std::endl;
        std::cout << "The input string is \'" << inputStrings[i] << "\' and the length of the string is " << inputStrings[i].size() << "." << std::endl;
        bool result = IsPalindrome(inputStrings[i]);
        std::cout << "\nIs it a palindrome?..... ";
        if (result)
            std::cout << "True" << std::endl;
        else
            std::cout << "False" << std::endl;
        std::cout << std::string(100, '-') << std::endl;
    }
}