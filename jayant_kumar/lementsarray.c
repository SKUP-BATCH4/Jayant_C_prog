/*#include<stdio.h>
int i;
int main(){
char arr[5];
int count=0;
char arr1[i];

printf("enter the value:\n");
scanf("%d",&arr);
//printf("%s\n",arr);
printf("%d\n",sizeof(arr));


for(int i=0;i<5;i++){
if(!arr[i]==NULL){

    arr1[i]=arr[i];
}
}
printf("%d\n",strlen(arr));
printf("%d\n",sizeof(arr1));
}
*/

#include<stdio.h>
int i,arr[5],count=0;
//int arr1[i];
int main(){
printf("enter the value:\n");

for(int i=0;i<5;i++){
scanf("%d",&arr[i]);
}

for(int i=0;i<5;i++){
        printf("%d",arr[i]);
}
printf("%d\n",strlen(arr));
//printf("%d\n",sizeof(arr1));

}
