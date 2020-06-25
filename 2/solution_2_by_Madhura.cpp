#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,a,b,j;
	char s1[100],s2[100],temp;
	bool result;
	gets(s1);
	gets(s2);
	a=strlen(s1);
	b=strlen(s2);
	if(a!=b)
		cout<<"The strings are not anagrams of each other\n";
	else
	{
		for(i=0;i<a-1;i++)
		{
			for(j=i+1;j<a;j++)
			{
				if(s1[i]>s1[j])
				{	
					temp=s1[i];
					s1[i]=s1[j];
					s1[j]=temp;
				}
		
				if(s2[i]>s2[j])
				{
					temp=s2[i];
					s2[i]=s2[j];
					s2[j]=temp;
				}
			}
		}
	
		for(i=0;i<a;i++)
		{
			if(s1[i]!=s2[i])
				result=false;
			else
				result=true;
		}
		
		if(result==true)
			cout<<"The strings are anagrams of each other";
		else
			cout<<"The strings are not anagrams of each other";
	}
	return 0;
}
