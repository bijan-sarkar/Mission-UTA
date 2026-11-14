#include<bits/stdc++.h>
using namespace std;
int main(){


    multimap<string,int>m;

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    for (auto p:m ){
        cout<<p.first<<p.second<<endl;//multimaps prints the keys where it is same key or not it prints all
        
    }
    return 0;
}