#include<stdio.h>
void can(int);
int main(){
int *ptr;
int *a;

ptr=(int*) malloc(5*sizeof(int));
a=(int*) realloc(ptr,sizeof(int));
free(ptr);
free(a);
//printf("enter the value:");
//scanf("%s",&ptr);
//ptr=(int*)calloc(5,sizeof(ptr));

printf("address %d\n",&ptr);
printf("value %d\n",ptr);
printf("size is %d\n\n",sizeof(ptr));

printf("address %d\n",&a);
printf("value %d\n",a);
printf("size is %d\n",sizeof(a));

//
for(int i=0;i<1;i++){
scanf("%d",&ptr);
}

for(int i=0;i<5;i++){
printf("%d  ",ptr+i);
}
//can(ptr);
}


void can (ptr){
printf("%d",sizeof(ptr));
}
