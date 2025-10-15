#include <bits/stdc++.h>
using namespace std;

void lowercaseHashing()
{
  string str = "abcdefghijklmnopqrstuvwxyz";

  // Precompute
  int hash[26] = {0};
  for (int i = 0; i < 26; i++)
  {
    hash[int(str[i]) - 97]++;
  }

  // fetch
  for (int i = 0; i < 26; i++)
  {
    cout << "\n"
         << char(i + 97) << " appeared " << hash[i] << " times.";
  }
}

void allCharHashing()
{
  string str = "ABSR";

  // Precompute
  int hash[256] = {0};
  for (int i = 0; i < str.size(); i++)
  {
    hash[int(str[i])]++;
  }

  // Fetch
  for (int i = 0; i < str.size(); i++)
  {
    if (hash[int(str[i])] != 0)
      cout << "\n"
           << static_cast<char>(int(str[i])) << ": " << hash[int(str[i])];
  }
}

int main()
{

  // lowercaseHashing();
  allCharHashing();

  return 0;
}