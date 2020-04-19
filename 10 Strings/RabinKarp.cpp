bool RBSearch(string pat, string txt, int q) 
{ 
    
    int N = txt.length();
    int M = pat.length();
    
    int p = 0, t = 0, h = 1;
    
    for (int i = 0; i < M-1; i++){
        h = (h*d)%q;
    }
    
    for (int i = 0; i < M; i++){
        p = (p * d + pat[i]) % q;
        t = (t * d + txt[i]) % q;
    }
    
    for (int i = 0; i <= N - M; i++){
        if (p == t){
            bool flag = true;
            for (int j = 0; j < M; j++){
                if (txt[i+j] != pat[j]){
                    flag = false;
                    break;
                }
            }
            if (flag)
                return true;
        }
        
        if (i <= N - M){
            t = ( d*(t - txt[i]*h) + txt[i+M]) % q;
            if (t < 0)
                t = t + q;
        }
    }
    
    return false;
	
} 
