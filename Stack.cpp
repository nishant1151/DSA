#include<iostream>
using namespace std;

class Stack{
    int arr[5];
    int top;
    
    int isfull(){
        if(top==5){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isempty(){
        if(top==0){
            // cout<<"hello";
            return 0;
            
        }
        else{
            // cout<<"hii";
            return 1;

        }
    }

    public:

    Stack(){
        top=0;
        
    }

   

    void Push(int data){
        if(!isfull()){
        arr[top]=data;
        top++;
        cout<<"data added"<<endl;
        }
        else{
            cout<<"stack is full"<<endl;
        }
    }
    int pop(){
        if(isempty()){
            
             top--;
            cout<<arr[top]<<"is deleted\n";
           
        }
        else{
            cout<<"Stack is empty\n";
        }

    }
        void traverse(){
            int i;
            if(!isempty()){
            cout<<"stack elements are=";
            for(i=top-1;i>=0;i--){
                cout<<arr[i]<<endl;
            }}
            else{
                cout<<"stack is empty\n";
            }
        }

        int Peek(){
            if(isempty()){
                cout<<"Stack is empty";
                return -12129;
            }
            else{
                return arr[top-1];
            }
        }
};
int main(){
    
    Stack s1;

    s1.Push(25);
    s1.Push(25);
    s1.Push(35);
    s1.traverse();
    if(s1.Peek()==-12129){
        
    }
    else{
        cout<<s1.Peek();
    }
    
   


    
    return 0;
}