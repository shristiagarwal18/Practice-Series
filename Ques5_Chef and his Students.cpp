#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    string s;
	    cin >> s;
	    int n = s.size();
	    int count = 0;
	    
	    for (int i=0; i<n; i++){
	        if(s[i] == '<' && s[i+1] == '>'){
	            count++;
	            i++;
	            continue;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
