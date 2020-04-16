#include<bits/stdc++.h>
bool isRotated(string str1, string str2)
{   
    
    int n = str1.length(), m = str2.length();
    
    if (n != m)
        return false;
    
    if (n <= 2)    
        return (str1 == str2);
    string rotLeft = "";
    string rotRight = "";
    
    string x = rotLeft + str1.substr(2,n) + str1.substr(0,2);
    string y = rotRight + str1.substr(n-2, n) + str1.substr(0, n-2);
    
       
    return (str2.compare(x) == 0) || (str2.compare(y) == 0);
        
}
