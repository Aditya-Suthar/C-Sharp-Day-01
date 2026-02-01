#include<stdio.h>
int compare(int s,double num1,double num2){
    if(num1==num2){
        return 0;
    }
    else if(num1>=num2){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    int s ,result;
    double num1,num2;
    printf("s reprents the number of integers into concideration after decimal point\n");
    scanf("%d",&s);
    printf("enter number 1 and 2\n");
    scanf("%.sf %.sf",&num1,&num2);
    result=compare(s,num1,num2);
    return 0;

}