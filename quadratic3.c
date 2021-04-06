#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;
    printf("This is a quadratic equations' calculator\n");
    printf("Please enter the first value for a --> ");
    scanf("%lf",&a);
    printf("Please enter the second value for b --> ");
    scanf("%lf",&b);
    printf("Please enter the second value for c --> ");
    scanf("%lf",&c);
    
    printf("You have the quadratic expression: %fx^2 + %fx + %f\n",a ,b ,c);
    double delta = ( b * b ) - ( 4 * a * c);
    double root1 = (-b + sqrt( delta)) / ( 2 * a );
    double root2 = (-b - sqrt(delta)) / ( 2 * a );

    if( delta == 0)
    { 
      printf("root1 is equal to root2\n");
      printf("The root is: %f\n",root1);
    }
    if( delta > 0 )
    {
      printf("There are two real roots\n");
      printf("root1: %f\nroot2: %f\n",root1, root2);
    }
    if( delta < 0 )
    {
      printf("The roots are imaginary numbers.\n");
    }
    return 0;
}
