bool checkPangram (string &str)
{
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    int cnt[26] = {0};
    
    for (int i = 0; i < str.length(); i++){
        cnt[str[i]%26]++;
    }
    
    for (int i = 0; i < 26; i++){
        if (cnt[i] <= 0){
            return false;
        }
    }
    return true;
}
