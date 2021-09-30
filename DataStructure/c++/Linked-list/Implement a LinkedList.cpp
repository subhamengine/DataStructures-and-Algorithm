#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = new Node;
    second = new Node;
    third = new Node;


    head->data = 1; 
    head->next = second;

      second->data = 199; 
    second->next = third;

      third->data = 1090; 
    third->next = NULL;

	cout<<head->data<<"-->"<<second->data<<"-->"<<third->data;


    return 0;

}



/*

#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
} 

*/