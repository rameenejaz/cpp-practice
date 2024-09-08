#include <iostream>
using namespace std;

int main () {
float sharesPurchased=1000, sharesSold=1000, purchasePricePerShare=45.5, sellPricePerShare=56.9, commision=0.02, paid=0, commisionToBrokerBought, soldStock=0, Profit=0;
paid = sharesPurchased * purchasePricePerShare;
cout<<"Amount of money Joe paid for the stock="<<paid<<'\n';

commisionToBrokerBought = 0.02*sharesPurchased*purchasePricePerShare;
cout<<"Commision given to broker while buying shares ="<<commisionToBrokerBought<<'\n';

soldStock=sharesSold*sellPricePerShare;
cout<<"The stocks are sold at a price of "<<soldStock<<'\n';

Profit= (sharesPurchased*purchasePricePerShare)-(commisionToBrokerBought)+(sharesSold*sellPricePerShare) + (sharesSold*sellPricePerShare) + (0.02*sharesSold*sellPricePerShare);
cout<<"The profit earned by Joe is "<<Profit<<'\n';

if (Profit<0) {
    cout<<"Joe lost money";
} 





}
