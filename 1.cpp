#include<iostream>


int main()
{
	int x=1,y=2;
	int *ptr=&x;
	y = *ptr+1;
	std::cout<<y;
}
