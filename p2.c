//add sub mul div do math
#include<stdio.h>
int main (){

int orange,oil,sugar,rice,add,takaGiven,returnTaka;

printf("Enter the value of orange : ");
scanf("%d/n",&orange);

printf("Enter the value of oil : ");
scanf("%d/n",&oil);

printf("Enter the value of sugar : ");
scanf("%d/n",&sugar);

printf("Enter the value of rice : ");
scanf("%d/n",&rice);

add=(oil+orange+rice+sugar);
printf("The total bill is %d/n",add);

printf("Given ammount of money : ");
scanf("%d/n",&takaGiven);

returnTaka=takaGiven-add;
printf("The total return is %d",returnTaka);








return 0;
}
