#include<stdio.h>
#define MAX 100000

int A[MAX],n;

int partition(int p, int r){
    int standard = A[r];
    int i = p-1;
    int j,tmp;
    for ( j = p; j < r; j++){
        if (A[j]<standard){
           i++;
           tmp = A[i];
           A[i] = A[j];
           A[j] = tmp;
        } 
    }
    tmp = A[i+1]; A[i+1] = A[r]; A[r] = tmp;
    return i + 1;
}

int main(){
    int i,q;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    q=partition(0,n-1);
    for(i=0; i < n; i++){
        if(i) printf(" ");
        if(i==q) printf("[");
        printf("%d",A[i]);
        if(i==q) printf("]");
    }
    printf("\n");

    return 0;
}