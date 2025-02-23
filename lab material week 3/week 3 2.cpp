#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{string month1,month2,month3,allmonth;
double rain1,rain2,rain3;
double average;
cout<<"You need to enter 3 name of each month with their rainfall in that month (press enter to proceed for each question)"<<endl;
cout<<"Month 1:";
cin>>month1;
cout<<"Month 2:";
cin>>month2;
cout<<"Month 3:";
cin>>month3;
cout<<"Amount of rainfall for "<<month1<<" in inches:";
cin>>rain1;
cout<<"Amount of rainfall for "<<month2<<" in inches:";
cin>>rain2;
cout<<"Amount of rainfall for "<<month3<<" in inches:";
cin>>rain3;
average=(rain1+rain2+rain3)/3;
allmonth=month1+","+month2+" and "+month3;
cout<<"The average rainfall for "<<allmonth<<" is "<<fixed<<setprecision(2)<<average<<" inches."<<endl;
return 0;
}
