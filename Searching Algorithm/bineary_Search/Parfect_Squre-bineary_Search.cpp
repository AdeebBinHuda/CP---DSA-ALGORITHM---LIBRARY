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
    int n;
    cin>>n;

     int left=1, right=n,ans;
     bool parFectSquare= false;
     while(left<right){
          int middle=(left+right)/2;

          if(middle*middle==n){
              parFectSquare= true;
               break;
          }
          else if(middle*middle>n){
               right= middle-1;
          }
          else{
               left= middle+1;
          }
     }
     if(parFectSquare== true) cout<<"Yes";
      else cout<<"NO";
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

