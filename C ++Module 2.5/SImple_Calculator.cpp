#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int x,y;
     cin>>x>>y;

    int sum=0, sub=0,mal=0;
    
    sum=x+y;
    sub=x-y;
    mal=x*y;

      cout<< x<<" "<<"+"<<" "<<y<<" "<<"="<<" "<<sum<<endl;
      cout<< x<<" "<<"+"<<" "<<y<<" "<<"="<<" "<<mal<<endl;
      cout<< x<<" "<<"+"<<" "<<y<<" "<<"="<<" "<<sub<<endl;

    return 0;
}
