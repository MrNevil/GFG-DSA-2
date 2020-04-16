int modified (string a){
    
    int n = a.length();
    
    char prev = NULL;
    int ans = 0, cnt = 0;
    for (auto x : a){
        if (x == prev){
            cnt++;
            if (cnt == 2){
                cnt = 0;
                ans++;
            }
        }
        else{
            cnt = 0;
        }
        prev = x;
    }
    
    return ans;   
}
