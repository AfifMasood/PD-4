#include <iostream>
using namespace std;
void tpChecker(int people, int tp, int output);
main()
{
 int people, tp, output;
 cout<<"Number of people in the household: ";
 cin>> people;
 cout<<"Number of rolls of TP: ";
 cin>> tp;
 tpChecker(people, tp, output);
}
void tpChecker(int people, int tp, int output)
{
 output=((tp*500)/people)/57;
 if(output<14)
 {
  cout<<"Your TP will only last "<< output <<" days, buy more!";
 }
 if(output>=14)
 {
 cout<<"Your TP will last "<<output<<" days, no need to panic!";
 }
}