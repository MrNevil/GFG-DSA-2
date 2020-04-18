int findSum(string str)
{
	int n = str.length();
	int sum = 0, i = 0;; 
	while (i < n){
	   
        int num = 0;
        while (str[i] >= '0' && str[i] <= '9'){
            
            num = num * 10 + str[i] - '0';
            i++;
        }
        sum += num;
	    i++;
	}
	
	return sum;
}
