#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, ans;
    int opt;
    printf("\t****************************************\n");
    printf("\t*\tOperations Manager Tool        *\n");
    printf("\t*\t1. Add                         *\n");
    printf("\t*\t2. Subtract                    *\n");
    printf("\t*\t3. Multiply                    *\n");
    printf("\t*\t4. Divide                      *\n");
    printf("\t*\t5. Modulus                     *\n");
    printf("\t*\t6. Absolute Difference         *\n");
    printf("\t*\t7. Squre Root Calculation      *\n");
    printf("\t*\t8. Distance Calculation        *\n");
    printf("\t*\t9. Exit                        *\n");
    printf("\t****************************************\n");
    printf("Select an option (1-9): ");
    scanf("%d", &opt);

if(opt < 1 || opt > 9){
    printf("Invalid selection. Please select a number between 1 and 6.");
    return 0;
}else if (opt == 9){
    printf("Exiting the program. Goodbye!");
    return 0;
}else if(opt == 7){
    printf("Enter a non-negative number: ");
    scanf("%f", &x1);
}else if(opt == 8){
    printf("Enter the coordinates\n");
    printf("x1 --> ");
    scanf("%f", &x1);
    printf("y2 --> ");
    scanf("%f", &y2);
    printf("x2 --> ");
    scanf("%f", &x2);
    printf("y2 --> ");
    scanf("%f", &y2);
}
else{
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
case 6:
    ans = x1 - x2;
    if(ans < 0){
        ans = -ans;
    }
    break;
case 7:
    if(x1 < 0){
        printf("Invalid Input. Enter a non-negative number.");
        return 0;
    }else{
    ans = sqrt(x1);
    }
    break;
case 8:
    ans = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("The distance between the points is: %.2f", ans);
    return 0;
default:
    break;
}

printf("The result is: %.2f\n", ans);
return 0;
}