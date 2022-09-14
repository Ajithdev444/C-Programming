#include<stdio.h>
void
main ()
{
  float a, b, temp;
  printf ("enter the two numbers");
  scanf ("%f%f", &a, &b);
  printf ("before swapping a=%f b=%f", a, b);
  temp = a;
  a = b;
  b = temp;
  printf ("after swapping a=%f b=%f", a, b);
}
