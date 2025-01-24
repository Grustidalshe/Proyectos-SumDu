#include <stdio.h>

int main()
{
    double num1, num2, result; //оголошення змшнних
    printf("Enter the first number: "); //Повідомлення для коритувоча
    scanf("%lf", &num1); // Запис першого числа

    printf("Enter the second number: "); //Повідомлення для коритувоча
    scanf("%lf", &num2); // Запис другого числа

// Виконання операцій та виведення результату
    result = num1 + num2; // Додавання
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);

    result = num1 - num2; // Віднімання
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    
    result = num1 * num2; // Множення
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);

    result = num1 / num2; // Ділення
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);

    return 0;
}
