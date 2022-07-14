#include <iostream>
using namespace std;
#include <cmath>


int main() 
{

	int t;
    long double avg,same;
    same=avg;
    int flag=0, ans= 1;
    
    cin>>t;
    while(t!=0)
    {
        flag=1;
        cin>>avg;
        
        
            while (flag==1)
            {
                //cout<< floor avg)<<"\t"< avg<<endl;
                if(floor(avg)!=avg){
                ans++;
                 avg=same*ans;
                    
                }
                else
                    flag=0;
            
            }
        cout<<ans<<endl;
        t--;
    }
	return 0;
}
