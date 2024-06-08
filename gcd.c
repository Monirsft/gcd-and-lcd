#include<stdio.h>
int main(){
    while(1){
int num1,num2,r,n1,n2;
scanf("%d%d",&n1,&n2);
num1=n1;
num2=n2;
while(num2!=0){
    r=num1%num2;
    num1=num2;
    num2=r;
}
printf("gcd is =%d\n",num1);
printf("lcd=%d\n",(n1*n2)/num1);

    }
}
