 
#include<iostream.h>
using namespace std;

int main() {
    
    int arr[10];
    int n;
    
    cout<<"Enter the size of an array:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<"Enter array"<<i<<":";
        cin>>arr[i];
    }
    
    cout<<"Your Enterd arrays are:";
    
    for(int i=1;i<=n;i++){
    
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    char r;
    
    cout<<"You wanna delete an array?"<<"Y/N.";
    cin>>r;

    if(r=="y"){
       cout<<"now you can";
    }
    
    else
    
    cout<<"Arrays Saved Successfully";
    
     
    

    return 0;
}