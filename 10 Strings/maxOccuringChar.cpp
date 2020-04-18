def getMaxOccurringChar(s):
    
    
    dict = {}
    max1 = 0
    for i in s:
        dict[i] = dict.get(i, 0) + 1
        max1 = max(max1, dict[i])
        
    for i in sorted(dict):
        if dict[i] == max1:
            return i
