#include <stdio.h>

int main()
{
    double scaleF; // Температура в Фаренгейтах
    double scaleC; // Температура в Цельсіях
    int selection; // Змінна для вибору користувача

// Користувач обирає який тип температури він хоче ввести
    printf("Enter your choice (1 or 2):\n");
    printf("1-Temperature in Fahrenheit\n");
    printf("2-Temperature in Celsius\n");
    printf("Enter (1 or 2): ");
    scanf("%d", &selection); //запис обраного вибору

    // Очищюю буфер вводу від залишкових символів
    while(getchar() != '\n');
    // Якщо користувач зазначив температуру у Фаренгейтах, переводжу її у Цельсій 
    if (selection == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &scaleF);
    // Конвертую температуру з Фаренгейта в Цельсій
        scaleC = (scaleF - 32) * 5.0/9.0;
    //Вивод результату
        printf("Temperature in Fahrenheit: %.2lf\n", scaleF);
        printf("Temperature in Celsius: %.2lf\n", scaleC);    
    }
    // Якщо користувач зазначив температуру у Цельсіях, переводжу її у Фаренгейти 
    else if (selection == 2)
    {
        printf("Enter temperature in Celsius\n");
        scanf("%lf", &scaleC);
    // Конвертую температуру з Цельсія в Фаренгейт
        scaleF = scaleC * 9.0 / 5.0 + 32;
    //Вивод результату
        printf("Temperature in Celsius: %.2lf\n", scaleC);
        printf("Temperature in Fahrenheit: %.2lf\n", scaleF);
    }
    else // Якщо користувач ввів некоректний вибір
    {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }
    return 0; 
}
