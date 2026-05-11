#include <stdio.h>
 
int main() 
{
 int product1, product2, units_of_product1, units_of_product2;
 float price1, price2, total;
 
 scanf("%d %d %f", &product1, &units_of_product1, &price1);
 scanf("%d %d %f", &product2, &units_of_product2, &price2);
 
 total = (units_of_product1 * price1) + (units_of_product2 * price2);
    
 printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}