#include <stdio.h>
int iterative_binarysearch (int arr[], int i, int n, int element)
{
  while (i <= n)
    {
      int mid = (i + n) / 2;
      if (arr[mid] == element)
	{
	  return mid;
	}
      else if (arr[mid] < element)
	{
	  i = mid + 1;
	}
      else
	{
	  n = mid - 1;
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
  int pos = iterative_binarysearch (arr, 0, n - 1, element);
  if (pos == -1)
    {
      printf ("element not found");
    }
  else
    {
      printf ("element %d found at %d position", element, pos);
    }
  return 0;
}
