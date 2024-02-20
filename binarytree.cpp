#include<iostream>
using namespace std;

class Node{
    int data;
    Node * lchild;
    Node * rchild;
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

    void set_data(int data){
        this->data=data;
    }
    int get_data(){
        return data;
}
   void setlchild(Node * lchild){
    this->lchild=lchild;

   }
   Node * get_lchild(){
    return lchild;

   }
   void setrchild(Node * rchild){
    this->rchild=rchild;

   }
   Node * get_rchild(){
    return rchild;

   }
    
};

class BinaryTree{
    Node* root;
    public:
    BinaryTree(){
        root=NULL;
    }
   void insert(int data){
    Node* newnode=new Node(data);
    
 
    if(root==NULL){
        root=newnode;
    }
    else{
        Node* traverse=root;
        Node * follow=root;

        while(traverse!=NULL){
            follow=traverse;
            if(traverse->get_data()>data){
                traverse= traverse->get_lchild();
            }
            else{
                traverse=traverse->get_rchild();
            }
        }

        if(newnode->get_data()<follow->get_data()){
            follow->setlchild(newnode);
        }
        else{
                  follow->setrchild(newnode);
        
        }

    }

   }

   void preorder(){
    preorder(root);
   }
   void preorder(Node * root){
    
    if(root!=NULL){
         cout<<root->get_data()<<endl;
    preorder(root->get_lchild());
   
    preorder(root->get_rchild());
    
    }
   }

    void inorder(){
    inorder(root);
   }
   void inorder(Node * root){
    
    if(root!=NULL){
        
    inorder(root->get_lchild());
     cout<<root->get_data()<<endl;
   
    inorder(root->get_rchild());
    
    }
   }

    void postorder(){
    postorder(root);
   }
   void postorder(Node * root){
    
    if(root!=NULL){
    postorder(root->get_rchild());
         
    postorder(root->get_lchild());
   
    cout<<root->get_data()<<endl;
    
    }
   }

    void delete_element(int data){
        if(root==NULL){
            cout<<"node is empty";

        }
        else{
            Node* traverse=root;
            Node* follow;
            while(traverse->get_data()!=data){
                follow=traverse;
                if(traverse->get_data()>data){
                    traverse=traverse->get_lchild();
                }
                else{
                     traverse=traverse->get_rchild();
                }

                if(traverse->get_lchild()==NULL && traverse->get_rchild()==NULL){

                    if(follow->get_data()>follow->get_data()){
                        follow->setlchild(NULL);
                    }
                    else{
                        follow->setrchild(NULL);
                    }
                    delete traverse;
                }
                else{
                if(traverse->get_rchild()!=NULL && traverse->get_lchild()==NULL){

                }
                
                }
            }
        }
    }
};
int main(){
    BinaryTree b1;
    b1.insert(20);
    b1.insert(30);
    b1.insert(515);
    b1.insert(75);
    b1.inorder();
    // b1.preorder();
    return 0;
}



