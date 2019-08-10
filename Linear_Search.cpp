#include<stdio.h>

int Search(int A[],int length,int key){
    int i = 0;
    A[length] = key;
    while(A[i] != key) i++;
    return i != length;
}

int main(){
    int i,length_S,A[10000+1],length_T,key,sum=0;

    scanf("%d",&length_S);
    for(i=0;i<length_S;i++) scanf("%d",&A[i]);

    scanf("%d",&length_T);
    for(i=0;i<length_T;i++){
        scanf("%d",&key);
        if( Search(A,length_S,key) )sum++;
    }
    printf("%d\n",sum);
    return 0;
}