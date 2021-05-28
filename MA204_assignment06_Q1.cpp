// BISWARUP ROY
// BTECH/10048/19
// SEC A  'MECH ENGG'


#include <bits/stdc++.h>
using namespace std;

float f(float x){
	return 1/(1+x*x);
}

int main()
{
	float y, h,a,b,n,result;
	cout<<"\nEnter the lower limit : ";
	cin>>a;
	cout<<"\nEnter the upper limit : ";
	cin>>b;
	cout<<"\nNumber of sub intervals : ";
	cin>>n;
	h = (b-a)/n;
	y=f(a)+f(b);
	for (int i = 1; i < n-1; ++i)
	{
		y = y + 2*f(a+i*h);
	}
	result = (h*y)/2;
	cout<<"\nResult = "<<result;
	cout<<"\nAbsolute error = "<<abs(0.785398 - result);
	return 0;
}