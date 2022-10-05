#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        if(n==0||n==1)
        {
            cout<<"no"<<endl;
            
        }else{
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            c++;
        }if(c>=2)
        {
            cout<<"no"<<endl;
            
        }else
        cout<<"yes"<<endl;
        }
    }
	
	return 0;
}
