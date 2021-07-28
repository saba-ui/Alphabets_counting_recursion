#include<iostream>
using namespace std;
int alphabet(int p,char n[],int i, int temp, int count,char s,int len)
{


	if(i>p)
	{
		cout<<s<<" is repeated "<<count<<" times";
		return count;
	
	}
	
else if (s==n[i])
            {
            i=i+1;
            temp=temp+1;
			count = count + 1;
			temp=count;
	cout<< endl; 
	 alphabet(p,n,i,temp,count,s,len);
}

else{
	 i=i+1;
	cout<< endl; 
	alphabet(p,n,i,temp,count,s,len);
	
}

}	  



int main()
{
	int i=0;
	int p;
		int temp=0;
	int count=0;
	cout<<"how many Alphabets do you want to enter:";
	cin>>p;
	char n[p];
		cout<<" Enter "<<p<<" Alphabets:";
			for(i=0; i<p; i++)
	{
		cin>>n[i];
		// if((n[i]!='a' && n[i]!='z') || (n[i]!='A' && n[i]!='Z'))
		  if((n[i]>='a' && n[i]<='z') || (n[i]>='A' && n[i]<='Z'))
		{
		
		}
		else
		{
			cout<<"Invalid input";
			return 0;
		}
		
	}
	cout<<"Alphabets are:    "<<endl;
		for(int i=0; i<p; i++)
	{
		cout<<n[i]<<"    ";
		
	}
cout<<"\n";
cout<<"which alphabet you wanna search : ";
char s;
cin>>s;

 int len = sizeof(n)/sizeof(n[0]);
i=0;
alphabet(p,n,i,temp,count,s,len);
}
