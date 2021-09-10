#include <bits/stdc++.h>

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


// max o(n^2)
// min o(n)
// stable also


int main(){
    cout<<"Enter size of array"<<endl;
    int size;
    cin>>size;
    int a[size];
    cout<<"\n";
    cout << "enter the number in the array" << endl;
    for(int i =0;i<size;i++){
        cin>>a[i];
    }
     for(int i=0;i<size;i++){
        cout <<a[i]<<" ";
    }cout<<"\n";

    int x;

    for(int i=1;i<size;i++){
        int j=i-1;
         x=a[i];
        while(j>=0 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }

    for(int i=0;i<size;i++){
        cout <<a[i]<<" ";
    }cout<<"\n";

    return 0;
}