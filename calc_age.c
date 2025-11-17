/*------------------------------------------------------
* Filename: calc_age.c
* Description: exercise
* Author: Amittai Kalisky
-------------------------------------------------------*/
#include <stdio.h>

/*------------------------------------------------------
* Function Name - main
* Function Purpose - gets current date and birth date, returns age in days, months and years.
* Author - Amittai Kalisky
-------------------------------------------------------*/
int main() {
    unsigned int current_date_days, current_date_months, current_date_years;
    unsigned int birth_date_days, birth_date_months, birth_date_years;
    unsigned int age_days;
    double age_months, age_years;
    /*get dates*/
    printf("Enter current date:\n");
    scanf("%d/%d/%d", &current_date_days, &current_date_months, &current_date_years);
    printf("Enter birth date:\n");
    scanf("%d/%d/%d", &birth_date_days, &birth_date_months, &birth_date_years);
    /*calculate difference*/
    age_days = current_date_days - birth_date_days + 30*(12*(current_date_years - birth_date_years) + (current_date_months - birth_date_months));
    age_months = age_days / 30.0;
    age_years = age_months / 12.0;
    printf("Amittai's age in days %d\n", age_days);
    printf("Amittai's age in months %f\n", age_months);
    printf("Amittai's age in years %f\n", age_years);

    return 0;
}