int fact(int n){
    int res = 1;
    while (n > 0){
        res = res*n;
        n--;
    }

    return res;
}

int findRank(string str) 
{
    int n = str.length();
    int res = 1;
    int mul = fact(n);
        
    int count[256] = {0};

    for (int i = 0; i < n; i++){
        count[str[i]]++;
    }
    
    for (int j = 0; j < 256; j++)
        if (count[j] > 1)
            return 0;
        
    
    int prefix[256] = {0};

    prefix[0] = count[0];
    for (int k = 1; k < 256; k++){
        prefix[k] = count[k] + prefix[k-1];
    }
    
    int rank = 0;
    for (int i = 0; i < n; i++){
        mul = mul / (n-i);
                        
        rank = rank + (prefix[str[i] - 1] * mul);
        rank %= 1000000007;
             
        for (int j = str[i]; j < 256; j++)
            prefix[j]--;
    }
    
    return (rank+1) % 1000000007;
}
