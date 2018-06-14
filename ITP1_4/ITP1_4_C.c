#include<stdio.h>
int main(){
  int a;
  int b;
  char op;
  for(;;){
     scanf("%d %c %d", &a, &op, &b);
    if(op == '+'){
      printf("%d\n", a + b);
    }
    else if(op == '-'){
      printf("%d\n", a - b);
    }
    else if(op == '*'){
      printf("%d\n", a * b);
    }
    else if(op == '/'){
      printf("%d\n", a / b);
    }
    else if(op == '?'){
      return 0;
    }
  }
}
