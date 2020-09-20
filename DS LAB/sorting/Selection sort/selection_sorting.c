/*selection sorting */
#include <stdio.h>
void selection_sorting(int n,int a[]);
int main()
{
    int a[100],i,n;
    printf("enter length of array :");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selection_sorting(n,a);
    return 0;
}
void selection_sorting(int n,int a[])
{
    int i,j,min,temp;
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min =j;
            }
           
        } temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }
    printf("Elements after sorting are :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
