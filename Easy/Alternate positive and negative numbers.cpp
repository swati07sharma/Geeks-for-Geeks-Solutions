//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0; i<n; i++){
	        if(arr[i] < 0){
	            neg.push_back(arr[i]);
	        }
	        else{
	            pos.push_back(arr[i]);
	        }
	    }
	    int p = 0, nn = 0;
	    for(int i=0; i<n; i++){
	        if(nn==neg.size() || p==pos.size()){
	            break;
	        }
	        if(i%2!=0){
	            arr[i] = neg[nn];
	            nn++;
	        }
	        else{
	            arr[i] = pos[p];
	            p++;
	        }
	    }
	    if(nn==neg.size()){
	        for(int i=p; i<pos.size(); i++){
	            arr[i+nn] = pos[i];
	        }
	    }
	    else{
	        for(int i=nn; i<neg.size(); i++){
	            arr[i+p] = neg[i];
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
