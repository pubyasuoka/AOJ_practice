#include<stdio.h>

int Binary_Search(int A[],int key, int A_length){
    int left=0;
    int right=A_length-1;
    int mid;

    while(left<right){
        mid = (left+right)/2;
        if(A[mid]==key){
            return 1;
        }else if(A[mid]<key){
            left = mid+1;
        }else{
            right = mid;
        }
    }
    return 0;
}

int main(){
    int A[10000];
    int A_length,sum=0,B_length,key;
    
    scanf("%d",&A_length);
    for(int i=0;i<A_length;i++){
        scanf("%d",&A[i]);
    }
    
    scanf("%d",&B_length);
    for(int i=0;i<B_length;i++){
        scanf("%d",&key);
        sum += Binary_Search(A,key,A_length);
    }
    printf("%d\n",sum);
    return 0;
}