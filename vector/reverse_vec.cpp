#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,3,4,5,6,7,8};
int left=0;int right=v.size()-1;
while(left<right){
            swap(v[left],v[right]);

        left++;
    right--;}
    
for(int n:v){
    cout<<n<<" ";
}
return 0;
}