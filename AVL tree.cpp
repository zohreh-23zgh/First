#include <iostream>
#include <conio.h>
using namespace std;

struct node{
	short data;
	node* Rch;
	node* Lch;
	short B;
};

class Tree{
	public:
		node* root=NULL;
		node* leaf;
		node* current;
		node* parent=current;
		node* RL;
		node* PRL;	
			
	void insertleaf(int x);
	void search(int key );
	void del(int d);
};
void Tree :: insertleaf(int x){
	
		short f=0; 
		if (root==NULL)
		{
			root=new node;
			root->data=x;
			root->Rch=NULL;
			root->Lch=NULL;
			root->B=0;
		}
		else
		{
			leaf=new node;
			current=root;
			leaf->data=x;
			leaf->Rch=NULL;
			leaf->Lch=NULL;
			leaf->B=0;
			while(f == 0)
			{
				if (current->data<x)
				{
					if (current->Rch == NULL)
						{
						current->Rch=leaf;
						f = 1;
						current->B++;
						}
					else
						current->B++;
						current=current->Rch;
						
				}
				else 
				{
					if (current->Lch == NULL)
						{
						current->Lch=leaf;
						f = 1;
						current->B--;
						}
					else
						current->B--;
						current=current->Lch;	
				}		
			}	
		}	
	}

void Tree :: search(int key){
	
		node* current=root;
		bool f =false;
			while( f ==false)
			{
				if (current->data<key)
				{
					if (current->Rch == NULL)
						{
						cout<<"no find\n";
						f = true;
						}
					else
					{
					
						current=current->Rch;
					}
				}
				else if(current->data>key)
				{
					if (current->Lch == NULL)
						{
						cout<<"no find\n";
						f = true;
						}
					else
			
						current=current->Lch;	
				}
				else if(current->data==key)
					{
					cout<<" find\n";
					cout<< (current->B);
						f = true;
					}
			}
}

void Tree :: del(int d) {
	node* current=root;
		bool f =false;
			while( f ==false)
			{
				if (current->data<d)
				{
					if (current->Rch == NULL)
						{
						cout<<"no find\n";
						f = true;
						}
					else
					{
						parent=current;
						current=current->Rch;
					}
				}
				else if(current->data>d)
				{
					if (current->Lch == NULL)
						{
						cout<<"no find\n";
						f = true;
						}
					else
						parent=current;
						current=current->Lch;	
				}
				else if(current->data==d)
					{
					cout<<"delete : "<<d<<endl;
						f = true;
					}
			}

	if (current->Rch == NULL && current->Lch == NULL)
		{
		if (parent->Lch->data == current->data)
			{
				parent->Lch=NULL;
			}
		else
			{
				parent->Rch=NULL;
			}
		}
else if (current->Rch == NULL && current->Lch != NULL){
	parent->Lch=current->Lch;
}

else if (current->Rch != NULL && current->Lch == NULL){
	parent->Rch=current->Rch;
}	

else if (current->Rch != NULL && current->Lch != NULL){
	RL=current->Rch;
	while(RL->Lch != NULL){
		PRL=RL;
		RL=RL->Lch;	
	}
	if (RL->Rch !=NULL){
		PRL->Lch=RL->Rch;	
	}	
	else{
		PRL->Lch=NULL;
	}
	current->data=RL->data;	
}

}

int main() {
	Tree x;
	x.insertleaf(50);
	x.insertleaf(75);
	x.insertleaf(25);
	x.insertleaf(60);
	x.insertleaf(85);
	x.insertleaf(55);
	x.insertleaf(70);
	x.insertleaf(52);
	x.insertleaf(90);
	x.insertleaf(10);
	x.insertleaf(40);
	x.insertleaf(30);
	x.insertleaf(20);
	x.insertleaf(5);
	x.insertleaf(2);
	
	x.search(10);
	
};