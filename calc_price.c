/*------------------------------------------------------
* Filename: calc_price.c
* Description: exercise
* Author: Amittai Kalisky
-------------------------------------------------------*/
#include <stdio.h>

/*------------------------------------------------------
* Function Name - main
* Function Purpose - get inputs about the package and then calculate and print price and weight in kg and size. 
* Author - Amittai Kalisky
-------------------------------------------------------*/
int main() {
    /*length, width in CM. weight in GRAM. price in NIS. size in Squared CM*/
    float length, width, weight, price, size;
    printf("Enter package length:\n");
    scanf("%f", &length);
    printf("Enter package width:\n");
    scanf("%f", &width);
    printf("Enter package weight:\n");
    scanf("%f", &weight);

    size = length * width;
    price = 5.5 + 11 * (weight / 1000) + 0.03 * (length * width) + 0.01 * (length * width / (weight / 1000));
    printf("size of the package is %.2f Squared CM\n", size);
    printf("weight of the package is %.2f KG\n", weight/1000);
    printf("price of the package is %.2f NIS\n", price);
    return 0;
}