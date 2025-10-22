#include<stdio.h>
int main(){
float a,b,c,s,area;
printf("Enter the value of a  :");
scanf("%f",&a);
printf("Enter the value of b  :");
scanf("%f",&b);
printf("Enter the value of c  :");
scanf("%f",&c);
s=(a+b+c)/2;
printf("ans %f", s);
area=sqrt (s*(s-a)*(s-b)*(s-c));
printf("arae is %.2f",area);
return 0;
}
