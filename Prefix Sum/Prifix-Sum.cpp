#include<bits/stdc++.h>
using namespace std;
int main(){

     int n,q;
     cin>>n>>q;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     //built prefix sum
     vector<int>prefix(n);
     prefix[0]=a[0];
     for(int i=1;i<n;i++){
          prefix[i]= prefix[i-1]+a[i];
     }
    //  If l == 0, then sum = prefix[r] directly.
    //  Sum of elements from index 2 to 4 →
    //  arr[2] + arr[3] + arr[4]
    //  = prefix[4] - prefix[1]


    while(q--){
     int l,r;
     cin>>l>>r;
     if(l==0)
          cout<<prefix[r]<<endl;
     else
          cout<<prefix[r]-prefix[l-1]<<endl;
    }
     return 0;
}









/*#include<bits/stdc++.h>
using namespace std;
int main(){
       //n         6
       //arr[i]    3 1 4 1 5 9
       //ans       3 4 8 9 14 23
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     vector<int>prefix(n);
     prefix[0]=a[0];
     for(int i=1;i<n;i++){
          prefix[i]= prefix[i-1]+a[i];
     }

     // prefix sum array
     for(int i=0;i<n;i++){
          cout<<prefix[i]<<" ";
     }
     return 0;
}*/
