# include <stdio.h>
int main(){
    //initialise the variables
    int num,reversenum=0,originalnum,digit;
    //ask for imterger to check
    printf("Enter the integer to check for palindrome: \n");
    scanf("%d",&num);
    originalnum=num;
    // logic for the reversal of the number
    while(num !=0){
        digit=num%10;
        reversenum=reversenum*10+digit;
        num=num/10;
    }
    //logic to check palindrome
    if(originalnum==reversenum){
        printf("%d is a palindrome number\n",originalnum);
    }
    else
        printf("%d is not a palindrome number\n",originalnum);
        
}