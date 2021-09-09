#include <stdio.h>

using namespace std;

struct Matrix
{
    int A[10];
    int n;
};

void Set(struct Matrix *m, int i , int j , int x){
    if(i==j){
        m->A[i-1]=x;    
    }
}
int Get(struct Matrix m,int i ,int j){
    if(i==j){
        return m.A[i-1];
    }else{
        return 0;
    }
}

void Display(struct Matrix m){
    int i , j;
    for(i=1;i<m.n+1;i++){
        for(j=1;j<m.n+1;j++){
            if(i==j){
                printf("%d",m.A[i-1]);
                printf(" ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}



int main(){

    struct Matrix m;
    m.n=4;

    Set(&m,1,1,6); 
    Set(&m,2,2,7); 
    Set(&m,3,3,5); 
    Set(&m,4,4,3);
    Display(m); 


    return 0;
}
