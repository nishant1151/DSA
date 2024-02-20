#include<iostream>
using namespace std;

class de_queue{
    int arr[5];
    int front;
    int rear;
int isempty(){
    if(rear==front){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
    if(rear==5 && front==0){
        
        return 1;
    }
    else{
        return 0;
    }
}
public:
    de_queue(){
        rear=0;
        front=0;
        
    }
  void  insert_rear(int data){
    cout<<rear;
     
        if(!isfull()){

            arr[rear]=data;

            rear++;
           
            cout<<"data added\n";
        }
        else{
            cout<<"queue is full\n";
        }
        
    }
    void Delete_front(){
        if(!isempty()){
            cout<<arr[front]<<" is deleted";
            front++;


        }
        else{
            cout<<"queue is empty";
        }
    }

    void insert_front(int data){
        if(front!=0){
            arr[front]=data;
            front--;
            cout<<"data added";
        }
        else if (!isfull()){
            cout<<"cannot insert from front";
        }
        else{
            cout<<"Queue is full";
        }

    }
    void delete_rear(){
        if(!isempty()){
            rear--;
            cout<<arr[rear]<<" is deleted";
            
        }
        else{
            cout<<"queue is empty";
        }
    }

};
int main(){
    de_queue d1;
    d1.insert_rear(10);
     d1.insert_rear(11);
      d1.insert_rear(12);
      d1.Delete_front();
      d1.insert_front(5);
      d1.delete_rear();

    return 0;
}