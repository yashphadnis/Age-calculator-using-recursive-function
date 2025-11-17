#include<stdio.h>
int age_cal(int by,int cy){
    if(by==cy){ 
        return 0;}
        else { return(1+age_cal(by,cy-1));}
}
int main()
{ float a,b;
printf("enter your birth year:");
scanf("%f",&a);
printf("enter current year:");
scanf("%f",&b);
printf("Your age is :%d",age_cal(a,b));
return 0;}
