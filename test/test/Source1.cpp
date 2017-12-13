#include<iostream>
#include<Windows.h>
#include<processenv.h>
int main()
{

	std::cout<<GetCommandLineA();
}