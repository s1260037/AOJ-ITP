#include<stdio.h>
int main(){
  while(1){
    int H;
    int W;
    scanf("%d %d", &H, &W);
    if(W == 0 && H == 0)break;
    int h ,w;
    for(h = 1 ; h <= H ; h++){
      for(w = 1 ; w < W ; w++){
	printf("#");
      }
      printf("#\n");
    }
    printf("\n");
  }
  return 0;
}
