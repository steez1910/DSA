#include <bits/stdc++.h>
using namespace std;




void threeLargest(int arr[], int size)
{
  int first,second,third = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > first)
    {
      third = second;
      second = first;
      first = arr[i];
    }
    else if (arr[i] > second && arr[i] != first)
    {
      third = second;
      second = arr[i];
    }
    else if (arr[i] > third && arr[i] != second)
    {
      third = arr[i];
    } 
  }
  cout <<"   " << first <<"   " << second <<"   " << third <<endl;
}

int main()
{
  int arr[] = {32, 21, 12, 43, 9, 5, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  threeLargest(arr, n);
  return 0;

}