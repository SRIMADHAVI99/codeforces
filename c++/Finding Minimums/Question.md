You are given N numbers, and you should divide them into consecutive groups of size K,then print the minimum among 
each group. If the last group is of size <K, print the minimum number found just after the last number received.

For more explanation, see the notes.

Input
First line contains two numbers N,K (1≤K≤N≤105) – the number of values, and the range length after which you should print the minimum.

Second line contains N numbers (−109≤x≤109).

Output
Print the answer in a single line.

Examples
Input
8 3
4 -1 2 3 5 0 2 7
Output
-1 0 2 

Input
8 4
4 -1 2 3 5 0 2 7
Output
-1 0 

Note
In the first test case:
The minimum number among [4,−1,2] is −1.
The minimum number among [3,5,0] is 0.
The minimum number among [2,7] is 2.
