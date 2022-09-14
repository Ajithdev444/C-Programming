#include<stdio.h>
void
main ()
{
  float si, p, n, r;
  printf ("enter the values of p, n, r\n");
  scanf ("%f%f%f", &p, &n, &r);
  si = (p * n * r) / 100;
  printf ("the simple interest is :%f", si);
}
