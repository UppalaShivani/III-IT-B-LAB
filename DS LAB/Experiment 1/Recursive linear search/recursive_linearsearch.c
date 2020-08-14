#include <stdio.h>
int recursive_linearsearch(int arr[], int start_index, int end_index,int element)
{
    if(start_index > end_index){
        return 0;
    }
    else if(arr[start_index] == element){
        return start_index ;
    }
    else{
        return recursive_linearsearch(arr,start_index+1,end_index,element);
    }
}
int main()
{
    int arr[] = {10,6,8,15,20,3,14,99,66,30};
    int element, end_index= 9, pos;
    printf("enter key element : ");
    scanf("%d",&element);
    pos = recursive_linearsearch(arr,0,end_index,element);
    
    if(pos != 0){
        printf("element %d found at position %d",element,pos);
    }
    else{
        printf("element not found");
    }
    return 0;
}