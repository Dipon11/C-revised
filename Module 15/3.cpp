/*Create two functions to show the difference between call by value
and call by reference.You are discouraged from using the
 displayed codes in class.*/

 //call by value 
 
 #include<bits/stdc++.h>
 using namespace std;
void call_by_value(int x)
{
    cout<< "fun x er address "<<&x <<endl;
   
} 
void call_by_ref(int *p )
{
  *p=100;

}

 int main(){
      int x=10;
       cout<< x  <<endl;
      
      cout<< "main x er address "<<&x <<endl;
      call_by_value(x);
      call_by_ref(&x);
       cout<< "After defrence"<< x  <<endl;
      
 
     return 0;
 }

 
 