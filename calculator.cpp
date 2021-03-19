#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
int a, b;
void fAdd()
{
	
	cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"Result ="<<a+b<<endl;
}
void fSub()
{
	cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"Result ="<<a-b<<endl;
}
void fMull()
{
	cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"Result ="<<a*b<<endl;
}
void fDiv()
{
	cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"Result ="<<a/b<<endl;
}
void fsinab()
{
	cout<<"Give 1st no"<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"result : "<<sin(a)<<" result:  "<<sin(b)<<endl;
}
void fsqure()
{
	cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"result of 1st number: "<<a*a<<"  result of 2nd number: "<<b*b<<endl;
}
  void fqube()
{
		cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"result of 1st number: "<<a*a*a<<"  result of 2nd number: "<<b*b*b<<endl;
}
void fsqrt()
{

		cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"result of 1st number: "<<sqrt(a)<<"  result of 2nd number: "<<sqrt(b)<<endl;
}	
void ffortal()
{

	cout<<"Give 1st no."<<endl;
	cin>>a;
	cout<<"Give 2nd no."<<endl;
	cin>>b;
	cout<<"result of 1st number: "<<a*(a-1)<<"  result of 2nd number: "<<b*(b-1)<<endl;
}	

int main()
{
	char ch;
	cout<<"1: Add no."<<endl;
	cout<<"2: Subtract no."<<endl;
	cout<<"3: Mulltiply no."<<endl;
	cout<<"4: Divide no."<<endl;
	cout<<"5: sin no."<<endl;
	cout<<"6: squre no."<<endl;
	cout<<"7: qube no ."<<endl;
	cout<<"8: sqrt no ."<<endl;
	cout<<"9: ! "<<endl;
	cout<<"10:Exit"<<endl;
	
 	while(1)
	{
	
	ch=getche();
	if(ch=='1')
	fAdd();
	else
	if(ch=='2')
	fSub();
	else
	if(ch=='3')
	fMull();
	else
	if(ch=='4')
	fDiv();
	else
	if(ch=='5')
	fsinab();
	else
	if(ch=='6')
	fsqure();
	else
	if(ch=='7')
	fqube();
	else
	if(ch=='8')
	fsqrt();
	else
	if(ch=='9')
    ffortal();
	else
	if(ch=='10')
	break;
	else
		cout<<"Invalid input, Input again"<<endl;
        }
getch();
return 0;
}


