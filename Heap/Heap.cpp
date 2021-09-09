#include <iostream>

using namespace std;

int A[]={0,10,20,30,25,5,40,35,105};

void Insert (int A[],int n){
    int temp , i =n;
    temp =A[n];
    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

void createHeap(){
    
     int i;

     for(i=2;i<=8;i++){
         Insert(A,i);
     }
}

void Delete(int n){
    int x ,i,j;
    x=A[1];
    A[1]=A[n];
    A[n]=x;
    i=1 , j=2*i;
    while(j<n-1)
    {
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            swap(A[i],A[j]);
            i=j;
            j=2*j;
        }
        else{
            break;
            }

    }
   
}

int main()
{

    createHeap();
    for(int i=0;i<=8;i++){
         cout<< A[i] << " ";
    }
    cout<<endl;
    Delete (8);
    for(int i=0;i<=8;i++){
         cout<< A[i] << " ";
    }


    return 0;
}