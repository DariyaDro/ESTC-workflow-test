#include "functions.h"

struct vector sum(struct vector* v1, struct vector* v2){
    struct vector res;
    res.a=v1->a+v2->a;
    res.b=v1->b+v2->b;
    res.c=v1->c+v2->c;
    return res;
}

double dot(struct vector* v1, struct vector*v2){
    return v1->a*v2->a+v1->b*v2->b+v1->c*v2->c;
}

struct vector sub(struct vector* v1, struct vector* v2){
    struct vector res;
    res.a=v1->a-v2->a;
    res.b=v1->b-v2->b;
    res.c=v1->c-v2->c;
    return res;
}

struct vector cross(struct vector* v1, struct vector* v2){
	  struct vector res;
	  res.a=v1->b*v2->c - v2->b*v1->c;
	  res.b = v1->c*v2->a - v1->a*v2->c;
	  res.c = v1->a*v2->b - v1->b*v2->a;
	  return res;
}
