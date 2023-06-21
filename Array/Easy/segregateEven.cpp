#include <bits/stdc++.h>
using namespace std;

void sergetaEven(int arr[], int n)
{ 
 int j = 0;
 for (int i = 0; i < n; i++) 
  {
    if (arr[i] % 2 == 0) 
      {
        swap(arr[j], arr[i]); 
        j++;
      }
  }
 for (int i = 0; i < n; i++) 
  {
      cout << arr[i] << " ";
  }
  

}


int main()
{
  int arr[] = {12, 21, 32, 15, 33, 54, 7};
  int n = sizeof(arr)/sizeof(arr[0]); 

sergetaEven(arr,n);

return 0;
}