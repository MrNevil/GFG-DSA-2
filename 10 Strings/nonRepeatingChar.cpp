char nonrepeatingCharacter(string s)
{
   
    int cnt[256] = {0};
    for (int i = 0; i < s.length(); i++)
        cnt[ s[i] ]++;
        
    for (int i = 0; i < s.length(); i++)
        if (cnt[s[i]] == 1)
            return s[i];
    
    return '$';
}
