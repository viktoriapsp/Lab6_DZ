# Домашнее задание

## Условие задачи

1. Написать программу, которая по заданной температуре воды
определяет ее состояние – пар, жидкое, лед.
2. Составить программу, которая проверяет принадлежит ли заданная пользователем точка с
координатами (х, у) заданным закрашенным (заштрихованным) областям, показанным на рисунках
в табл., и выводит на экран сообщение.
<img width="662" height="476" alt="image" src="https://github.com/user-attachments/assets/4a140ea8-0aa2-4188-9c44-f90123f111e7" />

## Алгоритм и блок-схема

### Задание 

### Алгоритм

1. Начало.
2. Ввести значения переменных `x` и `y` — координаты точки.
3. Проверить условие принадлежности области: `x >= -1 && x <= 1 && y >= 0 && y <= (1 - x * x)`.
4. Если условие выполняется, вывести сообщение о принадлежности точки заштрихованной области.
5. Иначе вывести сообщение о том, что точка не принадлежит заштрихованной области.
6. Конец.

### Блок-схема

<img width="737" height="782" alt="Диаграмма без названия drawio (2)" src="https://github.com/user-attachments/assets/49432f46-7464-4907-a294-17e87bf2a344" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22yN3vE6vSudZTsTGwz3SR%22%3E5Vrdc9o4EP9rmIabCWNb2NiPfPUuM%2B1MZ%2FJwfRVYGKfC8skigfvrT5%2B2BCYhiUnpNQ%2BytFrvrnZX%2B5NMemC62f1JYbn%2BSlKEe4GX7npg1gsCf5gA%2FhCUvaLEo0ARMpqnmqkh3Of%2FIk30NHWbp6hyGBkhmOWlS1ySokBL5tAgpeTJZVsR7GotYYaOCPdLiI%2Bpf%2BcpW%2BtVBKOG%2FhfKs7XR7EeJmtlAw6xXUq1hSp4sEpj3wJQSwlRvs5siLJxn%2FKLe%2B3xitjaMooKd88L3%2BeM6fZiuRtXd9gvJwrvv2cOtjg5Kj7zQiNWkimzpEj0jy%2FCxvXGeEHuvh4SyNclIAfG8oU4o2RYpEhZ6fNTwfCGk5ESfEx8QY3udGHDLCCet2QbrWZ0SkGaIPWObTrpHiLfatjoCPHUR2SBG95yBIgxZ%2Fug6A%2Bocymq%2Bxs28oz39Cq8%2F42TLeRjzJBdOelrnDN2XUHr%2Fie8z1wU8sUp0V1R8ozhOsRfL3ZvMZOuJdjxq%2BslEtnP9EqIM7Sybjn20tvI91sn91OwN3yS8lgKGeqwrgBl27tWww1wOrjiXh1eVy8E5uSxTlHc5F8QYYZJRuOErLhHNuRmIHs59ayZen%2F6rfIcMlJzeDrKdqHYu26FM2mC672wrxKG7FbzRIHQ2gx9dajckHe6G4RXvhviqdoPv%2FyZuN%2BezK%2FH78JwqRNdks9hW3SBqEGEmKhhFjpLon6040E1WpGC3K7jJMd%2Fp457AxAhuhB7NMIXVEqY55FNfSUEOp6VOT0qpZKiEjKSUU7US3sv0UxpTlbBotWZJMKFKBhYV6zaF9McNzRY33C7ucc88%2BuopZgIwUgO70%2B%2B3GrCzF6hMEuo9cdLxjHULatmrWFV7PDzi9xwNuNHQmYL9iSV4F1FgrcAw87xX8XNjKlJA3m9kBGe278EChSu4OA7HjSVTvd8q89w8YRQWld5aTXqEoc4Kq3MiPUSQbnUQ%2FxDP%2FgsGcrLcWIb6BjiWkTvA4yDyB4ELyUGUDEDsYHKN5N2jQ5dH1Pia0eFdZ1Qdmltv4HnPIYYUN6YU7i2GkuQFqyxt3wShkRqFh2ew0cg7iKyS2cS5NvjtoY9%2FxWPyz8Q4z6pFrUDVVmhKymO9eg0cylLmR0qq75lOMmxXcPNCtT5XpR8BXTR982xXaFHEvb2%2Brvi9WN7hJ2PZCpTitoWDYCVfEp26yDowZH0KCPVw8lnKU%2F1YtjMtVV2LRCv1T0LZRoaTv6UsGhl%2BTqnptkzeD62rVmDJn1mtmk1OWq4ZfMskpdS3jIkFczgtHG%2B2R22qr3wKny%2BWNv0X0qYDvGu5fgbAxbrw8EtMcjGgizoEOnPVuGKke8e1500gVn82MBAWfwCEmTj8jzHs0wFifTIcGp8UODV1AHjyrwMgAmkcwWVwEcQBEPihOHt%2BCLi8E020kN8MUE6G%2FychR8DP3u5pHCSDJPko%2BDjrozJfI3PrQ1v5qBglP9BUX58LUiBZNjA%2BIEF%2B4S34cMk1ylokvJgvIR7riU2epi3QclxxxNFqaDbOG%2BIBjuNhyr0RErvlH4QXiwT41SMxM5VGVZeLxCNMPiweZ33o7PSnw5e%2BGR3c37htu1M3GVWCa4IIz1j%2F%2BGjfSgQWRVaBW7QUPfer0WXOy0ESDiLgHrTe8OslHza%2F8qvDWPO%2FEmD%2BHw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы

Программа написана на языке C.

```c
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
```

## Результат работы программы

#

**Пример 2: вода находится в жидком состоянии**

```text
Введите температуру воды (в градусах Цельсия): 25
При температуре 25.00 градусов вода находится в состоянии: ЖИДКОСТЬ
```

**Пример 3: вода находится в состоянии пара**

```text
Введите температуру воды (в градусах Цельсия): 100
При температуре 100.00 градусов вода находится в состоянии: ПАР
```

### Задание 2

**Пример 1: точка принадлежит заштрихованной области**

```text
Введите координату x: 0
Введите координату y: 0.5
Точка (0.00;0.50) принадлежит заштрихованной области
```

**Пример 2: точка не принадлежит заштрихованной области**

```text
Введите координату x: 1
Введите координату y: 0.5
Точка (1.00;0.50) НЕ принадлежит заштрихованной области
```

## Информация о разработчике

Имя: Страхова Виктория Викторовна

Группа: бИЦТ-261

Вариант: 27
