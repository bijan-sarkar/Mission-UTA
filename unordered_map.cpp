#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<string, int>um;

    um.emplace("tv",100);
    um.emplace("laptop",40);
    um.emplace("phone",50);


    for (auto p:um){
        cout<<p.first<<" "<<p.second<<endl;
    }
//prints whatever sequence it gets
    return 0;
}