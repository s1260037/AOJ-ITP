#include<stdio.h>
int main(){
  for(;;){
    int H,W;
    scanf("%d %d", &H, &W);
    if(H == 0 && W == 0)break;
    int h,w;
    for(h = 1 ; h <= H/2 ; h++){
      for(w = 1 ; w <= W/2 ; w++){
	printf("#.");
      }
      if(W%2 == 1){
	printf("#");
      }
      printf("\n");
      for(w = 1 ; w <= W/2 ; w++){
	printf(".#");
      }
      if(W%2 == 1){
	printf(".");
      }
      printf("\n");
    }
    if(H%2 == 1){
      for(w = 1 ; w <= W/2 ; w++){
	printf("#.");
      }
      if(W%2 == 1){
	printf("#");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
