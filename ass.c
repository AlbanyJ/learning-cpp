#include <stdio.h>

int main()
{
        printf("G\n");
        char auto  new = 'G';
        printf("%c\n", new);

        int a = 15;
        int b = 5;
        
        int c;
        c = a + b;
        
        printf("%d + %d = %d\n", a ,b ,c);

        int sum = a + b;
        int times = a * b;
        int sub = a - b;
        double div = a/b;
        // printf("Sum: %d \nMultiplication: %d \nSubtraction: %d \nDivision: %f\n", sum, times, sub, div );

        printf("Sum: %d\n", sum);
        printf("Multiplication: %d\n", times);
        printf("Subtraction: %d\n", sub);
        printf("Division: %.1f\n\n", div);


        int d = 12;
        int e = 6;
        int q;
        int w;
        int s;
        int f;

        f = d += e;
        q = d -= e;
        w = d *= e;
        s = d /= e;

        printf("sum of d + e: %d\n", f);
        printf("sub of d - e: %d\n", q);
        printf("mult of d * e: %d\n", w);
        printf("div of d/e: %f\n", s);
        


    return 0;
}