#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *dosya;

void Hunerler ( float itemPrice, float* donationTotal , float* profitTotal)
{
float don,profit;
profit = floor(itemPrice);
*profitTotal = profit + *profitTotal;
don = itemPrice - profit;
*donationTotal = don + *donationTotal;
}

int main()
{
float itemPrice, donationTotal, profitTotal ;
int i;
dosya = fopen("dosya.txt", "a");
for( i=0; i<50; i++ )
{
itemPrice = rand()%2000;
itemPrice = itemPrice/100;
Hunerler ( itemPrice, &donationTotal, &profitTotal);
fprintf(dosya, "Item =  %.2f\n", itemPrice);
}
fprintf(dosya, "Donation = %.2f\n", donationTotal);
fprintf(dosya, "Profit = %.2f\n" , profitTotal);
return 0;
}

