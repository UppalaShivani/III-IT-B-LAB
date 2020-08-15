
# Aim :                                                                                      
To write a program using recursive function to perform Binary search operations for a Key element in the given list of integers. 
# Description :
Binary Search: Search a sorted array by repeatedly dividing the search interval in half.                 
Binary Search is applied on the sorted array or list of large size. It's time complexity of O(log n) makes it very fast as compared to other sorting algorithms.                                             
The only limitation is that the array or list of elements must be sorted for the binary search algorithm to work on it.                                                                                           
It works as follows :                                                                                   
1. Compare x with the middle element.
2. If x matches with middle element, we return the mid index.
3. Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
4. Else (x is smaller) recur for the left half.                                                         
Where x is the Key value. We basically ignore half of the elements just after one comparison.           
# Step-by-step procedure : 
1. List of integers : arr[] = {3, 6, 8, 10, 14, 15, 20, 30, 66, 99}                                     
## Case-1 : Keyelement = 6
Initially , start index(i)=0, end index(n) = 9                                                           
    middle index(mid) = (i+n)/2 = 4                                                                     
### Iteration-1:
