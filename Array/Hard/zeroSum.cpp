// https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/
// Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.



#include <bits/stdc++.h>
using namespace std;

void findTripletZeroSum(int arr[], int size)
{
  bool zero = false;

  for (int  i = 0; i < size - 2; i++)
  {
// for the first element 
    for (int  j = i+1; j < size - 1; j++)
    {
// for the second element 
      for (int  k = i+2; k < size ; k++)
      {
// for the third element 
        if (arr[i] + arr[j] + arr[k] == 0)
        {
          cout << arr[i] << ", " << arr[j] << ", "  << arr[k] << endl;
          zero = true;
        }
        
      }
    } 
  } 

  if (zero == false)
  {
    cout << "not exist" << endl;
  }
  
}


int main()
{
  int arr[] = {0, -1, 2, -3, 1};
  int size = sizeof(arr)/ sizeof(arr[0]);
  findTripletZeroSum(arr, size);


  return 0;
}