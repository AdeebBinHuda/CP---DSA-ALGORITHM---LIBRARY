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

   int  start = 1, end = n;
    bool perfectSquare= false;

   while(start <= end){
     int mid = (start + end)/2;

     if(mid * mid == n){
          perfectSquare = true;
          break;
     }
     else if(mid*mid > n){
          end = mid - 1;
     }
     else{
          start = mid + 1;
     }
   }
   if(perfectSquare == true) cout<<"YES";
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

