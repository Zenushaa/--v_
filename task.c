#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int q;
    printf("enter a number form (1-19)b to go to the wanted question");
    scanf("%d",&q);
    switch(q){
    case 1:
        one();
    break;
    case 2:
        two();
    break;
    case 3:
        three();
    break;
    case 4:
        four();
    break;
    case 5:
        five();
    break;
    case 6:
        six();
    break;
    case 7:
        seven();
    break;
    case 8:
        eight();
    break;
    case 9:
    nine();
    break;
    case 10:
    ten();
    break;
    case 11:
    eleven();
    break;
    case 12:
    twelve();
    break;
    case 13:
    thirteen();
    break;
    case 14:
    fourteen();
    break;
    case 15:
    fifteen();
    break;
    case 16:
    sixteen();
    break;
    case 17:
    seventeen();
    break;
    case 18:
    eighteen();
    break;
    case 19:
    nineteen();
    break;
    }
}
int one(){
 int a,b,c;
        printf("enter the length and height of triangle here: ");
        scanf("%d%d",&a,&b);
        c=(a*b)/2;
        printf("the area of triangle: %d",c);
}
int two(){
float c,f;
    printf("enter the value of celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("the value of celsius converted into fahrenheit is: %.1f",f);
}
int three(){
 float principle1, rate1, time1, simpleInterest;
    printf("Enter principle amount: ");
    scanf("%f", &principle1);
    printf("Enter rate of interest: ");
    scanf("%f", &rate1);
    printf("Enter number of years: ");
    scanf("%f", &time1);
    simpleInterest = (principle1 * rate1 * time1) / 100;
    printf("The simple interest is: %1.3f \n", simpleInterest);

}
int four(){
 float radius1, height1, areaC, volumeC;
    int pi = 3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius1);
    printf("Enter height of the cylinder: ");
    scanf("%f", &height1);
    areaC = pi * radius1 * radius1;
    volumeC = 4/3 * pi * radius1 * radius1 * height1;
    printf("The area of the circle is: %1.3f \n", areaC);
    printf("The volume of the cylinder is: %1.3f \n", volumeC);

}
int five(){
 float sub1, sub2, sub3, sub4, sub5, average, sum, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%f, %f, %f, %f, %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = (sub1 + sub2 + sub3 + sub4 + sub5);
    average = (sum) / 5;
    percentage = sum/500 * 100;
    printf("The average marks is: %1.1f \n", average);
    printf("The sum of marks is: %f \n", sum);
    printf("The percentage is: %1.2f \n", percentage);
}
int six(){
 float length1, width1, perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length1);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width1);
    perimeter = 2 * (length1 + width1);
    printf("The perimeter of the rectangle is: %1.3f \n", perimeter);
}
int seven(){
float r,h;
printf("enter the value of radius and height: ");
scanf("%f%f",&r,&h);
float volume;
volume=(22/7)*r*r*h;
printf("the volume of cylinder is: %.2f",volume);
}
int eight(){
 float principle2, rate2, time2, compoundInterest;
    printf("Enter principle amount:");
    scanf("%f", &principle2);
    printf("Enter rate of interest:");
    scanf("%f", &rate2);
    printf("Enter number of years:");
    scanf("%f", &time2);
    compoundInterest = principle2 * pow((1 + rate2 / 100), time2)- principle2;
    printf("The compound interest is: %1.3f \n", compoundInterest);

}
int nine(){
    int a;
    printf("enter your age: ");
    scanf("%d",&a);
    if(a<18){
        printf("you are not eligible to vote.");
    }
    else{
        printf("you are eligible to vote.");
    }
}
int ten(){
    fflush(stdin);
char a;
    printf("enter any character here: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("%c is a vowel.",a);
    }else{
        printf("%c is not a vowel.",a);
    }
}
int eleven(){
int a;
   printf("Enter a year: ");
   scanf("%d", &a);
   if (a % 400 == 0) {
      printf("%d is a leap year.", a);
   }
   else if (a % 100 == 0) {
      printf("%d is not a leap year.", a);
   }
   else if (a % 4 == 0) {
      printf("%d is a leap year.", a);
   }
   else {
      printf("%d is not a leap year.", a);
   }
}
int twelve(){
    int w,f,i;
    float bmi,m;
    printf("Enter your hight hight in\nFeet\tInches\n");
    scanf("%d%d",&f,&i);
    i=i+(f*12);
    m=i*0.0254;
    printf("\nEnter your weight in kg Here: ");
    scanf("%d",&w);
    bmi = w/(m*m);
    printf("\nYour bmi is %.2f",bmi);
    if(bmi<18.5){
        printf("\nyou are underweight.");
    }
    else if(bmi>=18.5&&bmi<24.9){
        printf("\nyou are normal weight.");
    }
    else if(bmi>=24.9&&bmi<29.9){
        printf("\nyou are overweight.");
    }
    else if(bmi>30){
        printf("\nObese");
    }
}
int thirteen(){
    int money;
    printf("Enter the money to be taxed: ");
    scanf("%d",&money);
    if(money<10000){
        printf("No tax to be paid.");
    }
    else if(money<=50000){
        printf("Amount of Tax need to pay %d",(money-10000)/10);
    }
    else if(money<=100000){
      printf("Amount of Tax need to play %d",((2*money-50000)/10)+(money-10000)/10);
    }
    else if(money>100000){
        printf("Amount of Tax need to play %d",((3*money-100000)/10)+((2*money-50000)/10)+(money-10000)/10);
    }
}
int fourteen(){
int q,p=10;
    printf("Enter the number of items purchased which cost Rs10 per item: ");
    scanf("%d",&q);
    if(q<=10&&q>0){
        printf("You are eligiable for 5%% discount. So the final cost will be Rs%d",(q*p)-(5*q*p)/100);
    }
    else if(q<=50){
        printf("You are eligiable for 10%% discount. So the final cost will be Rs%d",(q*p)-(10*q*p)/100);
    }
    else if(q>50){
        printf("You are eligiable for 15%% discount. So the final cost will be Rs%d",(q*p)-(15*q*p)/100);
    }
    else{
        printf("You are not eligiable for discount.");
    }
}
int fifteen(){
int a,b,result;
char status[10];
printf("Enter your age here:");
scanf("%d",&a);
jump:
printf("\nDriving licance status\n1)Valid\n2)Invalid\n");
scanf("%d",&b);
if(b==1){
    strcpy(status,"valid");
}
else if(b==2){
    strcpy(status,"invalid");
}
else{
    printf("Please enter 1 or 2");
    goto jump;
}
result=strcmp(status,"valid");
if(a>=21&&result==0){
    printf("You can rent a car.");
}
else{
    printf("You can't rent a car");
}
}
int sixteen(){
    int a;
    printf("Enter a number here: ");
    scanf("%d",&a);
    if(a!=0){
        if(a>0){
            printf("%d is positive.",a); 
        }else{
            printf("%d is negative.",a);
        }
    }else{
        printf("%d is zero.",a);
    }
}
int seventeen(){
    int a,b,c;
    printf("Enter the age of three different people: ");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("Person 'a' is the oldest at the age of %d",a);
    }else{
        if(b>a&&b>c){
            printf("Person 'b' is the oldest at the age if %d",b);
        }else{
            printf("Person 'c' is the oldest at the age of %d",c);
        }    
    }
}
int eighteen(){
    int a;
    printf("Enter the number of units here: ");
    scanf("%d",&a);
    if(a<=100&&a>0){
        printf("Electricity bill is %d",a*5);
    }
    else if(a<=200){
        printf("Electricity bill is %d",(a-100)*10+100*5);
    }
    else if(a>200){
        printf("Electricity bill is %d",(a-200)*15+100*10+100*5);
    }
    else{
        printf("Invalid amount.");
    }
}
int nineteen(){
    int a,balance=10000,wanted_amount,pin=1111,pass;
    printf("WELCOME TO THE RASTRA BANK");
    printf("\nWhat will you be doing today?\n1)Withdraw\n2)Deposit\n3)Check balance\n");
    scanf("%d",&a);
    if(a==1){
        printf("\nTo withdraw please enter pin here: ");
        scanf("%d",&pass);
        if(pass==1111){
            printf("\nWhat amount would you like to withdraw?\nEnter here: ");
            scanf("%d",&wanted_amount);
            if(wanted_amount>balance){
                printf("\nSorry you have insufficient balance!");
            }else{
                printf("\nPlease wait a moment as your transaction is being processed...");
                balance=balance-wanted_amount;
                printf("\nYour transaction has been completed. Your new balance is %d.", balance);
            }
        }else{
            printf("Pin incorrect please try again later!");
        }
    }
    else if(a==2){
        printf("\nWhat amount would you like to deposit?\nEnter here: ");
        scanf("%d",&wanted_amount);
        if(wanted_amount>0){
            printf("\nPlease wait a moment as your transaction is being processed...");
        balance=balance+wanted_amount;
        printf("\nYour new balance is %d.",balance);
        }else{
            printf("Invalid amount please try again later...");
        }
    }
    else if(a==3){
        printf("\nTo check balance please enter pin here: ");
        scanf("%d",&pass);
        if(pass==1111){
            printf("\nYour current balance is %d.",balance);
        }else{
            printf("Pin incorrect please try again later!");
        }
    }
    else{
        printf("Thanks for visting..");
    }

}
