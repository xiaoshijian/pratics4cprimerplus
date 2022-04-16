// #include <iostream>
// int main() {
//     std::cout << "hello, world\n";
//     return 0;
// }


// pratice for 9.2
#include <stdio.h>
 
int gear(int a, int b);
void stuff_it(double x, double * y);
void dcount(int count);

int main(void)
{
 int c;
 int count = 50;
 int a = 5, b=10;
 double x=1.3, y=1.5;
 dcount(count);
 c = gear(a, b);
 printf("c: %d\n", c);
 stuff_it(x, &y);
 printf("y: %fd\n", y);
 return 0;
}

void dcount(int count)
{
    int zero = 0;
    for (int c = 0; c < count; c++)
    {
        printf("%d", zero);
    }
    printf("\n");
    return;
}

int gear(int a, int b)
{
    int c = 20;
    return c;
}

void stuff_it(double x, double * y)
{
    *y = x;
    return;
}


#include <stdio.h>
 

char n_to_char(int n);
int digits(double a, int b);
int random(void);

int main(void)
{
    int n = 65;
    double a = 1.50;
    int b = 2;
    char nchar;
    int c, r;
    nchar = n_to_char(n);
    c = digits(a, b);
    r = random();
    printf("output of n_to_char: %c\n", nchar);
    printf("output of digits: %d\n", c);
    printf("output of random: %d\n", r);
    return 0;
}


// 9.3
char n_to_char(int n)
{
    return char(n);
}

int digits(double a, int b)
{
    int c = 10;
    return c;
}
int random(void)
{
    int c = 20;
    return c;
}

int add(int a, int b);
int main(void) {
    int a, b;
    int c;
    c = add(a, b);
    while (scanf("%d, %d", &a, &b) != 2)
    {
        scanf("%*s");
        printf("please input two interger number");
    }
    printf("sum of a and b is %d", c);
    return 0;
    
}

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int add(int a, int b);
void alter(int a, int b, int * sum, int * diff);
int main(void) {
    int a=1, b=2;
    int c;
    int * sum;
    int * diff;
    c = add(a, b);
    // while (scanf("%d, %d", &a, &b) != 2)
    // {
    //     scanf("%*s");
    //     printf("please input two interger number");
    // }
    // printf("sum of a and b is %d", c);
    alter(a, b, &sum, &diff);
    printf("sum of a and b is %d and diff of a and b is %d", sum, diff);
    return 0;
    
}

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// float add2(float a, float b)
// {
//     float c;
//     c = a + b;
//     return c;
// }

void alter(int a, int b)
{
    int sum, diff;
    
    sum = a + b;
    diff = a - b;
    a = sum;
    b = diff;
    return;
}
