#include<iostream>
using namespace std;


class Searching{
    public:
    void linear_search(int* arr,int numb,int len){
        int i,flag=0;8;
        for(i=0;i<len;i++){
           
            if(arr[i]==numb){
                cout<<"number found at  "<<i;
                flag=1;
                
            } 


        }
        if(flag ==0){
            cout<<"number not found";
        }
    }

    void binary_search(int * arr,int numb,int len){
        int beg=0,end=len-1,mid,flag=0;

        while(beg<=end){

            
            mid=(beg+end)/2;
            if(arr[mid]==numb){
                cout<<"number is present at "<<mid;
                flag=1;
                break;
            }
            else if(numb>arr[mid]){
                beg=mid+1;
            }
            else if(numb<arr[mid]){

                end=mid-1;

            }
        }
        if(flag==0){
        cout<<"element not found";
        }

    }

};

int main(){
    int len,number;

    // cout<<"enter total number of elements";
    // cin>>len;
    // cout<<"enter elements of array";
    // int arr[len];
    // for(int i=0;i<len;i++){
    // cin>>arr[i];
    // }
    // cout<<"enter number to find";
    // cin>>number;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    number=1;
    len=10;
    Searching s1;
    s1.linear_search(arr,number,len);
    s1.binary_search(arr,number,len);
    return 0;
}