//Insertion sorting
#include <stdio.h>
void insertion_sort(int a[], int n);
int main()
{
    int a[20],i,n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("Sorted elements are : \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void insertion_sort(int a[], int n)
{
    int i,j,temp,k;
    for(i=1;i<n;i++){
        temp = a[i];
        for(j=i;j>0 && temp<a[j-1];j--){
            a[j] = a[j-1];
        }
        a[j] = temp;
        for(k=0;k<n;k++){
            printf("%d  ",a[k]);
        }
        printf("\n");
    }
}