//In Place
//Stable
//O(n) -> Best, O(n^2) -> Avg
//Online
//Comparision Based Sorting ALgorithms

#include<bits/stdc++.h>
using namespace std;

void Insertion_sort(vector<int> &vec){
    int n = vec.size();
    for(int i=1;i<n;i++){
        int key = vec[i];
        int j = i-1;
        while(j>=0 and vec[j] > key){
            swap(vec[j+1],vec[j]);
            j--;
        }
        vec[j+1] = key;
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