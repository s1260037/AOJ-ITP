#include<stdio.h>
int main(){
  int i = 1;
  int x;
  for(i = 1 ; i <= 10000 ; i++){
    scanf("%d",&x);
    if(x == 0)break;
    printf("Case %d: %d",i ,x);
  }
  return 0;
}
