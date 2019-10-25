#include<iostream>
using namespace std;

int main(){
    int n,count=0,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b+c==2 || a+b+c==3){
            count++;
        }

    }
    cout<<count;
}