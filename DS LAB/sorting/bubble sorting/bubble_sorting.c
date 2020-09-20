#include <stdio.h>
void bubble_sort(int array[], int n);
int main()
{
  int array[100], n, i;

  printf("Enter number of elements : ");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  bubble_sort(array, n);
  printf("Sorted array in ascending order:\n");
  for (i = 0; i < n; i++)
     printf("%d,", array[i]);
  return 0;
}
void bubble_sort(int list[], int n)
{
  int i, j, t, s=0;
  for (i = 0 ; i < n - 1; i++) {
    for (j = 0 ; j < n - i - 1; j++) {
      if (list[j] > list[j+1]) {
        t         = list[j];
        list[j]   = list[j+1];
        list[j+1] = t;
        s=1;
      }
    }
    if(!s){
        break;
    }
  }
}
