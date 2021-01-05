#include <iostream>

using namespace std;

int main()
{   int arr[100];
    int n,loc,i,val,temp;
    cout<<"Enter the size of array :";
    cin>>n;
    for(i=0;i<n;i++)
        
            cin>>arr[i];
        
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Enter the new loction :";
        cin>>loc;
        cout<<"Enter the value :";
        cin>>val;
        cout<<endl;
        for(i=n-1;i>=loc-1;i--)
        {
            
        
           arr[i+1]=arr[i];
            
        }
           arr[loc-1]=val;
       
        for(i=0;i<n+1;i++)
        
            cout<<arr[i]<<" ";
       
   
    return 0;
}



