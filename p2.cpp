#include <iostream>
#include <string>

using namespace std ;
int main()
{
    string s ="codeforces";
    int t;
    cin >> t;
    while(t--){
     char c; 
     bool f=0 ;
     for(int i=0 ; i<s.size() ; i++){
        cin>> c;
         if(s[i] == c)
         f=1;
         if(f == 1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
     }
     
        }
    
   
    return 0;
}