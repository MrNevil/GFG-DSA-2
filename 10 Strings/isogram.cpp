bool isIsogram(string s)
{
    int cnt[256] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++){
        
        if (cnt[s[i]] == 0)
            cnt[s[i]]++;
        else
            return false;
    }
    return true;
}
