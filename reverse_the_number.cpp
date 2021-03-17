#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t ; 
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n ;
	    int r , result = 0 ;
	    while(n>0)
	    {
	        r = n %10 ;
	        result = (result*10) + r ;
	        n /= 10 ;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
