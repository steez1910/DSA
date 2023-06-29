// https://www.geeksforgeeks.org/find-subarray-with-given-sum//
//Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.
// Note: There may be more than one subarray with sum as the given sum, print first such subarray. 


#include <bits/stdc++.h>
using namespace std;

void subArraySum(int arr[], int size, int sum)
{
 
    for (int i = 0; i < size; i++) {
        int curSum = arr[i];
 
        if (curSum == sum) {
            cout << "Sum was found on the indexes " << i << endl;
            return;
        }
        else {
            for (int j = i + 1; j < size; j++) {
                curSum += arr[j];
 
                if (curSum == sum) {
                    cout << "Sum found between indexes "
                         << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found";
    return;
}
// the first loop for finding first index
// the second loop for finding second index

int main()
{
  int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
  int size = sizeof(arr)/ sizeof(arr[0]);
  int sum = 9;
  subArraySum(arr, size, sum);

  return 0;
}