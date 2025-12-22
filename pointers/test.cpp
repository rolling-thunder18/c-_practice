#include <iostream>
using namespace std;
int main(){
    int x,y;
     cout<<"enter your value here: ";
     cin>>x;
    cout<<"enter ur second value here :";
    cin>>y;
     cout<<"your number sum is: "<<x+y<< endl;
    int arr[5];
    cout<<"enter ur array: ";
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"ur array:";
    for(int i=0;i<5;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
  for(int i=10;i>0;i--){
    for(int j=0;j<i;j++){
        cout<<" *";
        

    }cout<<endl;
  }
    
     return 0;
}