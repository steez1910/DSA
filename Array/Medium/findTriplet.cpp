// https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
// Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
// If there is such a triplet present in array, then print the triplet and return true. Else return false.

#include <bits/stdc++.h>
using namespace std;

bool findTriplet(int arr[], int size, int sum)
{
  for (int  i = 0; i < size - 2; i++)
  {

    for (int  j = i+1; j < size - 1; j++)
    {
      
      for (int  k = i +2; k < size ; k++)
      {
        if (arr[i] + arr[j] + arr[k] == sum)
        {
          cout << arr[i] << ", " << arr[j] << ", "  << arr[k] << endl;
          return true;
        }
      }
    } 
  }
}


int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr)/ sizeof(arr[0]);
  int sum = 6;
  findTriplet(arr, size, sum);


  return 0;
}