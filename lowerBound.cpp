#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{


vector <int> mySpace;
int size,element;
cin>>size;
for(int i=0;i<size;i++)
{
cin>>element;
mySpace.push_back(element);
}

int low=std::lower_bound(mySpace.begin(),mySpace.end(),3);
return 0;
}
