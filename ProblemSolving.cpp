// Bit Manipulation
....

---------------------------------
  
  Find minimum and maximum element in an array
BasicAccuracy: 68.55%Submissions: 174K+Points: 1
Participate in Monthly Hiring Challenge conducted by GeeksforGeeks !!  

Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

 

Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000
 

Example 2:

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function getMinMax() which takes the array A[] and its size N as inputs and returns the minimum and maximum element of the array.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 105
1 <= Ai <=1012
  
  
  pair<long long, long long> getMinMax(long long a[], int n) {
    
    pair<long long, long long> ans;
    int max=INT_MIN;
    int min=INT_MAX;
    for ( int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int j=0;j<n;j++){
        if(a[j]<min){
            min=a[j];
        }
    }
    ans.first=min;
    ans.second=max;
    return ans;
    
    
}


---------------------------------------------------------------
  
  
  First and last occurrences of x
BasicAccuracy: 37.36%Submissions: 165K+Points: 1
Participate in Monthly Hiring Challenge conducted by GeeksforGeeks !!  

Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 
 

Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6 

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function find() that takes array arr, integer n and integer x as parameters and returns the required answer.
Note: If the number x is not found in the array just return both index as -1.

 

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1).

 

Constraints:
1 ≤ N ≤ 107
vector <int> find (int arr[], int n, int x)
{
    // code here
    vector<int> ans;
    int a=-1;
    int b=-1;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            a=i;
            break;
        }
    }
     
    for(int i=0;i<n;i++){
        if(x==arr[i]){
          b=i;
          
        }
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
