
// !interted triangle pattern 
#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }

        cout<<endl;
    }
}
int main(){
pattern(4);
return 0;
}