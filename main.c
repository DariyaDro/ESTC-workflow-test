#include <stdio.h>
#include "functions.h"

int main() {
  struct vector v1;
  v1.a=1; v1.b=2; v1.c=2.5;
  struct vector v2;
  v2.a=3; v2.b=4; v2.c=4.5;
  struct vector v_res=sum(&v1, &v2);
  printf("Sum: (%.3f, %.3f, %.3f)", v_res.a, v_res.b, v_res.c);
  v_res = sub(&v1, &v2);
  printf("\nSub: (%.3f, %.3f, %.3f)", v_res.a, v_res.b, v_res.c);
  printf("\nDot: %.3f", dot(&v1, &v2));
  v_res = cross(&v1, &v2);
  printf("\nCross: (%.3f, %.3f, %.3f)\n",  v_res.a, v_res.b, v_res.c);
  return 0;
}

