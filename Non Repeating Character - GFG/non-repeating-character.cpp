//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
        int res=INT_MAX ;
        int fi[256] ;
        fill(fi,fi+256,-1) ;
        
        for(int i=0;i<s.length();i++)
        {
            if(fi[s[i]]==-1)
            fi[s[i]]=i ;
            else 
            fi[s[i]]=-2 ;
        }
        
        for(int i=0;i<256;i++)
        {
            if(fi[i]>=0)
            res=min(res,fi[i]) ;
        }
        
        return res==INT_MAX?'$':s[res] ;
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends