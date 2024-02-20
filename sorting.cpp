#include <iostream>
using namespace std;

class sorting
{
public:
    static void bubble_sort(int *arr, int len)
    {
        int i, j, temp,count=0;
        for (i = 0; i < len; i++)
        {
            count++;
            for (j = 0; j < len-1-i; j++)
            {
                
                if (arr[j] > arr[j + 1])
                {
                    count++;
                    temp = arr[j];

                    
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for(i=0;i<len;i++){
            cout<<arr[i]<<endl;
        }
        cout<<"count"<<count;
    }

    static void selection_sort(int * arr,int len){
        int i,j,min,temp,temp1;
        for(i=0;i<len-1;i++){
            min=i;
            for(j=i+1;j<len;j++){
                if(arr[min]>arr[j]){
                    min=j;
                }
            }
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
         for(i=0;i<len;i++){
            cout<<arr[i]<<endl;
        }
    }       
        
        
        static void insertion_sort(int * arr,int len){
            int i=0,j=0,temp;
            for(i=0;i<len;i++){
                cin>>temp;
                j=i;
                while(j>0 && arr[j-1]>temp){
                    arr[j]=arr[j-1];
                    j--;
                }
                arr[j]=temp;
            }
            for(i=0;i<len;i++){
                cout<<arr[i];
            }
          
        }
     
    
};

int main()
{
    
    int arr[9] = {10,20,40,60,12,18,22,9,10};     
    int len;
    cout<<"enter length of array";
    cin>>len;      
    int arr2[len];
    sorting::insertion_sort(arr2,len);

   
    // sorting::selection_sort(arr, 9);
    return 0;
}