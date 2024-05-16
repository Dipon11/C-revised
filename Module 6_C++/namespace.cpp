#include<bits/stdc++.h>
using namespace std;
namespace  Rakib
{
  int age =24;
  void hello()
  {
     cout<< "Hello Rakib Namespace"  <<endl;
    
  }
}
namespace  Sakib
{
  int age2 =23;
  void hello2()
  {
     cout<< "Hello Sakib Namespace"  <<endl;
    
  }
}
using namespace Rakib;
using namespace Sakib;

int main(){
     
     
      cout<<age  <<endl;
      cout<<age2  <<endl;
       hello();
       hello2();
      
    


    return 0;
}
