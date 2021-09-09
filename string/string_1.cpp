#include<iostream>

using namespace std;

int main(){

    char A[]="welcome";

    int i;
    for(i=0;A[i] != '\0';i++){
        if(A[i]>=65 && A[i]<=90){
            A[i]=A[i]+32;
        }
        else{
            A[i]=A[i]-32;
        }
    }

printf(A);

    return 0;
}