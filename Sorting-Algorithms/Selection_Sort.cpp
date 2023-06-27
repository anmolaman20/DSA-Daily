//In Place
//Not Stable
// O(n^2) 
//Not Online
//Comparision Based Sorting ALgorithms

#include<bits/stdc++.h>
using namespace std;

void Insertion_sort(vector<int> &vec){
    int n = vec.size();
    for(int i=0;i<n;i++){
        int mn_idx = i;
        for(int j=i;j<n;j++){
            if(vec[j]<vec[mn_idx]){
                mn_idx = j;
            }
        }
        swap(vec[i],vec[mn_idx]);
    }
    
}
void print(vector<int> &vec){
    for(const auto& it : vec){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> vec = {3,4,1,2,5,6,7,8,1};
    Insertion_sort(vec);
    print(vec);
return 0;
}