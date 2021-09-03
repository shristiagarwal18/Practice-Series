#include <iostream>
using namespace std;

int SquaredDist(int x1, int y1, int x2, int y2)
{
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int r;
	    cin>>r;
	    
	    int x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    
	    int count = 0;
	    
	    if (SquaredDist(x1,y1,x2,y2) <= r*r)
	    count++;
	    if (SquaredDist(x1,y1,x3,y3) <= r*r)
	    count++;
	    if (SquaredDist(x2,y2,x3,y3) <= r*r)
	    count++;
	    
	    if (count >= 2)
	    cout<<"yes"<<'\n';
	    else
	    cout<<"no"<<'\n';
	}
	return 0;
}
