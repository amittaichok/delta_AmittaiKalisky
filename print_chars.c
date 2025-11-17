/*------------------------------------------------------
* Filename: print_chars.c
* Description: exercise
* Author: Amittai Kalisky
-------------------------------------------------------*/
#include <stdio.h>

/*------------------------------------------------------
* Function Name - print_chars_by_num
*
* Function Purpose - print chars by num, according to the instructions.
*
* Parameters –  num (int)
*
* Return Values - void
*
* Author - Amittai Kalisky
-------------------------------------------------------*/
void print_chars_by_num(int num){
    char char_to_print;
    if (num % 2 == 0){
        char_to_print = '*';
    }
    else if (num % 3 == 0){
        char_to_print = '^';
    }
    else if (num % 5 == 0){
        char_to_print = '%';
    }
    else{
        char_to_print = '@';
    }
    for(int j = 0; j < num; j++){
        for (int i = 0; i < num; i++){
            printf("%c", char_to_print);
        }
        printf("\n");
    }
}
/*------------------------------------------------------
* Function Name - main
* Author - Amittai Kalisky
-------------------------------------------------------*/
int main() {
    int num;
    /*check input*/
    printf("Please enter a number (positive whole):\n");
    if (scanf("%d", &num) != 1){
        printf("Bad input!\n");
        return 1;
    }
    if (num < 0){
        printf("Bad input!\n");
        return 1;
    }
    /*call function that does the work by the instructions*/
    print_chars_by_num(num);

    return 0;
}