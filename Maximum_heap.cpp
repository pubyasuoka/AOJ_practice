#include<iostream>
using namespace std;

#define MAX 10000

int H,A[MAX];

int maxHeapfy(int i){
    int l,r,largest;
    l = 2*i;
    r = 2*i+1;

    if(l<=H && A[i]<A[l]) largest = l;
    else largest = i;
    if(r<=H && A[i]<A[r]) largest = r;

    if(largest != i){
        swap(A[i],A[largest]);
        maxHeapfy(largest);
    }
}

int main(){
    cin >> H;

    for(int i=0;i<H;i++){
        cin >> A[i];
    }
    for(int i = H/2;i>= 1; i--){
        maxHeapfy(i);
    }
     for(int i=0;i<H;i++){
        cout << A[i];
    }
    cout << endl;
    return 0;
}