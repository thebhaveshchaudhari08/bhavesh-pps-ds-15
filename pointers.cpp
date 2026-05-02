#include <stdio.h>
int main(){

int array[10]={10,20,30,40,50,60,70,80,90,100};
int*ptr;
int i;

ptr=array;
printf("Accessing array elements using pointers:\n");
for(i=0; i < 10; i++){
	printf("Element %d = %d\n", i,*(ptr+i));
}
return 0;
}
