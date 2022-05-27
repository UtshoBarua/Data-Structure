#include<bits/stdc++.h>
#define ll long long
//#define mod ((int)1e9+7)

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string, string>mp;
    vector<string>container;
    for(int i=0; i<m; i++){
        string s1,s2;
        cin>>s1>>s2;
        mp[s1] = s2;


    }
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s.size()<=mp[s].size()){
            cout<<s<<" ";
        }
        else cout<<mp[s]<<" ";
    }



//    string s;
//    cin>>s;
//    mp[s]="cde";

//    for(auto it=mp.begin(); it!=mp.end(); it++){
//        cout<<it->first<<" ";
//    }

}
