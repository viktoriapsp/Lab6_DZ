#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int zadanie1()
{
    setlocale(LC_ALL, "RUS");
    double t; 
    printf("Введите температуру воды (в градусах Цельсия): ");
    scanf("%lf", &t);
    if (t <= 0)
    {
        printf("При температуре %.2f градусов вода находится в состоянии: ЛЕД\n\n", t);
    }
    else if (t > 0 && t < 100)
    {
        printf("При температуре %.2f градусов вода находится в состоянии: ЖИДКОСТЬ\n\n", t);
    }
    else 
    {
        printf("При температуре %.2f градусов вода находится в состоянии: ПАР\n\n", t);
    }

    return 0;
}

int zadanie2()
{
    setlocale(LC_ALL, "RUS");

    double x, y;
    printf("Введите координату x: ");
    scanf("%lf", &x);
    printf("Введите координату y: ");
    scanf("%lf", &y);

    // Условие для параболы: x от -1 до 1, y >= 0 и y <= 1 - x^2
    if (x >= -1 && x <= 1 && y >= 0 && y <= (1 - x * x))
    {
        printf("Точка (%.2f;%.2f) принадлежит заштрихованной области \n", x, y);
    }
    else
    {
        printf("Точка (%.2f;%.2f) НЕ принадлежит заштрихованной области \n", x, y);
    }

    return 0;
}

int main()
{
 
    zadanie1(); 
    zadanie2();
    return 0;
}