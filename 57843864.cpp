#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0;i<n;i++)
	    cin>>a[i];
	    int ind = -1;
	    int evenateven = 0,evenatodd = 0;
	    for(int i = 1;i<n;i += 2){
	        if(a[i]%2 != 0){
	        evenateven++;
	        if(ind == -1)
	        ind = i;
	        }
	    }
	    for(int i = 0;i<n;i+=2){
	        if(a[i]%2 == 0)
	        evenateven++;
	    }
	    for(int i = 0;i<n;i+=2){
	        if(a[i]%2 != 0){
	            evenatodd++;
	            if(ind == -1)
	            ind = i;
	        }
	        
	    }
	    for(int i = 1;i<n;i+=2){
	        if(a[i]%2 == 0)
	        evenatodd++;
	    }
	    if(ind == -1){
	        cout<<-1<<endl;
	    }
	    else{
	        if(evenateven <= evenatodd){
	            cout<<evenateven<<endl;
	        for(int i = 1;i<n;i+=2){
	            if(i == ind)
	            continue;
	            if(a[i]%2 != 0){
	                a[i] = a[i]^a[ind];
	                cout<<i+1<<" "<<ind+1<<endl;
	                }
	            }
	        for(int i = 0;i<n;i+=2){
	            if(i == ind)
	            continue;
	            if(a[i]%2 ==0){
	                a[i] = a[i]^a[ind];
	                cout<<i+1<<" "<<ind+1<<endl;
	            }
	        }
	        if(ind%2 != 0){
	            if(ind+1<n){
	                a[ind] = a[ind]^a[ind+1];
	                cout<<ind+1<<" "<<ind+2<<endl;
	            }
	            else{
	                a[ind] = a[ind]^a[ind-1];
	                cout<<ind+1<<" "<<ind<<endl;
	            }
	        }
	        }
	        if(evenateven > evenatodd){
	            cout<<evenatodd<<endl;
	        for(int i = 1;i<n;i+=2){
	            if(i == ind)
	            continue;
	            if(a[i]%2 == 0){
	                a[i] = a[i]^a[ind];
	                cout<<i+1<<" "<<ind+1<<endl;
	                }
	            }
	        for(int i = 0;i<n;i+=2){
	            if(i == ind)
	            continue;
	            if(a[i]%2 !=0){
	                a[i] = a[i]^a[ind];
	                cout<<i+1<<" "<<ind+1<<endl;
	            }
	        }
	        if(ind%2 == 0){
	            if(ind+1<n){
	                a[ind] = a[ind]^a[ind+1];
	                cout<<ind+1<<" "<<ind+2<<endl;
	            }
	            else{
	                a[ind] = a[ind]^a[ind-1];
	                cout<<ind+1<<" "<<ind<<endl;
	            }
	        }
	        }
	    }
	    
	}
	return 0;
}
