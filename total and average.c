#include<stdio.h>
void
main ()
{
  float m1, m2, m3, total, average;
  printf ("enter the marks m1\t m2\t m3\t");
  scanf ("%f%f%f", &m1, &m2, &m3);
  total = m1 + m2 + m3;
  average = total / 3;
  printf ("the total is:%f\t the average is:%f\t", total, average);
}
