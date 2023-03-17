
#include <stdio.h>
#include <string.h>
int div(int num){
  
  printf("Enter the last number: ");
  scanf("%d", &num);
  
    if (num % 3 == 0 && num % 5 == 0){
      printf(" this sucks");
    }
    else{
    	printf("this sucks more");
	}
  return num;
}
int main(){
	int d;
	div(d);
	
	return 0;
}