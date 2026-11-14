#include<bits/stdc++.h>
using namespace std;

int main(){

//sorting an array-->
    int arr[5]={23,45,67,3,10};

    sort(arr,arr+5);

    for(int val:arr){

        cout<<val<<" ";
    }
    cout<<endl;


    //sorting a vector-->

    vector<int> vec={2,45,12,23,90,76};

    sort(vec.begin(),vec.end());

    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}