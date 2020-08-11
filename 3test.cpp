#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<fstream>
#include<math.h>
#include<string.h>
using namespace std;
int randomnumber(int n);
int der(string s1,int k);
int main()
{
	ifstream file;
	int i=0,r,n;
	string s1="",s2="";
	file.open("1.txt");
	n=0;
	while(file)
	{
		getline(file,s1);
		n++;
	}
	file.close();
	r=randomnumber(n-1);
	file.open("1.txt");
	i=0;
	while(file)
	{
		if(i==r)
			break;
		getline(file,s1);
		i++;
	//	cout<<s1<<" ->  s1\n";
	}
	s2=s1;
	file.close();
	file.open("2.txt");
	n=0;
	while(file)
	{
		getline(file,s1);
		n++;
	}
	file.close();
	r=randomnumber(n-1);
	file.open("2.txt");
	i=0;
	while(file)
	{
		if(i==r)
			break;
		getline(file,s1);
		i++;
	// 	cout<<s1<<" ->  s1\n";
	}
	s2+=" "+s1;
	file.close();
	file.open("3.txt");
	n=0;
	while(file)
	{
		n++;
		getline(file,s1);
	}
	file.close();
	r=randomnumber(n-1);
	file.open("3.txt");
	i=0;
	while(file)
	{
		if(i==r)
			break;
		getline(file,s1);
		i++;
	//	cout<<s1<<" ->  s1\n";
	}
	s2+=" "+s1;
	file.close();
	if(s1=="the")
	{
		file.open("the.txt");
		n=0;
		while(file)
		{
			getline(file,s1);
			n++;
		}
		file.close();
		r=randomnumber(n-1);
		file.open("the.txt");
		i=0;
		while(file)
		{
			if(i==r)
				break;
			getline(file,s1);
			i++;
		//	cout<<s1<<" ->  s1\n";
		}
		s2+=" "+s1;
		file.close();

	}
	else if(s1=="an")
	{
		file.open("an.txt");
		n=0;
		while(file)
		{
			getline(file,s1);
			n++;
		}
		file.close();
		r=randomnumber(n-1);
		file.open("an.txt");
		i=0;
		while(file)
		{
			if(i==r)
				break;
			getline(file,s1);
			i++;
		//	cout<<s1<<" ->  s1\n";
		}
		s2+=" "+s1;
		file.close();
	}
	else
	{
		file.open("a.txt");
		n=0;
		while(file)
		{
			getline(file,s1);
			n++;
		}
		file.close();
		r=randomnumber(n-1);
		file.open("a.txt");
		i=0;
		while(file)
		{
			if(i==r)
				break;
			getline(file,s1);
			i++;
		//	cout<<s1<<" ->  s1\n";
		}
		s2+=" "+s1;
		file.close();
	}
	cout<<"\nThe randomly generated sentence is:\n\n"<<s2<<"\n\n";
	return 0;
}
int randomnumber(int n)
{
	int r=0;
	srand(time(NULL));
	while(r==0)
	{
		r=(int)rand()%n+1;
	}
	return r;
}
