#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pb push_back
vector<string> v;
int main() 
{
    string s;
    
    while(getline(cin, s)){
      if(s == "***") break;
      
      v.pb(s);
    }
    sort(v.begin(), v.end());

    string ans = v[0];
    int max = 1;
    int answer = -1;
    string t;
    
    vector<int> cnt;
    
    for(int i = 1; i < v.size(); i ++){
      if(v[i] == ans){
        max ++;
      }
      else {
        cnt.pb(max);
        max = 1;
        ans = v[i];
      }
      if(max > answer){
        answer = max;
        t = v[i];
      }
    }
    
    sort(cnt.begin(), cnt.end());
    int len = cnt.size();
    if(cnt[len - 1] == cnt[len - 2]){
      cout << "Runoff!\n";
      return 0;
    }
    cout << t;
    return 0;
}
