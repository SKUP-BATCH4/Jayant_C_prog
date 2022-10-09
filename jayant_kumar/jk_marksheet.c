
 #include<stdio.h>

int main(){
int n,phy,mat,chem,total;
//printf("Enter the student Name:\n");
//scanf("%d",&n);
printf("Enter the Marks:\n");
scanf("%d %d %d",&phy,&mat,&chem);
total=phy+mat+chem;
//printf("Name of Student: %s\n",n);
printf("=================\n Physics: %d\n Mathematics: %d\n Chemistry: %d\n Total Marks: %d",phy,mat,chem,total);
printf("\n=======================");
}
