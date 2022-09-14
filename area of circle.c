#include<stdio.h>
void
main ()
{
  float area, r;
  printf ("enter the radius\t");
  scanf ("%f", &r);
  area = 3.14 * r * r;
  printf ("the area of circle is:%f", area);
}
