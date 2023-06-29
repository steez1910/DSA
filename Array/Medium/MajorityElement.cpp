




#include <bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int size)
{
  int Totalcount = 0;
  int index = -1;
  for (int  i = 0; i < size; i++)
  {
    int count = 0;
    for (int  j = i+1; j < size-1; j++)
    {
      if (arr[i] == arr[j])
      {
        count ++;
      }
      
    }

    if (count > Totalcount)
    {
      Totalcount = count;
      index = i;
    } 
  }
  
  if (Totalcount > (size / 2))
  {
    cout << arr[index];
  }
  else
  {
    cout << "No Majority Element in array" << endl;

  }

}


int main ()
{
  int arr[] = {4, 4, 0, 0, 2, 4, 4, 2, 4, 4};
  int size = sizeof(arr)/ sizeof(arr[0]);
  findMajority(arr, size);


  return 0;
}