/*------------------------------------------------------
* Filename: max.c
* Description: exercise
* Author: Amittai Kalisky
-------------------------------------------------------*/
#include <stdio.h>

/*------------------------------------------------------
* Function Name - main
* Function Purpose - initializes two numbers and prints the larger one.
* Author - Amittai Kalisky
-------------------------------------------------------*/
int main() {
    int x = 1000;
    int y = 200;
    int z;
    z = x > y ? x : y;
    printf("%d\n", z);
    return 0;
}