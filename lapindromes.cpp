#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t ;
	cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        vector<char>v1;
        vector<char>v2;
        if(n%2 == 0)
        {
           for(int i = 0 ; i < n/2 ; i++)
           {
               v1.push_back(s[i]);
           }
           for(int j = n/2 ; j < n ; j++)
           {
               v2.push_back(s[j]);
               
           }
        }
        else
        {
          for(int i = 0 ; i < n/2 ; i++)
           {
               v2.push_back(s[i]);
           }
           for(int j =(n/2)+1 ; j < n ; j++)
           {
               v2.push_back(s[j]);
               
           }  
        }
        sort(v1.begin() , v1.end());
        sort(v2.begin() , v2.end());
        int flage = 1;
        for(int  k = 0 ; k < v1.size() ; k++)
        {
          if(v1[k] != v2[k])
          {
             flage = 0 ;
          }
        }
        
       if(flage == 0)
       {
           cout<<"NO"<<endl;

       }
       else
       {
           cout<<"YES"<<endl;
       }
        
    }
	return 0;
}
