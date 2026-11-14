#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>s;
//set prints values in order and also can't print duplicate values

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(1);
s.insert(2);
 
for (int val:s){

    cout<<val<<" ";
}
cout<<endl;


cout<<"Lower bound= "<<*(s.lower_bound(4))<<endl;//4
cout<<"upper_bound= "<<*(s.upper_bound(4))<<endl;//5

//lower bound will print the equal or more than  number that is inserted if that number is not available in the set then it will print 0. 
//upper bound will print the greater value it got inserted if nt then 0.

    return 0;
}