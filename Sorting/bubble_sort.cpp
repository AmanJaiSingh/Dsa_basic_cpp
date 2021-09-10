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
    
    int flag ;

    for(int i=0;i<size-1;i++){
        flag=0;
        for (int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
            flag=1;    
        }
        if(flag==0){
            break;
        }

    }
    for(int i=0;i<size;i++){
        cout <<a[i]<<" ";
    }




    return 0;
}