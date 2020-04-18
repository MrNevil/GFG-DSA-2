def concatenatedString(s,p):
    
    x, y = set(), set()
    
    for i in s:
        x.add(i)
    for i in p:
        y.add(i)
        
    res = ""
    for i in s:
        if i not in y:
            res += i
            
    for i in p:
        if i not in x:
            res += i
    
    if res == "":
        return -1
    return res
