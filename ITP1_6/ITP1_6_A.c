#include<stdio.h>
int main(){
  int n , i , j;
  scanf("%d", &n);
  int date[n];
  for(j = 0 ; j <= n - 1 ; j++){
    scanf("%d", &date[j]);
  }
  for(i = n - 1 ; i >= 0 ; i--){
    if(i != n - 1){
      printf(" ");
    }
    printf("%d", date[i]);
  }
  printf("\n");
  return 0;
}
