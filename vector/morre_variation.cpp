#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,1,4,1};
vector<int>v1={1,2,3,4,5};
int freq=0;
int cand;
for(int n:v){
if(freq==0){
    cand=n;
}
if(cand==n){
    freq++;

}else freq--;
}
int cnt=0;
for(int n:v){
if(n==cand)cnt++;
}
if(cnt>(v.size())/2)cout<<cand;
else cout<<-1;

return 0;
}