#include<bits/stdc++.h>
using namespace std;

int minSteps (int N){
    if (N == 1)
        return 0;
    
    else if (N & 1)
        return 1 + min(minSteps(N-1), minSteps(N+1));
        
    else
        return 1 + minSteps (N/2);
}

int main()
 {
	int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    cout<<minSteps(n)<<endl;
	}
	return 0;
}
