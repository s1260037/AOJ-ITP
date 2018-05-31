#include<stdio.h>
int main(){
  int a;
  int b;
  int c;
  int num;
  scanf("%d%d%d",&a,&b,&c);
  while(a <= b){
    if(c % a == 0){
      num++;
    }
    a++;
  }
  printf("%d\n", num);
}
