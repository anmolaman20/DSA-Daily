//In Place
//Stable
//O(n) -> Best, O(n^2) -> Avg
//Not Online
//Comparision Based Sorting ALgorithms

#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(vector<int> &vec){
    int n = (int) vec.size();
    for(int i=0;i<n;++i){
        bool isSwapped = false;
        for(int j=0;j<n-1-i;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped) break;
    }
    
}
void print(vector<int> &vec){
    for(const auto& it : vec){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> vec = {3,4,1,2,5,6,7,8,1};
    Bubble_sort(vec);
    print(vec);
return 0;
}