#include <iostream>

using namespace std;

int main (){

    char A[]="decimal";
    char B[]="medical";

    int H[25];

    for(int j =0;A[j]!='\0';j++){
        H[A[j]-97]+=1;
    }
    int i;
    for( i =0;B[i]!='\0';i++){
        H[B[i]-97]-=1;
        if(H[B[i]-97]<0){
           printf("not anagram");
           break; 
        }
    }
    if(B[i]=='\0'){
        printf("Anagram");
    }
    // int j;
    // for( j =0;j<26;j++){
    //     cout << H[j] << endl;
    //     if(H[j]!=0){
    //          cout << "Not Anagram";
    //         break;
    //     }
    // }
    // if(j=26){
        // cout<< "anagram";
    // }

    return 0;
}