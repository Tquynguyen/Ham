#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fib(int n);
void xuatdayfib(int n);
int main(int argc, char** argv) {
int n;
cout<<"Moi ban nhap n:";
cin>>n;
cout<<fib(n-1)<<endl;
xuatdayfib(n);
	return 0;
}
int fib(int n)
{if(n<2) return 1;
return fib(n-1)+fib(n-2);}
void xuatdayfib(int n)
{
cout<<"Day so fibonacci la:"<<endl;
for(int i=0;i<n;i++)
cout<<fib(i)<<"\t";}
