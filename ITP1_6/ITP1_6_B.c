#include<stdio.h>
int main(){
  int n , i , s;
  char c;
  int data[4][13];
  for(i = 0 ; i < 4 ; i++){
    for(s = 0 ; s < 13 ; s++){
      data[i][s] = 0;
    }
  }
  scanf("%d\n", &n);
  for(i = 0 ; i < n ; i++){
    scanf("%c%d\n", &c, &s); //S=0 H=1 C=2 D=3
    if(c == 'S'){
      data[0][s-1] = 1;
    }
    else if(c == 'H'){
      data[1][s-1] = 1;
    }
    else if(c == 'C'){
      data[2][s-1] = 1;
    }
    else if(c == 'D'){
      data[3][s-1] = 1;
    }
  }
  for(i = 0 ; i < 4 ; i++){
    for(s = 0 ; s < 13 ; s++){
      if(data[i][s] == 0){
	if(i == 0){
	  printf("S %-d\n", s+1);
	}
	else if(i == 1){
	  printf("H %-d\n", s+1);
	}
	else if(i == 2){
	  printf("C %-d\n", s+1);
	}
	else if(i == 3){
	  printf("D %-d\n", s+1);
	}
      }
    }
  }
}
