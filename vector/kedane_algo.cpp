#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
vector<int>v={3,-4,5,4,-1,7,-8};
int curr=0;
int maxi= INT_MIN;
for(int i=0;i<v.size();i++){
        curr+=v[i];
        maxi=max(curr,maxi);
        if(curr<0){
            curr=0;
        }
}
cout<<maxi;
return 0;
}