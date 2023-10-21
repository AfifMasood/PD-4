#include <iostream>
using namespace std;
void test(string x);
main()
{
 string x;
 cout<<"Enter 'true' or 'false': ";
 cin>> x;
 test(x);
}
void test(string x)
{
 if(x=="true")
 {
  cout<<"false";
 }
 if (x=="false")
 {
  cout<<"true";
 }
}
 
