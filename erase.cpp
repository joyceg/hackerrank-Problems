#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    vector<int> v;
    int element;
    
    for(int i=0;i<size;i++)
        {
        cin>>element;
        v.push_back(element);
    }
    int c;
    cin>>c;
    c--;
    v.erase(v.begin()+c);
    int a,b;
    cin>>a>>b;
    
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        {
        cout<<v[i]<<" ";
    }
    
    return 0;
}

