#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
	for(int i=0;i<t;i++){
		int n,con=0;
        int x;
        int xd[10]={0};
        vector<string>V;
        string s;
        cin>>n;
		for(int j=0;j<n;j++){
            cin>>s;
            V.push_back(s);
            xd[s[0]-'0']++;
		}
		for(int j=0;j<n;j++){
		    bool com=1;
		    for(int k=0;k<j;k++){
                if(V[k]==V[j]){
                    com=false;
                }
            }
            if(!com){
		        for(int k=0;k<10;k++){
		    	    if(!xd[k]){
		    	    	xd[k]++;
		    	    	V[j][0]=k+'0';
                        break;
		    	    }
		        }
		    con++;
		    }
		}	
		cout<<con<<"\n";
		for(int j=0;j<V.size();j++){
            cout<<V[j]<<"\n";
        }
	}
}