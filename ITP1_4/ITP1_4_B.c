#include<stdio.h>
int main(){
  double pie = 3.141592653589;
  double r;
  scanf("%lf", &r);
  double area = (double)pie*r*r;
  double circle = (double)2*pie*r;
  printf("%f %f\n", area, circle);
}
