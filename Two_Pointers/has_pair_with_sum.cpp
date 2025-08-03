#include<bits/stdc++.h>
using namespace std;
bool hasPairwithSum(vector<int>& a,int target){
     int left =0, right=a.size()-1;
     sort(a.begin(),a.end());
     while(left<right){
       int    sum=a[left]+a[right];
          if(sum== target) return true;
          else if(sum<target) left++;
          else right--;
     }
     return false;
}
int main(){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int target;
     cin>>target;
     cout<<(hasPairwithSum(a,target)?"True":"False")<<endl;
     return 0;
}
