#include<iostream>
using namespace std;

class abc
{
	private : 
	int a,b;
	public:
	void setdata(int x,int y);
    void showdata();
    complex add(complex c);
};
abc :: setdata(int x,int y)
{
	a=x;
	b=y;
}
abc :: showdata()
{
	cout<<"value of a is "<<a;
	cout<<"value of b is "<<b;
}
abc::add(complex c)
{
	complex temp;
	temp.a=a+temp.a;
	temp.b=b+temp.b;
	return (temp);
}
int main()
{
	abc obj1,obj2,obj3;
    obj1.setdata(2,3);
    obj2.setdata(4,6);
    obj3=obj1.add(obj2);

}
