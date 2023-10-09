#include <stdio.h>
int main()
{
    printf("GAURAVJAIN\n");
    int quantity, discount; // discount
    float rate, total;
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter the rate :");
    scanf("%f", &rate);
    if (quantity > 1000)
        discount = 10;
    else
        discount = 0;
    total = (quantity * rate) - (quantity * rate * discount / 100);
    printf("Total expenses = Rs%.2f\n", total);
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     float centim, meter, kilometer;
//     printf("Enter length in cm:");
//     scanf("%f", &centim);
//     meter = centim / 100.0;
//     kilometer = centim / 100000.0;
//     printf("length in mtrs = %.4f\n", meter);
//     printf("length in km = %.4f\n", kilometer);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, n;

//     printf("Enter any number: ");
//     scanf("%d", &n);

//     printf("Natural numbers from 1 to %d \n", n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char ch;
//     double a, b;
//     while (1)
//     {
//         printf("first main operator use :%c");
//         printf("Enter an operator(+,-,*,/),\n"
//                " if want to exit prees y:\n");
//         scanf("%c", &ch);
//         if (ch == 'y')
//             exit(0);
//         printf("Enter  two first : ");
//         (" Second operesatio:\n ");
//         scanf("%lf%lf", &a, &b);
//         switch (ch)
//         { // for addtion only:
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
//             break;
//         case '-':
//             printf("%.1lf + %.1lf = %.1lf\n", a, b, a - b);
//             break;
//         case '*':
//             printf("%.1lf + %.1lf = %.1lf\n", a, b, a * b);
//             break;
//         case '/':
//             printf("%.1lf + %.1lf = %.1lf\n", a, b, a / b);
//             break;
//         default:
//             printf("Error ? pleses write availd operator\n");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// #define PI 3.141
// int main()
// {
//     float radius, area;
//     radius = 4;
//     area = 34;
//     printf("radius of circle\n");
//     area = PI * radius * radius;
//     printf("Area of circle : %0.4f\n", area);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     float length = 40;
//     float width = 20;
//     float area = length * width;

//     printf("The area of the rectangle is: %f \n", area);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     float side = 10; // Assuming the side length is 10 (you can change this value)
//     float area = side * side;

//     printf("The area of the square is: %f \n", area);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     float principal = 1000.0; // Example principal amount
//     float rate = 5.0;         // Example rate of interest (5%)
//     float time = 2.0;         // Example time in years

//     float simpleInterest = calculateSimpleInterest(principal, rate, time);

//     printf("Simple Interest: %.2f\n", simpleInterest);

//     return 0;
// }