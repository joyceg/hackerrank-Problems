#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

vector<int> myStore;
int number;
char ch;
do{
cout<<"\n1.Insert\n2.Display elements\n3.Display the size\n4.Pop elements\nEnter your choice";

cin>>ch;

switch(ch)
{
case '1':cout<<"Enter element to be inserted;"<<endl;
	cin>>number;
	myStore.push_back(number);
	break;

case '2':cout<<"Display elements:"<<endl;
	for(int i=0;i<myStore.size();i++)
	cout<<myStore[i]<<" ";
	break;
case '3':cout<<"Size:"<<myStore.size();
	break;
case '4':myStore.pop_back();
	break;

default: cout<<"Invalid choice";
	break;
}
cout<<"Do you want to continue(y/n)?";
cin>>ch;	
}while((ch=='y')||(ch=='Y'));

sort(myStore.begin(),myStore.end());
cout<<"Sorted list is";
for(int i=0;i<myStore.size();i++)
	cout<<myStore[i]<<" ";

}
