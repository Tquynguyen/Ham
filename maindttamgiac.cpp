#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double chuvi(int a,int b,int c);
double dtich (int a,int b,int c);
bool kiemtra (int a, int b, int c);
int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Nhap a:"<<"\t";
	cin>>a;
	cout<<"Nhap b:"<<"\t";
	cin>>b;
	cout<<"Nhap c:"<<"\t";
	cin>>c;
	bool kt=kiemtra (a,b,c);
	if(kt==false)
	{cout<<"Tam giac ban nhap khong hop le";
	return -1;}
	double cv=chuvi(a,b,c);
	double dt=dtich(a,b,c);
	cout<<"Chu vi tam giac:"<<cv<<endl;
	cout<<"Dien tich tam giac:"<<dt<<endl;
	return 0;
}
double chuvi(int a,int b,int c)
{return(a+b+c)*1.0/2;}
double dtich(int a, int b, int c)
{double p= (a+b+c)/2;
double dtich=sqrt(p*(p-a)*(p-b)*(p-c));
return dtich;}
bool kiemtra (int a, int b, int c)
{if (a<=0||b<=0||c<=0||a>=(b+c)||b>=(a+c)||c>=(b+a))
return false;
return true;}
