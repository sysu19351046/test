#include<stdio.h>
int main()
{
	char c[4][30]={{"\0"},{"1.Hello everyone!"},{"2.My name is John."},{"3.Nice to meet all of you."}};
	int i,j,m=0,n=0,o=0,p=0,q=0;
	for(i=1;i<4;i++)
	printf("第%d行字符是:\n%s\n",i,c[i]);
	printf("\n");
	for(i=1;i<4;i++)
	{ for(j=0;j<30&&c[i][j]!='\0';j++)
	{  if(c[i][j]>='A'&&c[i][j]<='Z')
			m++;
		else if(c[i][j]>='a'&&c[i][j]<='z')
			n++;
		else if (c[i][j]==' ')
		    o++;
		else if(c[i][j]>='0'&&c[i][j]<='9')
			p++;
		else q++;
	}
	}
	printf("这三行字符中，大写英文字母的个数为%d\n小写英文字母的个数为%d\n空格的个数为%d\n数字的个数为%d\n其他字符的个数为%d\n",m,n,o,p,q);
	return 0;
}
