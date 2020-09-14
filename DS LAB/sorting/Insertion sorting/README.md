# Aim:
To write a program using functions to perform Insertion sort operations for a Key element in the given list of integers.
# Description:
The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list (in the same array).                                                         
This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2), where n is the number of items.                                           
To sort an array of size n in ascending order:                                                                                                                                     
1: Iterate from arr[1] to arr[n] over the array.                                                                                                                                   
2: Compare the current element (key) to its predecessor.                                                                                                                           
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.         
# Step-by-step procedure :
Array = 20, 10, 40, 30                                                                                                                                                   

Iteration 1 : for i = 1 (second element of the array) to 3 (last element of the array)

i = 1. Since 10 is smaller than 20, move 20 and insert 10 before 20                                                                                                                 
The sub-sorted array : 10,20,40,30

Iteration-2 : i = 2. 20 will remain at its position as all elements in A[0..I-1] are smaller than 20
The sub-sorted array : 10,20,40,30

Iteration-3: i = 3. 30 is smaller than 40, move 40 and insert 30 before 40 and 30 is greater than 20 so it stays in position 2.                                                     
The sub-sorted array : 10,20,30,40

Then i = 4 where i>n;                                                                                                                                                               
So it comes out of loop.                                                                                                                                                           
### Output of following is : Sorted array = 10, 20, 30, 40
![Output](Itsertion_sorting.png)
