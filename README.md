# DAA_ASSIGNMENT2
##Assignment Question:
Implement the solution for sorting the array in which each element is defined as [a,b] for example [2,3].
Input: "1": Result: Sorted array: on value "a"
Input: "2": Result: Sorted array on value "b"

Input:  arr[] = {1,5} {4,2} {7,8} {5,4} {2,7}
Output (Sort according to first element): arr[] = {1,5} {2,7} {4,2} {5,4} {7,8} 
Output (Sort according to second element): arr[]= {4,2}  {5,4} {1,5} {2,7} {7,8} 
Explanation: 
Here you can see in {1,5} {4,2} {7,8} {2,7} smallest first element is 1 followed by 2,4,5 and 7 and the similarly for smallest second element we have 2 follwed by 4,5,7 and 8.
So, here we are taking 'n' as the number of elements in the array. 
a1 as the first element ans a2 as the second element.
Then using a switch case we considered 2 possibilities where
if first element is greater than the second then sort accordingly and vive versa.
So as per your choice of sorting you can recieve the output.
