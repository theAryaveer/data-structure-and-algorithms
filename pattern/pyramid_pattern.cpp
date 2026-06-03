#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
       for(int j=i;j>=1;j--){
        cout<<j;
       }
        cout<<endl;
    }
}
int main(){
pattern(4);
return 0;
}