#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Vd dãy FB: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …
Tìm số FB tại vị trí thứ N bất kỳ
Xuất dãy FB từ 1 tới N
 */
int fib(int n);
void xuatdayfib(int n);
int main(int argc, char** argv) {
int n;
cout<<"Moi ban nhap n:";
cin>>n;
cout<<"So fibonaci thu "<<n<<" la "<<fib(n)<<endl;
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
cout<<fib(i+1)<<"\t";}
