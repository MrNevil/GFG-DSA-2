/*
You are given a number N. You need to toggle the middle bit of N in binary form and print the result in decimal form.

If number of bits in binary form of N are odd then toggle the middle bit (Like 111 to 101).
If number of bits in binary form of N are even then toggle both the middle bits (Like 1111 to 1001)
Note: Toggling a bit means converting a 0 to 1 and vice versa.

Input:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains a single number N.

Output:
For each testcase, in a new line, print the decimal form after toggling the middle bit of N.

Constraints:
1 <= T <= 100
1 <= N <= 106

Examples:
Input:
5
1
2
3
4
5
Output:
0
1
0
6
7

Examples:
Testcase3: N=3. Binary is 11. Toggle the middle bits: 00. 00 in decimal is 0
Testcase5: N=5. Binary is 101. Toggle the middle bit: 111. 111 in decimal is 7

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
    
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int size = int(log2(n)) + 1;
        int middle = size/2;
        
        if (size &1){
            n = n ^ (1<<middle);
        }
        else{
            n = n ^ (1 << middle);
            n = n ^ (1 << middle-1);
        }
        cout<<n<<endl;
    }
    
	return 0;
}
