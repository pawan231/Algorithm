//Z function
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int i,l,r,k;
	string s;
	cin>>s;
	int *z=new int[s.length()+1];
	//int z[100];
	z[0]=0;
	l=r=0;
	for(i=1;i<s.length();i++)
	{
		if(i>=r)
		{
			l=r=i;
			while(r<s.length() && s[r]==s[r-l])
				r++;
			z[i]=r-l;
			r--;
		}
		else
		{
			k=i-l;
			if(z[k]+i<r+1)
				z[i]=z[k];
			else
			{
				l=i;
				while(r<s.length() && s[r]==s[r-l])
					r++;
				z[i]=r-l;
				r--;
			}
		}
	}
	
	for(i=0;i<s.length();i++)
		cout<<z[i]<<" ";
}
