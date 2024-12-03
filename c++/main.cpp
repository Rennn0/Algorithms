#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

std::string reverseWords(std::string sentence)
{
  auto reverse = [&](int left, int right)
  {
    while (left < right)
    {
      char temp = sentence[right];
      sentence[right--] = sentence[left];
      sentence[left++] = temp;
    }
  };

  sentence.erase(0, sentence.find_first_not_of(' '));
  sentence.erase(sentence.find_last_not_of(' ') + 1);

  const int length = sentence.length();

  reverse(0, length - 1);

  int start = 0, end = 0;

  for (; end < length; end++)
  {
    if (sentence[end] == ' ')
    {
      reverse(start, end - 1);

      while (sentence[++end] == ' ')
        ;
      start = end;
    }
  }

  reverse(start, end - 1);

  std::string result = "";
  bool canAddSpace = false;
  for (const char &c : sentence)
  {
    if (c == ' ')
    {
      if (canAddSpace)
      {
        result += c;
        canAddSpace = false;
      }
    }
    else
    {
      result += c;
      canAddSpace = true;
    }
  }

  return result;
}

int main()
{
  std::cout << reverseWords("    luka    danelia var   me  lukito     ")
            << std::endl;
  std::cout << reverseWords("luka danelia var me") << std::endl;
  std::cout << reverseWords("luka danelia") << std::endl;
  return 0;
}
