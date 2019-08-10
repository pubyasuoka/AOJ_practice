#include<iostream>
using namespace std;

struct Card {char suit; int value; };

void Bubble(struct Card A[], int N) {
    int i, j;
    Card temp;
    for (i=0; i<N; i++){
        for (j=N-1; j>=i+1;  j--){
            if(A[j].value<A[j-1].value){
                temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }
        }
    }
}

void Selection(struct Card A[], int N){
    int i, j, minj;
    for (i=0; i<N; i++){
        minj=i;
        for (j=i; j<N; j++){
            if (A[minj].value > A[j].value) minj=j;
        }
        Card temp = A[i];
        A[i] = A[minj];
        A[minj] = temp;
    }
}

void printCard(struct Card A[], int N ){
    for (int i = 0; i < N; i++){
        if(i > 0) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N){
    for (int i = 0; i < N; i++ ){
        if (C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int main(){
    Card C1[100],C2[100];
    int N;
    char ch;

    cin >> N;
    for (int i =0; i<N; i++ ){
        cin >> C1[i].suit >> C1[i].value;
    }
    for (int i =0; i < N; i++ ) C2[i] = C1[i];

    Bubble(C1,N);
    Selection(C2,N);

    printCard(C1,N);
    cout << "Stable" << endl;
    printCard(C2,N);
    if (isStable(C1,C2,N)){
        cout << "Stable" << endl;
    }else{
        cout << "Not Stable" << endl;
    }

    return 0;
}