#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2,3,4,1,7,8};
    int target = 7;
    int n = (int) vec.size();

    for(int i=0;i<n;i++){
        if(vec[i]==target){
            cout<<"Index : "<<i<<endl;
            break;
        }
    }
}