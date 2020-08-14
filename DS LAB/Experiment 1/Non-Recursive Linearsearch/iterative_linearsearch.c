#include <stdio.h>
int iterative_linearsearch(int arr[], int end_index,int element)
{
    int i;
    for(i=0;i<=end_index;i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,6,8,15,20,3,14,99,66,30};
    int element, end_index= 9, pos;
    printf("enter key element : ");
    scanf("%d",&element);
    pos = iterative_linearsearch(arr,end_index,element);
    
    if(pos == -1){
       printf("element not found");
    }
    else{
        printf("element %d found at position %d",element,pos);
    }
    return 0;
}