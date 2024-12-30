#include <iostream>
using namespace std ;
#include <string>
int main(){
    string s ;
    getline(cin,s);
    for(int i=0 ; i<= s.size() ; i++){
        if(s[i] == '\\')
        break;
        cout<<s[i];
    }
    return 0;
}