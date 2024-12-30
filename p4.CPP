#include <iostream>
using namespace std ;

int main(){
       const int N =1e5;
       int n , m;
       cin >> n;
       int a[N];
       for(int i = 0 ;i<n ; i++)
       cin>>a[i];
       cin>>m;
       for(int i=0 ; i<n ; i++){

        if(a[i] == m){
             cout<<i<<endl;
             return 0;
        }
        
       }


      cout<<-1<<endl;




    return 0;
}
