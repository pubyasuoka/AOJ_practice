#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
    char name[100];
    int t;
}P;

P Queue[LEN];
int head,tail,n;

void enqueue(P x){
    Queue[tail] = x;
    tail = (tail+1) % LEN;
}

P dequeue(){
    P x = Queue[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b){
    return a <b ? a: b;
}

int main(){
    int elaps = 0, c;
    int i, quantum;
    P u;
    scanf("%d %d",&n,&quantum);
    for (i=1; i <= n; i++){
        scanf("%s",Queue[i].name);
        scanf("%d",&Queue[i].t);
    }
    head = 1; tail= n+1;

    /*シミュレーション*/
    while(head != tail){
        u=dequeue();
        c = min(quantum,u.t);
        u.t -= c;
        elaps += c;
        if( u.t >0) enqueue(u);
        else{
            printf("%s %d\n",u.name, elaps);
        }
    }
    return 0;
}