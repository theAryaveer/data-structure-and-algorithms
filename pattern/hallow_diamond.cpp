#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i>0){
        for(int j=0;j<i*2-1;j++){
            cout<<" ";
        }
          cout<<"*";}
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<n-1-2*i;j++){
                cout<<" ";
            }cout<<"*";
        }cout<<endl;
    
}
}
int main(){
pattern(4);
return 0;
}