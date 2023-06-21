#include <bits/stdc++.h>
using namespace std;




void threeLargest(int arr[], int size)
{
  int first_Max,second_Max,third_Max = INT_MIN;

  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > first_Max)
    {
      third_Max = second_Max;
      second_Max = first_Max;
      first_Max = arr[i];
    }
    else if (arr[i] > second_Max && arr[i] != first_Max)
    {
      third_Max = second_Max;
      second_Max = arr[i];
    }
    else if (arr[i] > third_Max && arr[i] != second_Max)
    {
      third_Max = arr[i];
    } 
  }
  cout << first_Max << second_Max << third_Max << " ";
}

int main()
{
  int arr[] = {32, 21, 12, 43, 9, 5, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  return 0;
  threeLargest(arr, n);

}