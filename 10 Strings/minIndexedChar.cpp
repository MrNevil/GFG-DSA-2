
def minIndexchar(s,p):
    
    x = set()
    
    for i in p:
        x.add(i)
        
    for i in s:
        if i in x:
            print(i, end = "")
            return
            
    print("No character present", end = "")
    return
    
