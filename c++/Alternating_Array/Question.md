An array of integers is said to be alternating if each element has a different sign than the one next to it.

i.e. for each element in the array such that (0≤i<n) , only one of these conditions must be met:-

if ai<0 then ai+1>0.

if ai>0 then ai+1<0.
For example, [1, -3, 2] and [3] are alternating arrays, while [1,-3, -2] and [1, 2] are not.

You are given an array a of n integers, in one operation, you are allowed to choose a number and multiply it by -1 (change its sign). what is the minimum number of operations required to convert the given array into an alternating array.

Input
The first line contains an integer n(1≤n≤10^5) the number of elements in the array a

The second line contains n integers ai(−50≤ai≤50,ai≠0) the elements of the array a.

Output
Output the minimum number of operations needs to convert the given array into an alternative one.

Examples
Input
3
3 4 2
Output
1

Input
5
1 -2 3 -4 5
Output
0

