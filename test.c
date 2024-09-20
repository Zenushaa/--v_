#include<stdio.h>
#include<string.h>
int add(int,int);
void subtract(int,int);
int multi(int,int);
int main(){
    char ch[5],mainch[5];
    int a,b,c;
    jump:
    printf("choose option 1-3\n1)Add\n2)Subtract\n3)multiply");
    scanf("%d",&c);
    if(c<=3&&c>0){
        printf("Enter the two numbers:\n");
        scanf("%d\n%d",&a,&b);
    }else{
        printf("invalid input..");
    }    
    switch(c){
        case 1:
        printf("\n%d",add(a,b));
        break;
        case 2:
        subtract(a,b);
        break;
        case 3:
        printf("\n%d",multi(a,b));
        break;
    }
    fflush(stdin);
    printf("\ndo you want to try again?\n");
    scanf("%s",&ch);
    strcpy(mainch,strlwr(ch));
    if(strcmp(mainch,"yes")==0){
        goto jump;
    }
}
int add(int d,int e){
    return d+e;
}
void subtract(int d,int e){
    printf("\n%d",d-e);
}
int multi(int d,int e){
    return d*e;
}