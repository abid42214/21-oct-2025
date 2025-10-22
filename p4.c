#include<stdio.h>
int main (){
int n,age;

printf("The age is: \n");
scanf("%d",&age);


if(age>=18){
   for(n=1;n<=10;n++){
    printf("%d \n",n);
}


}

else{
        for(n=11;n<=20;n++){
    printf("%d \n",n);
}


}



return 0;
}
