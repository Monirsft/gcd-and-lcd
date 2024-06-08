#include<stdio.h>
int main(){

int num,i,sum=0,r,temp;
scanf("%d",&num);
temp=num;
    while(temp!=0){
        r=temp%10;
int fact=1;
for(i=1;i<=r;i++){
  fact=fact*i;
}
sum=sum+fact;
temp=temp/10;


 }

printf("%d\n",sum);
if(sum==num){
    printf("this is strong number");
}
else{
  printf("this is not strong number");
}
}
