#include<bits/stdc++.h>
using namespace std;
int main(){
     int i,j,min_index;
     int arr[]={32,1,3,23,44,100,7};

     for( i=0;i<7;i++){
          min_index=i;
          for( j=i+1;j<7;j++){
               if(arr[j]<arr[min_index]){
                    min_index=j;
               }
          }
          int temp = arr[i];
          arr[i]=arr[min_index];
          arr[min_index]=temp;
     }

     for(int i=0;i<7;i++){
          printf("%d ",arr[i]);
     }printf("\n");

     return 0;
}
