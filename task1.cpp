#include <iostream>
using namespace std;
void test(int x, int y);
main()
{
 int x, y;
 cout<<"Enter the first number: ";
 cin>> x;
 cout<<"Enter the second number: ";
 cin>> y;
 test(x, y);
}
void test(int x, int y)
{
 if(x==y)
 {
  cout<<"true";
 }
 if (x!=y)
 {
  cout<<"false";
 }
}
 
