#include <iostream>
#include <string>
using namespace std;

void checkPalindrome(int i, int j, string str)
{
  if (i >= j)
  {
    cout << "String is a Palindrome";
    return;
  }

  if (str[i] == str[j])
  {
    checkPalindrome(i + 1, j - 1, str);
  }
  else
  {
    cout << "String is not a Palindrome";
    return;
  }
}

int main()
{
  string str = "";
  cin >> str;

  checkPalindrome(0, str.length() - 1, str);

  return 0;
}