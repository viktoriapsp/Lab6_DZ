# Домашнее задание

## Условие задачи

1. Написать программу, которая по заданной температуре воды
определяет ее состояние – пар, жидкое, лед.
2. Составить программу, которая проверяет принадлежит ли заданная пользователем точка с
координатами (х, у) заданным закрашенным (заштрихованным) областям, показанным на рисунках
в табл., и выводит на экран сообщение.
<img width="662" height="476" alt="image" src="https://github.com/user-attachments/assets/4a140ea8-0aa2-4188-9c44-f90123f111e7" />

## Алгоритм и блок-схема

### Задание 1

### Алгоритм

1. Начало.
2. Ввести значение переменной `t` — температуру воды.
3. Проверить условие `t <= 0`.
4. Если условие выполняется, вывести сообщение, что вода находится в состоянии «ЛЕД».
5. Иначе проверить условие `t > 0 && t < 100`.
6. Если условие выполняется, вывести сообщение, что вода находится в состоянии «ЖИДКОСТЬ».
7. Иначе вывести сообщение, что вода находится в состоянии «ПАР».
8. Конец.

### Блок-схема

<img width="832" height="832" alt="Диаграмма без названия drawio (1)" src="https://github.com/user-attachments/assets/0a708218-196e-4c7f-9fe7-610181580822" />
[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MCOqj_EnUu5ix6ne9RAr%22%3E7Vpbc5s4FP41nrYPySBxMTw6JO7uzGan3exMdx8VIxtajFgZN3Z%2B%2FeoKCLBrZ6Fhx%2BlMZXR0dOFcP50wscP17iNFeXxPIpxOoBXtJvbtBEJg2Rb74ZS9pLieLwkrmkSKqSI8JM9Yz1TUbRLhjcFYEJIWSW4SFyTL8KIwaIhS8mSyLUlq7pqjFW4RHhYobVO%2FJFERS6oPpxX9F5ysYr0z8AI5skaaWb3JJkYReaqR7LuJHVJCCvm03oU45cLTcpHz5gdGy4NRnBWnTLDs5Wd6tfj94%2F3nr88x%2BPLHHH27suUqOGpJoVpWkTZkSxf4yFqar9hr4fFlH1SX0CImK5Kh9K6i3lCyzSLMT2ixXsXzGyE5IwJG%2FIqLYq8MA20LwkhxsU7VqDIJRFe4OHI2KPm%2Bo3SrzlZqgJkuJmtc0D1joDhFRfLdFAZSNrQq%2BSoxswcl6TOkfkTINeGlKTNyLqSnOCnwQ46E9J%2BYn5kiYIaV41%2BzDXMUQyjGy3ppwVlzlBm7eP9suf3dLElWXG2EkGeMAfj5Tqyjx9nTSv2KhR5LAlNccCtai7ezafUcyNE7PYnJ6rG5EKPJQ2myODmmBd7VBNNWVFxzOl952FPloMDzJE2tYttKwCoMTa2BVOv26FBwxA7ljMqh4CkOJfyEPTIulKY4JSuK1uyNc0wTdgxMm2OfqoHzfXCZ7LDOZ90%2ByX2DtWDiCz%2B5EZSbO9E6XAcvcgavwxkCy3QGEBjOUCbb3vUy7dEbnBF7gzcqbwDwQsQOwKjk7pwShWhM1o%2FbTa9pPaf4cFZfonWSMk%2BfvQvRZoGiBDHee5KRd428H%2BR8zoKkhAoUYFviXxsEsMDEqWjNTyyzON9VsOqkLo70H3I6cM5P6vZgcSzo0aG8ETuUPyp%2FAt6FiB24o5K7d4lxTIUqzlcRZdvqWh0RkF2a%2Bg2AsCMAOiaQc3XAUwHQcd2BTAL2WSjwX8MV2Snp%2Fq9652%2B1mOjc7ozeXvVOdOBDCj3ZX8XUGaVoX2PISZIVm9rKnzihUv%2FUdw31T%2F1GBajBz8zjenpsBnuQZ6gMpXyZl9uOf0o4Gdvl7KyIVI8GiqERo5rDMmI0qi4ycE14MVPHLouuHt%2BzxUMZmcTPh87KTE6Zrpc%2FLPQ0loY8x4YieOmHwOne4P3Bks15WwLPljtxK5C%2F3RvWKPyqPBdXZVFYuvG5xHlX3pld0YainWtKyVxystau0V2pNlnPotWu7jVcivUZj22uI27m1TqgdmOHeop5jZcTOzfiQ7e1E7qtiX7t5EC082oXJYHyDCUPrFHmtV181XJNtN%2Fa0kIuK3nWxA0z8b%2Bumm4TCGVSHMz4PvzA%2BPpIuHY74ULbTLje1Ey4njXUjUNn9uNRk71fYca6rlC4KSj5hkMp%2FNuMZFiEwDRtkFCarDLWXbAdRVzlEkwWKJ2pgXUSRR3ZuB09y6KwckT4Io10KMQ7rg%2FHH0ofsM%2FCLmhr8iddRk6EKEq81rXjAKdn1AKm7rWJW3wHXgdHkQt0rOMzTOTSmm%2FDQ%2FPLY0uMp%2BY1jKUHEASOmMtYUFBMaPLMIAnSU1oBgRsVxyt%2FirgjDJFjGLWG94ak3pDU0EjqAHIZHZKSohYnCZwLQ1IdpQsIzNTSTNzeUJULYP%2FfgVRp%2BoNAKNhIjbY7GKQ96e8jY9bEz4C0zZrecPqAsE9I674WpD25PDea%2BrqW1Zix4BuOu0wc1wVnLgLHHajQBZ5o%2FSoTBzP1VRuvkYm9ZmL9WXhhKK%2BrXqb%2FTqTBhe8ZyWzAetlJf2UYM7gYFuY5DZjnBIPBilf7upUnj8O5qfZ1q3fW1601f1dfuoq4NPNqztT1Xas8zsDftWpQrQtb8Hy1sm71Fbqsd1Xf8tt3%2FwI%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)


### Задание 2

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

### Задание 1

**Пример 1: вода находится в состоянии льда**

```text
Введите температуру воды (в градусах Цельсия): -5
При температуре -5.00 градусов вода находится в состоянии: ЛЕД
```

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
