#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
	float length,bridth,area,height,r,b,h;
	
	int ch;
	switch(ch){
		case 1:
	
	cout<<"Enter the value of height";
	cin>>height;
	area=0.5*length*bridth;
	cout<<"\n area of triangle"<<area;
	break;

      case 2:
      	cout<<"\n Area of circle";
      	cout<<"enter the radius r =";
      	cin>>r;
      	area=2*3.14*r*r;
      	cout<<"\n the area of circle="<<area;
      	break;
      	case 3:
      		cout<<"\n area of parallelogram=";
      		cout<<"\n enter the value of base=";
      		cin>>b;
      		cout<<"\n enter the value of height=";
      		cin>>h;
      		area=b*h;
      		cout<<"\n the area of parallelogram=";
      		break;
      		case 4:
      			cout<<"\n area of circrumfirance";
      			cout<<"\n enter the value of radius=";
      			cin>>r;
      			area=2*3.14*r;
      			cout<<"\n area of circumfirance="<<area;
      			break;
      			default:
      				cout<<"\n invalid entery=";
      				break;
}

}
