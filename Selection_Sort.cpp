#include<stdio.h>

int SelectionSort(int A[], int N){
    int i, j, minj, temp, ctimes=0;
    for(i=0; i<N-1; i++){
        minj=i;
        for(j=i; j<N; j++){
            if(A[minj]>A[j]) minj=j;
        }
        temp=A[i];
        A[i]=A[minj];
        A[minj]=temp;
        if(i!=minj) ctimes++;
    }
    return ctimes;
}

int main(){
    int A[100];
    int N, ctimes, i;

    scanf("%d",&N);
    for(i=0; i<N; i++) scanf("%d",&A[i]);

    ctimes=SelectionSort(A,N);

    for(i=0; i<N; i++){
        if(i!=0){printf(" ");};
        printf("%d",A[i]);
    }
    printf("\n");
    printf("%d",ctimes);
    printf("\n");

    return 0;
}