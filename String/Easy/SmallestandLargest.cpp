#include <bits/stdc++.h>
#include<cstring> 
using namespace std;

void SmallestAndLargest(string str)
{
  int StrLength = str.length();
  int startIndex = 0, endIndex = 0;
  int minLength = StrLength, maxLength = 0, currentLength;
  string smallest, largest;
  while (endIndex < StrLength)
  {
    if ( str[endIndex] != ' ')
    {
      endIndex ++;
    }
    else
    {
      currentLength = endIndex - startIndex;
      if (currentLength < minLength)
      {
        smallest = str.substr(startIndex, currentLength);
        minLength = currentLength;
      }
      if (currentLength > maxLength)
      {
        largest = str.substr(startIndex, currentLength);
        maxLength = currentLength;
      }
      endIndex ++;
      startIndex = endIndex;
      
    }
  }
  cout << "Smallest Word from the string is " << smallest<< endl;
   cout << "Smallest Word from the string is " << largest << endl;

}
int main()
{
  string str = "This is a test string";
  SmallestAndLargest(str);



  return 0;
}
