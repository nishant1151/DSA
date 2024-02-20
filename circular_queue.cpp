#include<iostream>
using namespace std;

class Circular_queue{
    private:
    int arr[5];
    int rear;
    int front;
    int count;

    int isempty(){
        if(count==0){
            return  1;
        }
        else{
            return 0;
        }
    }

    int isfull(){
        if(count==5){
            return 1;
        }
        else{
            return 0;
        }
    }

    public:
    Circular_queue(){
        rear=0;
        front=0;
        count=0;
    }
    


    void insert(int data){
        if(!isfull()){
            arr[rear]=data;
            count++;
            rear++;
            rear=rear%5;
            cout<<"data inserted\n";
        }
        else{
            cout<<"queue is full\n";
        }
    }
    void Delete(){
        if(!isempty()){
            front++;
            front=front%5;
            count--;
            cout<<"data deleted\n";

        }
        else{
            cout<<"queue is empty\n";
        }


    }

    void traverse(){
        if(!isempty()){
            int temp=front;
            
            for(int i=1;i<=count;i++){
                
                cout<<arr[temp]<<endl;
                temp++;
                temp=temp%5;
   
            }}
            else{
                cout<<"queue is empty";
            }
        }
    



};




int main(){

    Circular_queue q1;
    q1.insert(10);
    q1.insert(20);
    q1.insert(30);
    q1.insert(40);
    q1.insert(50);
    q1.insert(40);
    q1.insert(50);
    q1.Delete();
    q1.Delete();
   
    q1.traverse();

    
    

    return 0;
}