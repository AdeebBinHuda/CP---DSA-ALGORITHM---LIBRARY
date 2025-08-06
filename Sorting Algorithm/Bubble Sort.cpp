#include<bits/stdc++.h>
using namespace std;
// Bubble sort
//  [12  2]   3
//   2  [12  3]
//   2  [3   12]

int main()
{
    int arr[]={10,2,4,7,3,1,5};

    for(int i=0;i<7;i++) {
        for(int j=0;j<7;j++){
          if(arr[j]>arr[j+1]){
               int temp= arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
        }
    }
    printf("After sorting: ");
    for(int i=0;i<7;i++){
     printf("%d ",arr[i]);
    }printf("\n");

    return 0;
}
