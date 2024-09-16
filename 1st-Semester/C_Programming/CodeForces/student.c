#include<stdio.h>
void main(){
 char name[50];
 int i,n;
 printf("Enter the number of students: ");
 scanf("%d",&n);
 
 FILE *fp;
 fp=fopen("student.txt","w");
 for(i=1;i<=n;++i){
 scanf("%s", name);
 fprintf(fp,"%s\n",name);
 }
 fclose(fp);
}