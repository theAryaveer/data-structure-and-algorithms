#include<iostream>
using namespace std;
void pattern(int n){int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<++cnt;
        }
        cout<<endl;
    }
}
void pattern1(int n){char cnt='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}
int main(){
pattern(3);
pattern1(3);
return 0;
}