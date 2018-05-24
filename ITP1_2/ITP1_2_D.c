#include<stdio.h>
int main(){
  int W;
  int H;
  int x;
  int y;
  int r;
  scanf("%d%d%d%d%d", &W,&H,&x,&y,&r);
  if(x - r < 0){
    printf("No\n");
  }
  else if(x + r > W){
    printf("No\n");
  }
  else if(y - r < 0){
    printf("No\n");
  }
  else if(y + r > H){
    printf("No\n");
  }
  else{
    printf("Yes\n");
  }
}
