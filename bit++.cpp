#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    if(n>=1 && n<=150){
        for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="X++" || a=="++X"){
            ++x;
        }
        else if(a=="--X" || a=="X--"){
            --x;
        }
        else{

        }}
        cout<<x;
    }
}