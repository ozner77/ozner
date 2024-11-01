#include<bits/stdc++.h>
using namespace std;
int main() {
	long long t,mal[5002];
	cin>>t;
	while(t--) {
		vector<long long> xd;
		long long n,x,y;
		cin>>n>>x>>y;
		string a,b;
		cin>>a>>b;
		if(x>=y){
			for(int i=0;i<n;i++){
				if(a[i]!=b[i]){
                xd.push_back(i);
        	    }
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
		}else{
			for(int i=0;i<n;i++){
				if(a[i]!=b[i]){
					xd.push_back(i);
				}
			}
			if(xd.size()%2!=0){
				cout<<-1<<endl;
			}
			else {
				if(xd.size()==0) {
					cout<<0<<endl;
					continue;
				}
				mal[0]=0;
				mal[1]=0;
				for(int i=2;i<=xd.size();i++) {
					mal[i]=mal[i-2]+min(x*(xd[i-1]-xd[i-2]),y);
					if(i%2==0){
						mal[i]=min(mal[i],mal[i-1]+y);
					}
					else{
						mal[i]=min(mal[i],mal[i-1]);
					}
				}
				cout<<mal[xd.size()]<<endl;
			}
		}
    }
}
//Ming eres demasiado bueno para este mundo