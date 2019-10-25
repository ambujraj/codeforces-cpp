#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n>=1 && n<=100){
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int x = str.length();
        if(x>10){
            cout<<str[0]<<x-2<<str[x-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    }
}

