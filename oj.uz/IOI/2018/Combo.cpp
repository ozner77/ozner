//#include "combo.h"
#include <bits/stdc++.h>
using namespace std;
string s="";
int press(string a){
    return 1;
}
string guess_sequence(int N){
    if(N==1){
    if(press("A")){
      return "A";
    }
    if(press("B")){
      return "B";
    }
    if(press("X")){
      return "X";
    }
    return "Y";
  }
    if(press("AB")){
        if(press("A")){
            s+="A";
            int n=1;
            while(n<N-1){
                int a=press(s+"B"+s+"XB"+s+"XX"+s+"XY");
                n=s.size();
                if(a==n){
                    s+="Y";
                }else if(a==n+1){
                    s+="B";
                }else{
                    s+="X";
                }
                n=s.size();
            }
            if(press(s+"X")==N){
              s+="X";
            }else if(press(s+"Y")==N){
              s+="Y";
            }else{
              s+="B";
            }
        }else{
            s+="B";
            int n=1;
            while(n<N-1){
                int a=press(s+"A"+s+"XA"+s+"XX"+s+"XY");
                n=s.size();
                if(a==n){
                    s+="Y";
                }else if(a==n+1){
                    s+="A";
                }else{
                    s+="X";
                }
                n=s.size();
            }
            if(press(s+"X")==N){
              s+="X";
            }else if(press(s+"Y")==N){
              s+="Y";
            }else{
              s+="A";
            }
        }
    }else{
        if(press("X")){
            s+="X";
            int n=1;
            while(n<N-1){
                int a=press(s+"B"+s+"AB"+s+"AA"+s+"AY");
                n=s.size();
                if(a==n){
                    s+="Y";
                }else if(a==n+1){
                    s+="B";
                }else{
                    s+="A";
                }
                n=s.size();
            }
            if(press(s+"A")==N){
              s+="A";
            }else if(press(s+"Y")==N){
              s+="Y";
            }else{
              s+="B";
            }
        }else{
            s+="Y";
            int n=1;
            while(n<N-1){
                int a=press(s+"A"+s+"XA"+s+"XX"+s+"XB");
                n=s.size();
                if(a==n){
                    s+="B";
                }else if(a==n+1){
                    s+="A";
                }else{
                    s+="X";
                }
                n=s.size();
            }
            if(press(s+"X")==N){
              s+="X";
            }else if(press(s+"B")==N){
              s+="B";
            }else{
              s+="A";
            }
        }
    }
    return s;
}