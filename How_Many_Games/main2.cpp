#include<bits/stdc++.h>
using namespace std;

int main() {
int t,int_part,num;
double n,dec_part;

cin>>t;

while(t--) 
    {
        cin>>n;
        num=1;
        int_part=int(n*10000)/10000;
        dec_part=(n-int_part);
        double temp= dec_part;
        
        if(dec_part!=0.0) 
        {
            while(1) {
                        
                        int int_part_temp=int(temp*10000)/10000;
                        double dec_part_temp=(temp-int_part_temp);
                        if(dec_part_temp==0)
                            break;
                        else
                            num++;
                    }
            }
        cout<<num<<endl;
    }
}