#include <stdio.h>

int main(void){
    float taxable_income, tax_amount;
    start:
    printf("Enter your taxable income: ");
    scanf("%f", &taxable_income);

    if(taxable_income < 750)
        tax_amount = taxable_income * 1 / 100;
    else if(taxable_income >= 750 && taxable_income < 2250)
        tax_amount = 7.50f + (taxable_income - 750) * 2 / 100;
    else if(taxable_income >= 2250 && taxable_income < 3750)
        tax_amount = 37.5f + (taxable_income - 2250) * 3 / 100;
    else if(taxable_income >= 3750 && taxable_income < 5250)
        tax_amount = 82.5f + (taxable_income - 3750) * 4 / 100;
    else if(taxable_income >= 5250 && taxable_income < 7000)
        tax_amount = 142.5f + (taxable_income - 5250) * 5 / 100;
    else if(taxable_income >= 7000)
        tax_amount = 230.0f + (taxable_income - 7000) * 6 / 100;

    printf("The tax amount is: %.2f\n", tax_amount);
    goto start;
}
