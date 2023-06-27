//Not - in Place
//Stable
//O(nlogn), O(n)
//Not Online
//Divide and Conquer



#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec,int low,int mid, int high){
    vector<int> temp(high-low+1);
    int i = low, j = mid + 1, k = 0;

    while(i<=mid and j<= high){
        if(vec[i]<=vec[j]){
            temp[k++] = vec[i++];
        }else{
            temp[k++] = vec[j++];
        }
    }

    while(i<=mid){
        temp[k++] = vec[i++];
    }

    while(j<=high){
        temp[k++] = vec[j++];
    }

    k = 0;
    for(int x = low; x <= high; ++x){
        vec[x] = temp[k++];
    }
}
void merge_sort(vector<int> &vec,int low, int high){
    if(low>=high) return;
    int mid = (low + high)/2;
    merge_sort(vec,low,mid);
    merge_sort(vec,mid+1,high);
    merge(vec,low,mid,high);
}
void print(vector<int> &vec){
    for(const auto& it : vec){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> vec = {3,4,1,2,5,6,7,8,1};
    merge_sort(vec,0,vec.size()-1);
    print(vec);
return 0;
}