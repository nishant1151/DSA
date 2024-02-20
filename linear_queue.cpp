#include <iostream>
using namespace std;

class LinearQueue
{
    int arr[5];
    int rear;
    int front;

    int isfull(){
        if(rear==5){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isempty(){
        if(rear==front){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    public:
    LinearQueue(){
        rear=0;
        front=0;
    }
    void Insert(int data){
        if(!isfull()){
        arr[rear]=data;
        rear++;
        cout<<"data inserted\n";
        }
        else{
            cout<<"queue is full\n";
        }
    }
   void Delete(){
    if(!isempty()){
        cout<<arr[front]<<"deleted\n";
        front++;
    }
    else{
        cout<<"queue empty\n";
    }
   }
   
    
    void traverse(){
      
    if(!isempty()){
       
        int i;
        for(i=front;i<rear;i++){
            
            cout<<arr[i]<<endl;
        }}
        else{
            cout<<"stack is empty\n";
        }
   
   }
   
};
int main()
{
        LinearQueue l1;
        l1.Insert(10);
        l1.Insert(20);
        l1.Insert(30);
        l1.Insert(40);
        l1.Insert(10);
        l1.Insert(20);
        l1.Insert(30);
        l1.Insert(40);
        // l1.Delete();
        // l1.Delete();
        l1.traverse();
        

    return 0;
}