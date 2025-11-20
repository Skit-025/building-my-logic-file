# include stdio.h
# include stdlib.h 
int binSearch(int A[],int size,int ITEM){
    int BEG=0,END=SIZE-1;
    while(BEG<=END){
        int mid=(BEG+END)/2;
        if(A[mid]==ITEM)
            return mid;
        else if(ITEM<=A[mid])
        END=mid-1;
        else
        BEG=mid+1;
    };
    return -1;
}
int main(){
    int temp ,i,j,size,ITEM;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    //Sorting the array
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
}
    }
    printf("Enter element to be searched:");
    scanf("%d",&ITEM);
    int result=binSearch(A,size,ITEM);
    if(result==-1)
        printf("Element not found\n");
    else    
        printf("Element found at index %d\n",result);
    return 0;
}