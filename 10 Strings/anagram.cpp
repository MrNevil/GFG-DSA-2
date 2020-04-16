bool isAnagram(string c, string d){
    
    if (c.length() != d.length())
        return 0;
    
    unordered_map<char, int> cfreq, dfreq;
    for (int i = 0; i < c.length(); i++){
        cfreq[c[i]]++;
        dfreq[d[i]]++;
    }
    
    if (cfreq == dfreq)
        return 1;
    return 0;
    
}
