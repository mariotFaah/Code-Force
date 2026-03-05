/*

*/
class Solution {
public:
    bool isPalindrome(int x)
     {
        int t = x;
		    long long rev = 0;
		    
		    // Calculate reverse number rev of a given number x
		    while (t > 0) {
		        int dig = t % 10;
		        rev = rev * 10 + dig;
		        t /= 10;
		    }
		       if(x<0)
		       {
		        return false;
		       } 
		       else if(x<10)
		       {
		        return true;
		       }
		        else if(rev==x)
		       {
		       		return true;
		       }
		       else 
		       {
		       	return false;
		       }

    }
};