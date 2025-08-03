#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void solve(){
     int n=10;

     int arr[10]={3,4,7,9,12,13,16,18,19,20};
     int x=4;
     int left=0, right=n-1,ans;
     while(left<right){
          int middle=(left+right)/2;
          if(x==arr[middle]){
               ans= middle;
               break;
          }
          else if(x<arr[middle]){
               right= middle-1;
          }
          else{
               left= middle+1;
          }
     }
     cout<<"Element found in index: ";
     cout<<ans<<endl;
}
int main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    int t =1;

    while(t--){
      solve();
    }
    return 0;
}
