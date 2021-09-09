#include <iostream>
using namespace std;


int main(){
    char A[]="python";
    // char B[7];
    // cout << A << endl;
    // int i,j;
    // for(i=0;A[i]!='\0';i++){}
    // i=i-2;
    // for(j=0;i>=0;j++,i--){
    //     B[j]=A[i];
    // }
    // B[j]='\0';
    // cout << B;

    int i,j,k;
    for(i=0;A[i]!='\0';i++){}
    i=i-1;
    k=i;
    for(j=0;i>k/2;j++,i--){
        char temp;
        temp = A[j];
        A[j] = A[i];
        A[i]=temp;
    }
    cout<< A;



    return 0;
}