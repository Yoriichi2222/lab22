# proga
lab №2

# Отчет 
## Задание
Сложность:
  Rare
   
    1. Напишите программу по варианту, используя оператор цикла while (нечётные варианты) или do while (чётные варианты).
    2. Напишите программу, используя оператор цикла for.
    3. Постройте график с использованием gnuplot.
    4. Составьте блок-схемы.
    5. Оформите отчёт в README.md. Отчёт должен содержать:
        5.1 Задание
        5.2 Описание проделанной работы
        5.3 Скриншоты результатов
        5.4 Блок-схемы
        5.5 График функции
        5.6 Ссылки на используемые материалы

## Этапы работы
 ## Вариант - 6
 ![Alt text](image.png)
 ### 1. Напишите программу по варианту, используя оператор цикла while (нечётные варианты) или do while (чётные варианты).
 ```
#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.0, y;
    double eps;
    double h;
    scanf("%lf", &h);
    eps = h / 2.0;
    printf("x\t\ty\n");
do {
    if(x <= 1.0 + eps)
          y = 8 * pow(x, 3) * cos(x);
        else
          y = log(1 + sqrt(x)) - cos(x);
        printf("%f\t%f\n", x, y);
        x = x + h;
} while(x >= 0.0 && x <= 2.0 + eps);
  return 0;
}
```
 ### 2. Напишите программу, используя оператор цикла for.
 ```
 #include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.0, y;
    double eps;
    double h;
    scanf("%lf", &h);
    eps = h / 2.0;
    printf("x\t\ty\n");
    for(x = 0.0; x <= 2.0 + eps; x = x + h)
    {
        if(x <= 1.0 + eps)
          y = 8 * pow(x, 3) * cos(x);
        else
          y = log(1 + sqrt(x)) - cos(x);
        printf("%f\t%f\n", x, y);
    }
    return 0;
}
 ```

 ### Результат программы
 ![Alt text](image-1.png)

 ### 3. Постройте график с использованием gnuplot.
 ![Alt text](image-2.png)
 
 ### 4. Составьте блок-схемы.
![Alt text](image-3.png)

 `Блок-схема для двух кодов одинаковая` 

  ### Список использованных источников.
  1. https://bnar.ru/5-sajtov-dlya-sozdaniya-blok-shem-onlajn-i-besplatno/
  2. https://habr.com/ru/companies/ruvds/articles/517450/
  3. https://en.wikibooks.org/wiki/LaTeX/Mathematics