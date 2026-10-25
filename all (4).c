#include <stdio.h>
#include <locale.h>
#include <math.h> 


int task0(int a, char c, char sym_s, char z);
int task1(int n, int m);
int task1A(int h);
int task2();
int task3(); 

int main() {
    setlocale(LC_ALL, "Russian");
    
    int a, n, m, h;       
    char c, sym_s, z; 
    
    printf("Введите количество символов: ");
    if (scanf("%d", &a) != 1) return 1;
   
    printf("Введите первый символ: ");
    if (scanf(" %c", &c) != 1) return 1; 
    
    printf("Введите второй символ: ");
    if (scanf(" %c", &sym_s) != 1) return 1;

    printf("Введите третий символ:\n");
    if (scanf(" %c", &z) != 1) return 1;
    
    task0(a, c, sym_s, z);

   
    printf("Введите значения m (начальное) и n (конечное) через пробел: ");
    if (scanf("%d %d", &m, &n) != 2) return 1; 
    
    task1(n, m);


    
    printf("Введите максимальное целое число m для степеней 2: ");
    if (scanf("%d", &h) != 1) return 1;
    
    task1A(h);


    task2();  
    
    task3();

    return 0;
}

int task0(int a, char c, char sym_s, char z) {
    printf("\nЗадание 0: ");
    for (int start = 1; start <= a; start++) {
        putchar(c);
    }
    putchar('\n');

    printf("Задание 0.1: ");
    putchar(sym_s);
    for (int start = 1; start <= a; start++) {
        putchar(c);
    }
    putchar(sym_s);  
    putchar('\n');

    printf("Задание 0.2: ");
    for (int start = 1; start <= a; start++) {
        putchar(c);
        putchar(z);
    }
    putchar('\n');
 
    return 0;
}


int task1(int n, int m) {
    int s = 0; 
    int k = 1; 
    
    printf("\nЗадание 1\n");
    for (int i = m; i >= n; i--) {
        s += i; 
        printf("выполнено %d раз, текущее i = %d\n", k++, i);
    }
    printf("\nРезультат s = %d\n", s);
    
    return 0;
}


int task1A(int h) {
    long long res = 1; 
    
    printf("\nЗадание 1А\n");
    for (int i = 0; res <= h; i++) {
        printf("2^%2d = %10lld\n", i, res);
        res *= 2; 
    }
    res /= 2;
    printf("результат: %.1fK\n", (double)res / 1024.0);

    return 0;
}


int task2() {
    double x_start = 2.0; 
    double x_end = 4.0;   
    double step;          

    printf("\nЗадание 2\n");
    printf("Вычисляемая функция: y = 2^x - 2*x^2 - 1\n");
    printf("Интервал изменения x: [2.0; 4.0]\n");
    
    printf("Введите значение шага табуляции (например, 0.2): ");
    if (scanf("%lf", &step) != 1 || step <= 0) {
        printf("Ошибка: неверное значение шага!\n");
        return 1;
    }

    printf("\n+--------+--------+\n");
    printf("|   x    |  f(x)  |\n");
    printf("+--------+--------+\n");

    for (double x = x_start; x <= x_end + (step / 10.0); x += step) {
        double fx = pow(2.0, x) - 2.0 * (x * x) - 1.0;
        printf("| %6.2f | %6.2f |\n", x, fx);
    }
    
    printf("+--------+--------+\n");

    return 0;
}


int task3() {
    double p = 1.0; 

    printf("\nЗадание 3\n");
    printf("Вычисление произведения (1 + sin(0.1)) * (1 + sin(0.2)) * ... * (1 + sin(10))\n");

    
    for (int i = 1; i <= 100; i++) {
        double x = i * 0.1; 
        p *= (1.0 + sin(x)); 
    }

    printf("Результат вычисления выражения: %f\n", p);

    return 0;
}

