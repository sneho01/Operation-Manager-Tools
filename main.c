#include <stdio.h>
int main()
{
    float x1, x2, ans;
    int opt;
    printf("\t****************************************\n");
    printf("\t*\tOperations Manager Tool        *\n");
    printf("\t*\t1. Add                         *\n");
    printf("\t*\t2. Subtract                    *\n");
    printf("\t*\t3. Multiply                    *\n");
    printf("\t*\t4. Divide                      *\n");
    printf("\t*\t5. Modulus                     *\n");
    printf("\t*\t6. Exit                        *\n");
    printf("\t****************************************\n");
    printf("Select an option (1-6): ");
    scanf("%d", &opt);

if(opt < 1 || opt > 6){
    printf("Invalid selection. Please select a number between 1 and 6.");
    return 0;
}else if (opt == 6){
    printf("Exiting the program. Goodbye!");
    return 0;
}else{
    printf("Enter the first number: ");
    scanf("%f", &x1);
    printf("Enter the second number: ");
    scanf("%f", &x2);
}

switch (opt)
{
case 1:
    ans = x1 + x2;
    break;
case 2:
    ans = x1 - x2;
    break;
case 3:
    ans = x1 * x2;
    break;
case 4:
    if (x2 == 0){
        printf("Division by zero is not allowed. Please try again.\n");
        return 0;
    }
    else{
    ans = x1 / x2;
    }
    break;
case 5:
    if (x2 < 1 && x2 > -1){
        printf("Modulus by zero is not allowed.\n");
        return 0;
    }
    else{
    ans = (int)x1 % (int)x2;
    }
    printf("The result of %d %% %d (from %.2lf %% %.2lf) is: %d", (int)x1, (int)x2, x1, x2, (int)ans);
    return 0;
default:
    break;
}

printf("The result is: %.2f\n", ans);
return 0;
}