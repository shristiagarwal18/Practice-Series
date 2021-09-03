#include <iostream>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	while (testcases--){
	    int submissions, problems, score, max_score=0;
	    int a[11]={0};
	    cin>>submissions;
	    for (int i=0; i<submissions ;i++){
	        cin>>problems>>score;
	        if (problems<9){
	            if (score >= a[problems-1]){
	                a[problems-1] = score;
	            }
	        }
	    }     
	        for (int i=0; i<9; i++){
	            max_score+=a[i];
	        }
	        cout<<max_score<<endl;
	}
	return 0;
}
