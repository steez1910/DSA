#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{ 
 int j = 0;
 for (int i = 0; i < n; i++) 
  {
    if (arr[i] != 0) 
      {
        swap(arr[j], arr[i]); 
        j++;
      }
  }
 
  

}


int main()
{
  int arr[] = {12, 0, 32, 0, 0, 54, 4};
  int n = sizeof(arr)/sizeof(arr[0]); 

pushZerosToEnd(arr,n);
for (int i = 0; i < n; i++) 
  {
      cout << arr[i] << "  ";
  }
return 0;
}