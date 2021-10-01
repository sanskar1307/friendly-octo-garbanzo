#include <bits/stdc++.h>
using namespace std;


void minMax(int arr[],int n){
    int min=arr[0],max=-arr[0];
    if(n==1)
    {cout<<"Min = "<<arr[0]<<" Max = "<<arr[0]<<endl;
    return;
    }
    for(int i=1;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"Min = "<<min<<" Max = "<<max<<endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};


    minMax(arr,6);
   
     
    return 0;

}