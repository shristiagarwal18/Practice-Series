#include <iostream>
using namespace std;
int main() {
    /*Declaring type of "testcase" and taking input*/
	int T;
	cin >> T;
	while(T--){
	    /*Declaring type of "nos. in array" and taking input*/
	    int n;
	    cin >> n;
	    /*creating empty array*/
	    int arr[n];
	    for(int i=0;i<n;i++){
	        /*taking values of array*/
	        cin >> arr[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        int sum=0;
	        int prod=1;
	        for(int j=i;j<n;j++){
	            sum+=arr[j];
	            prod*=arr[j];
	            if(sum==prod){
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}