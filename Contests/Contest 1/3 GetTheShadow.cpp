#include<iostream>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    if (n < 2)
	        continue;
	        
	    int arr[n];
	    for (int i = 0; i < n; i++)
	        cin>>arr[i];
	        

        
        int missing = 0, repeating = 0;
	    int sum = n*(n+1)/2;
	    int sumSq = (n*(n+1)*(2*n + 1))/6;
	    
	    for (int i = 0; i < n; i++){
	        sum -= arr[i];
	        sumSq -= (arr[i]*arr[i]);
	    }
	    
	    missing = (sum + sumSq/sum)/2;
	    repeating = missing - sum;
	    cout<<repeating<<" "<<missing<<endl;
  
	   
	}
	return 0;
}
