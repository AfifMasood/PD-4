#include <iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip, float originalPrice, float discount);
main()
{
 int redRose, whiteRose, tulip;
 float originalPrice, discount;
 cout<<"Red Rose: ";
 cin>> redRose;
 cout<<"White Rose: ";
 cin>> whiteRose;
 cout<<"Tulips: ";
 cin>> tulip;
 flowerShop(redRose, whiteRose, tulip, originalPrice, discount);
}
void flowerShop(int redRose, int whiteRose, int tulip, float originalPrice, float discount)
{
 originalPrice=(redRose*2)+(whiteRose*4.10)+(tulip*2.50);
 cout<<"Original Price: $" << originalPrice <<endl;
 if(originalPrice>200)
 {
  discount=originalPrice-(20*originalPrice)/100;
  cout<<"Price after Discount: $" << discount;
 }
 if(originalPrice<200)
 {
  cout<<"No discount applied.";
 }
}
  



