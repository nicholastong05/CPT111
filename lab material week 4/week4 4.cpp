#include <iostream>
using namespace std;
int main(){
	double len1,wid1,len2,wid2,area1,area2;
		cout<<"Enter length and width of rectangle 1 separate by space :";
		cin>>len1;
		cin>>wid1;
		cout<<"Enter length and width of rectangle 2 separate by space :";
		cin>>len2;
		cin>>wid2;
			area1=len1*wid1;
			area2=len2*wid2;
				if(area1==area2)
					{cout<<"Both rectangle having same areas";}
				else if(area1>area2)
					{cout<<"Rectangle 1 having bigger area than rectangle 2";}
				else
					{cout<<"Rectangle 2 having bigger area than rectangle 1";}
	return 0;				
				
}
