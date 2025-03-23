#include <stdio.h>
#include <math.h>

int main(){
    int popularityland;
    int size;
    int homeVal;
    printf("Enter popularity of the land");
    scanf("%d",&popularityland);
    printf("\nEnter size");
    scanf("%d", & size);
    homeVal = ( pow(popularityland,3) + pow(size,2) )* 10000;
    printf("\nHome value = %d ", homeVal);
    return 0;
}