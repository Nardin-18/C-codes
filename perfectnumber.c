#include <stdio.h>
#include <stdlib.h>
int main()
{
    // the variable number is the number i will take from the user and check whether it is perfect or not
    // the variable initial is set to 1 to start from it and increment on it by 1 till i reach the number to be able to divide the number by numbers less than it.
    int num;
    int initial=1;
    int sum=0;
    scanf("%d",&num);
    if(num<1000){
        printf("%d \n",num);
        for(initial;initial<num;initial+=1){
            if(num%initial==0){
                sum+=initial;}
        }
        if(sum==num){
            printf("sum= %d",sum); printf(" which is equal to the number itself %d \n ",num);
            printf("Perfect Number");}
        else{
            printf("Not a Perfect Number");
        }
    }
    else {printf("Invalid Input");}
}




