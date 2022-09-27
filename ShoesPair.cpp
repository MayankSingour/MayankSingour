#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int ans=0;
	    if(m==0){
	        
	        ans = n*2;
	        cout<<ans<<endl;
	    }else{
	        ans = (m%2)+n;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
