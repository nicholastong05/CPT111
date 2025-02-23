#include <iostream>
#include <iomanip>
using namespace std;
int main()
{double csea,fsea,c1000,c2000,c3000,f1000,f2000,f3000,ctop,ftop,h0,f0,feet1000,feet2000,feet3000,topme;

cout<<"Please enter temperature at sea level in degrees Celcius : ";
cin>>csea;

fsea=(csea*1.8)+32;

c1000=csea-5;
c2000=c1000-5;
c3000=c2000-5;

f1000=(c1000*1.8)+32;
f2000=(c2000*1.8)+32;
f3000=(c3000*1.8)+32;

ctop=csea-(8.848*5);
ftop=(ctop*1.8)+32;

h0=csea/0.005;
f0=h0*3.28;

topme=8848*3.28;

cout<<fixed<<setprecision(2);
cout<<"The temperature at sea level = "<<csea<<" in degrees celcius,"<<fsea<<" in degrees Fahrenheit,"<<endl;
cout<<"The temperature at 1000 meters = "<<c1000<<" in degrees celcius,"<<f1000<<" in degrees Fahrenheit,"<<endl;
cout<<"The temperature at 2000 meters = "<<c2000<<" in degrees celcius,"<<f2000<<" in degrees Fahrenheit,"<<endl;
cout<<"The temperature at 3000 meters = "<<c3000<<" in degrees celcius,"<<f3000<<" in degrees Fahrenheit,"<<endl;
cout<<"The temperature at the top of Mount Everest (8848 m,"<<topme<<"feets) = "<<ctop<<" in degrees celcius,"<<ftop<<" in degrees Fahrenheit,"<<endl;
cout<<"The height at which the temperature is 0°C = "<<h0<<" in meters , "<<f0<<" in feets.\n";
return 0;
}

