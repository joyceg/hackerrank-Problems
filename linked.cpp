#include<iostream>
void insertAtBeg(node*);
using namespace std;	
struct node {
  int x;
  node *next;
}node;

int main()
{
  node *root;      

  root = new node; 
  root->next = 0;  
                   
  root->x = 5;     
                   
}



void insertAtBeg(node *next)
{
int value;
cout<<"Please enter some value:";
cin>>value;
while(list->next!=NULL)
{
list=list->next;
}
list->data=value;
list->next=NULL;

}


/*#include<iostream>
void insertAtBeg(struct *node);
using namespace std;
struct node{
int data;
node *next;
};

int main()
{

cout<<"Let;s begin playing with linked list."<<endl;
node *list=new node();
insertAtBeg(&list)


}

void insertAtBeg(node list)
{
int value;
cout<<"Please enter some value:";
cin>>value;
while(list->next!=NULL)
{
list=list->next;
}
list->data=value;
list->next=NULL;

}*/
