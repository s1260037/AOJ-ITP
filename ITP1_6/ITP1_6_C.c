#include<stdio.h>
int main(){
  int n, b, f, r, v;
  int i ,j, k; //カウンタ変数
  int hotel[4][3][10];
  for(i = 0 ; i < 4 ; i++){
    for(j = 0 ; j < 3 ; j++){
      for(k = 0 ; k < 10 ; k++){
	hotel[i][j][k] = 0;
      }
    }
  }
  scanf("%d", &n);
  for(i = 0 ; i < n ; i++){
    scanf("%d %d %d %d", &b, &f, &r, &v);
    hotel[b-1][f-1][r-1] += v;
    if(hotel[b-1][f-1][r-1] > 9){
      hotel[b-1][f-1][r-1] = 9;
    }
    if(hotel[b-1][f-1][r-1] < 0){
      hotel[b-1][f-1][r-1] = 0;
    }
  }
  for(i = 0 ; i < 4 ; i++){
    for(j = 0 ; j < 3 ; j++){
      for(k = 0 ; k < 10 ;k++){
	printf(" %d", hotel[i][j][k]);
      }
      printf("\n");
    }
    if(i == 3)break;
    printf("####################\n");
  }
  return 0;
}
