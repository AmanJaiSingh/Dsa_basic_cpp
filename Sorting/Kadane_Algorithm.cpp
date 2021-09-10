#include <iostream>

using namespace std;
//Time complexity is o(N)
int main(){

    int A[8]={1,6,-9,8,-5,5,8,-9};

    int max=0;
    int cur=0;

    for(int i =0;i<8;i++){
        cur=cur+A[i];
        if(cur>max){
            max=cur;
        }
        if(cur<0){
            cur=0;
        }
    }

    cout <<max;

    return 0;
}