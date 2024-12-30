#include <iostream>
using namespace std ;

int main(){
       const int N=50;
       int n ,k , c=0;
       int a[N];
       cin>>n>> k;
       for(int i=0 ; i<n ;i++)
        cin>>a[i];
    
        for(int j=0 ; j<n ;j++){
            if(a[j] >= a[k-1])
            c++;
        }
         cout<<c<<endl;



    return 0;
}