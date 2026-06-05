Given a string S. Determine whether this string is Good or Bad.

Note: The string is Good if and only if it has "010" or "101" as one of its sub-strings and it's not necessary to have both of them.

A substring of a string is a contiguous subsequence of that string. So, string "forces" is substring of string "codeforces", but string "coder" is not.

Input
The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

Each of the T following lines contains a string S (1 ≤ |S| ≤ 10^5) where |S| is the length of the string..

It's guaranteed that S contains only '1s' and '0s'.

Output
For each test case, print "Good" if the string is Good otherwise, print "Bad".

Example
Input
2
11111110
10101010101010
Output
Bad
Good

Note
Example case 1:

The string doesn't contain 010 or 101 as sub-strings.

Example case 2:

The string contains both 010 and 101 as sub-strings.


