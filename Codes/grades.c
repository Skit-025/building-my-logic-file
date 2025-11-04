#include<stdio.h>
//defining maximum number of  access session
#define size 100
void main(){
    //Declaring the variables
    int arr[size],marks,i,n;
    //ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d",&n);
    if(n>size){
        printf("Number of students exceeds maximum limit of %d\n",size);
        return;
    }
    else{
    for(i=0;i<n;i++){
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks);
        arr[i]=marks;
    }
    for(i=0;i<n;i++){
        //if-else ladder to determine grades
        if(90<=arr[i]<=100){
            printf("Grade of student %d is A+\n",i+1);
        }
        else if(80<=arr[i]<90){
            printf("Grade of student %d is A\n",i+1);
        }
        else if(70<=arr[i]<80){
            printf("Grade of student %d is B\n",i+1);
        }
        else if(60<=arr[i]<70){
            printf("Grade of student %d is C\n",i+1);
        }
        else if(0<=arr[i]<60){
            printf("Grade of student %d is Fx\n",i+1);
        }
        else{
            printf("Invalid marks for student %d\n",i+1);
        }
    }

}
}