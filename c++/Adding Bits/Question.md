Peter Parker had worked hard throughout his digital logic course, but when he was asked to implement a 32 bit adder for a machine, he made a mistake in the design part. After tracing the design for half an hour, he found his flaw!! He was doing bitwise addition, but the carry bit is always zero.

4=00000000000000000000000000000100
+
6=00000000000000000000000000000110
=
2=00000000000000000000000000000010

Now, he has to write an efficient program that would take 2 unsigned 32 bit decimal numbers as input, and reproduce the output by adding them in the same way as his circuit does.

Input
Only One line containing two decimal numbers A and B (0≤A,B≤109).

Output
Print the value after adding A and B in Peter Parker's way.

Examples
Input
4 6
Output
2

Input
6 9
Output
15


Codeforces (c) Copyright 2010-2026 Mike Mirzayanov
The only programming contests Web 2.0 platform
Server time: Mar/23/2026 21:18:30UTC+5.5 (h1).
Desktop version, switch to mobile version.
Privacy Policy | Terms and Conditions
Supported by
