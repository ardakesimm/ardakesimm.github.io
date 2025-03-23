#include <stdio.h>
#include <math.h>

int main(){
    computeHomeValue2();
}

int computeHomeValue (int popularityland, int size){
    return ( pow(popularityland,3) + pow(size,2) )* 10000;

}

void computeHomeValue2 (void){
    int popularityland;
    int size;
    int homeVal;
    printf("Enter popularity of the land");
    scanf("%d",&popularityland);
    printf("\nEnter size");
    scanf("%d", & size);
    homeVal = computeHomeValue(popularityland,size);
    printf("\nHome value = %d ", homeVal);
}
