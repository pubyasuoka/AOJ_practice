#include<stdio.h>

void trace(int A[], int N){
    int i;
    for ( i=0; i < N; i++ ){
      if( i > 0 ) printf(" ");
      printf("%d",A[i]);
    }
    printf("\n");
}

void BubbleSort(int A[],int N){
    int i,j,tmp;
    for ( i=0; i < N; i++){
        for( j=N-1; j>i; j-- ){
            if(A[j-1]>A[j]){
                tmp=A[j-1];
                A[j-1]=A[j];
                A[j]=tmp;
                trace(A,N);
            }
        }
    }
}

int main(){
  int N, i, j;
  int A[100];
  scanf("%d",&N);
  
  for (i=0; i<N; i++) scanf("%d",&A[i]);
  trace(A,N);
  BubbleSort(A,N);
  return 0;
}