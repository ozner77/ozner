#include <bits/stdc++.h>
//#include "artclass.h"
using namespace std;
vector<vector<int>> r,g,b;
int xd(int a,int t,int x,int y){
    int uwu,lol,jeje;
    uwu=abs(r[a][t]-r[x][y]);
    lol=abs(g[a][t]-g[x][y]);
    jeje=abs(b[a][t]-b[x][y]);
    return uwu+lol+jeje;
}
int style(int H, int W, int R[500][500], int G[500][500], int B[500][500]) {
    r.assign(500,vector<int>(500));
    g.assign(500,vector<int>(500));
    b.assign(500,vector<int>(500));
    int pixel=0,dif=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            r[i][j]=R[i][j];
            g[i][j]=G[i][j];
            b[i][j]=B[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W-1;j++){
            dif+=xd(i,j,i,j+1);
            pixel++;
        }
    }
    for(int i=0;i<H-1;i++){
        for(int j=0;j<W;j++){
            dif+=xd(i,j,i+1,j);
            pixel++;
        }
    }
    int ans=dif/pixel;
    if(ans< 10){
        return 4;
    }else if(ans<27){
        return 1;
    }
	else if(ans<55){
        return 2;
    }
	else{
        return 3;
    }
}
