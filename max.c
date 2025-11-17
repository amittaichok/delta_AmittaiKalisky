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
    int x = 10;
    int y = 200;
    int z;
    if (x > y){
        z = x;
    }
    else{
        z = y;
    }
    printf("%d\n", z);
    return 0;
}