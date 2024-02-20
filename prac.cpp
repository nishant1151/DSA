#include<iostream>
using namespace std;
class Node{
	int data;
	Node* lchild;
	Node* rchild;
	public:
	Node(){
		data=0;
		lchild=NULL;
		rchild=NULL;

	}
	Node(int data){
		this->data=data;
		lchild=NULL;
		rchild=NULL;
	}
    void setdata(int data){
		this->data=data;
	}
	int getdata(){
		return data;
	}
	void setlchild(Node* lchild){
		this->lchild=lchild;
	}
	Node* getlchild(){
			return lchild;
	}
	void setrchild(Node * rchild){
		this->rchild=rchild;
	} 
	Node * getrchild(){
		return rchild;
	}

	

};

class Binarytree{
	Node * root;
	public:
	Binarytree(){
		root=NULL;
	}

	void insert(int data){
		Node * newnode=new Node(data);
		if(root==NULL){
			root=newnode;
		}
		else{
			Node * present=root;
			Node * previous;

			while(present!=NULL){
				
				previous=present;
				if(present->getdata()>data){
					present=present->getlchild();
				}
				else{
					present=present->getrchild();
				}
			}
			if(previous->getdata()>data){
				
				previous->setlchild(newnode);
			}
			else{
				
				previous->setrchild(newnode);
			}
		}

	}
	void traverse(){
		traverse(root);
	}
	void traverse(Node * root){
	 if(root==NULL){
		cout<<"tree is empty"<<endl;
		cout<<root;
	 }
	 else{
		cout<<"dasfkj"<<endl;
    traverse(root->getrchild());
         
    traverse(root->getlchild());
   
    cout<<root->getdata()<<endl;
    
    }
	
	}
	void deletee(int data){
		if(root==NULL){
			cout<<"tree is emptyyyy";
			
		}
		else{
			Node* present= root;
			Node* previous=root;

			while(present->getdata()!=data){
				previous=present;
				if(present->getdata()>data){
					present=present->getlchild();
				}
				else{
					present=present->getrchild();
				}
			}
			if(present==previous){
				cout<<"hii";
				delete present;
				root=NULL;
			}
		}
	}
};
int main(){
	Binarytree b1;
	b1.insert(50);
	b1.insert(60);
	b1.deletee(60);
	b1.traverse();
	return 0;
	}