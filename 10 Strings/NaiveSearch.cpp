bool search(string pat, string str) 
{ 
	int i = 0;
	int n = pat.length(), m = str.length();
	while (i < m){
	    
	    if ( str[i] == pat[0]){
	        int j = 0; 
	        while ( i < m && j < n && str[i] == pat[j] ){
	            i++; 
	            j++;
	        }
	        
	        if (j == n)
	            return true;
	    }
	    i++;
	}
	
	return false;
}
