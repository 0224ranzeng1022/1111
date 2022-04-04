#include <stdio.h>
void main()
{
	char strExp[]="3+4";
	printf("计算%s的结果\n",strExp);
	int i=strExp[0]-'0';
	int j=strExp[2]-'0';
	printf("%d\n",i+j);
}
    //V0代码
#include <stdio.h>
void main()
{
	char strexp[]="1+2+2+1+2+5+4-1-3+4-8";
	int a=strexp[0]-'0';
	for( int i=0;i<20;i++)
	{
		if(strexp[i]=='+')
		{
			int b=strexp[i+1]-'0';
			a=a+b;
			i++;
		}
		else if(strexp[i]=='-')
		{
			int b=strexp[i+1]-'0';
			a=a-b;
			i++;
		}
	}
	printf("a=%d",a);
}
	//V1代码
#include <stdio.h>
void main()
{
	char strexp[]="2*2/4*1/1*2*3/2";
	int a=strexp[0]-'0';
	for( int i=0;i<14;i++)
	{
		if(strexp[i]=='*')
		{
			int b=strexp[i+1]-'0';
			a=a*b;
			i++;
		}
		else if(strexp[i]=='/')
		{
			int b=strexp[i+1]-'0';
			a=a/b;
			i++;
		}
	}
	printf("a=%d\n",a);
}
	//V2代码
#include <stdio.h>
void main()
{
	char strexp[]="2+2*3+2/2-1";
	int i,a,b,c,d;
	a=strexp[0]-'0';
	b=(strexp[2]-'0')*(strexp[4]-'0');
	c=(strexp[6]-'0')/(strexp[8]-'0');
	d=strexp[10]-'0';
	i=a+b+c-d;
	printf("%d\n",i);
	//V3代码
}
