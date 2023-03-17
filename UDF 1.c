
#include <stdio.h>  
#include <string.h> 
int cube(){
		int c;
		printf("Enter value :");
		scanf("%d",&c);
		return c*c*c;
}
int main(){
	printf("cube of this value is: %d",cube());
	return 0;
}