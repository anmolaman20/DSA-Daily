//In Place -> No extra Space Only Recursive Space
//Not Stable
//O(nlogn) -> Avg, Best, O(n^2) -> Worst
//Not Online
//Divide and Conquer

#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int> &vec,int low, int high){
    int patition_idx = low;
    int pivot = vec[high];

    for(int i = low;i<high;i++){
        if(vec[i]<=pivot){
            swap(vec[i],vec[patition_idx]);
            patition_idx++;
        }
    }
    swap(vec[patition_idx],vec[high]);
    return patition_idx;
}
void quick_sort(vector<int> &vec,int low, int high){
    if(low>=high) return;
    int partition_idx = Partition(vec,low,high);
    quick_sort(vec,low,partition_idx-1);
    quick_sort(vec,partition_idx+1,high);
}
void print(vector<int> &vec){
    for(const auto& it : vec){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> vec = {3,4,1,2,5,6,7,8,1};
    quick_sort(vec,0,vec.size()-1);
    print(vec);
return 0;
}