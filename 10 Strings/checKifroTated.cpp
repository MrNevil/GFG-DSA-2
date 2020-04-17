def areRotations(s1,s2):
    
    if len(s1) != len(s2):
        return 0;
        
    s1 = s1 + s1
    
    if s2 in s1:
        return 1;
    return 0;
    
