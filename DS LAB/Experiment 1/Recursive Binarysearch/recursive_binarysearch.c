#include <stdio.h>
int recursive_binarysearch (int arr[], int i, int n, int element)
{
  while (i <= n)
    {
      int mid = (i + n) / 2;
      if (arr[mid] == element)
	  {
	    return mid;
	  }
      else if (arr[mid] > element)
	  {
	      return recursive_binarysearch(arr,i,mid-1,element);
	  }
	  else{
	      return recursive_binarysearch(arr,mid+1,n,element);
	  }
    }
  return -1;
}

int main ()
{
  int arr[] = { 3, 6, 8, 10, 14, 15, 20, 30, 66, 99 };
  int n = 10, element;
  printf ("enter the element : ");
  scanf ("%d", &element);
  int pos = recursive_binarysearch(arr, 0, n - 1, element);
  if (pos == -1)
    {
      printf ("element not found");
    }
  else
    {
      printf ("element %d found at position %d", element, pos);
    }
  return 0;
}
