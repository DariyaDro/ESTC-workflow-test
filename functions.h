#include <stdio.h>
struct vector{
double a;
double b;
double c;
};
vector sum(vector* v1, vector* v2){
  vector res;
  res.a=v1->a+v2->a;
  res.b=v1->b+v2->b;
  res.c=v1->c+v2->c;
  return res;
}
double sub(vector* v1, vector*v2){ // скалярное произведение
  return v1->a*v2->a+v1->b*v2->b+v1->c*v2->c;
}
