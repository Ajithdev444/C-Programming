#include<stdio.h>
void
main ()
{
  float area, b, h;
  printf ("enter the breadth and height\t");
  scanf ("%f%f", &b ,&h);
  area = 0.5 * b * h;
  printf ("the area of triangle is:%f", area);
}
