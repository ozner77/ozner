#include<bits/stdc++.h>
using namespace std;
int main() {
	long long t;
	cin>>t;
	while(t--) {
		vector<long long> xd;
		long long n,x,y;
		cin>>n>>x>>y;
		string a,b;
		cin>>a>>b;
		for(int i=0;i<n;i++)
			if(a[i]!=b[i]){
                xd.push_back(i);
            }
		if(xd.size()%2!=0){
            cout<<-1<<"\n";
        }
		else if(xd.size()==2) {
			if(xd[0]+1==xd[1]) {
				if(n!=2){
                    cout<<min(x,2*y)<<"\n";
                }
				else{
                    cout<<x<<"\n";
                }
			}
			else{
                cout<<y<<"\n";
            }
		}
		else{
            cout<<y*(xd.size())/2<<"\n";
        }
    }
}    