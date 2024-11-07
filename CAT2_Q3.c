#include<stdio.h>
int main(){
float hoursWorked;
float hourlyWages;
float grossPay,taxes,netPay;
printf("Enter hours worked");
scanf("%f",& hoursWorked);
printf("Enter Hourly Wages");
scanf("%f",& hourlyWages);
if (hoursWorked<=40){
  grossPay=hoursWorked*hourlyWages;
  }else{
  grossPay=(hourlyWages*40)+(hoursWorked-40)*hourlyWages*0.15;
  }
  if(grossPay<=400){
  taxes=grossPay*0.15;
  }else{
  taxes=600*0.15+(grossPay-600)*0.20;
  netPay=grossPay-taxes;
  }
  printf("grossPay%f",grossPay);
  printf("taxes%f",taxes);
  printf("netPay%f",netPay);
  return 0;
  }


    



    
