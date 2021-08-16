#include<iostream>
#include<algorithm>

using namespace std;
void insertionSort(int ar[],int size);

int main(){
    int a;
    cout<<"Enter the size of array : "<<endl;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++){
        cout<<"Enter the "<<i+1<<" th element :"<<endl;
        cin>>arr[i];
    }
insertionSort(arr,a);
}

void insertionSort(int ar[],int size){
    
    for(int i=1;i<size;i++){
    int current=ar[i];
    int j=i-1;
    while(ar[j]>current&&j>=0){
            ar[j+1]=ar[j];
            j--;
    }
    ar[j+1]=current;
    }

    cout<<"Sorted array : "<<endl;

    for(int i=0;i<size;i++){
        cout<<ar[i]<<endl;
    }
}
