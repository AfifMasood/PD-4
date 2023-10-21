#include <iostream>
using namespace std;
void ticket(string x, float y,float z);
main()
{
 string x;
 float y, z;
 cout<<"Enter the country's name: ";
 cin>> x;
 cout<<"Enter the ticket price in dollars: $";
 cin>> y;
 ticket(x, y, z);
}
void ticket(string x, float y, float z)
{
 if(x=="Pakistan")
 {
  z=y-((5*y)/100);
  cout<<"Final ticket price after discount: $"<< z ;
 }
 if(x=="Ireland")
 {
  z=y-((10*y)/100);
  cout<<"Final ticket price after discount: $"<< z ;
 }
 if(x=="India")
 {
  z=y-((20*y)/100);
  cout<<"Final ticket price after discount: $"<< z ;
 }
 if(x=="England")
 {
  z=y-((30*y)/100);
  cout<<"Final ticket price after discount: $"<< z ;
 }
 if(x=="Canada")
 {
  z=y-((45*y)/100);
  cout<<"Final ticket price after discount: $"<< z ;
 }
}
   