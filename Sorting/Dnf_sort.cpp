#include <iostream>

using namespace std;
//Time complexity is o(N)
int main (){

    int arr[]={2,1,2,1,0,2,1,0,2};

    int h=8,m=0,l=0;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++,m++;
        }else if(arr[m]==1){
            m++;
        }else{
             swap(arr[m],arr[h]);
             h--;
        }
    }
    for (int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}