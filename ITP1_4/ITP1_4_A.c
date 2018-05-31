#include<stdio.h>
int main(){
  int a;
  int b;
  scanf("%d%d", &a, &b);
  int d = a/b;
  int r = a%b;
  double f = (double)a/b;
  printf("%d %d %.8lf\n", d, r, f);
}
