//1.while循环
#define _CRT_SECURE_NO_WARNINGS 1
//while循环
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}

//2.getchar的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret=0;
	char password[20]={0};
	printf("请输入密码：>");
	scanf("%s",password);//输入密码，并存放到password数组中
	//缓冲区还剩余一个‘\n’(有我们自己在输入密码时敲击的回车键产生)，必去将其拿走，否则会被“getchar”读取
	//读取一下'\n'
	getchar();//此处第一个getchar将‘\n’读走，
	printf("请确认（Y/N）:>");
	ret=getchar();//第二个getchar直接从键盘上读取字符，赋值给ret
	if(ret=='Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认");
	}
	return 0;
}
//此函数额缺点是当输入密码使，如果中间间隔“空格”，依旧输出有问题，即“空格”使得缓存区还是没清空，第二给getchar在没有输入的情况下被赋值“空格”后面的字符
*/

//3.while循环例1
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret=0;
	int ch;
	char password[20]={0};
	printf("请输入密码：>");
	scanf("%s",password);//输入密码，并存放到password数组中
	//缓冲区还剩余一个‘\n’(有我们自己在输入密码时敲击的回车键产生)，必去将其拿走，否则会被“getchar”读取
	//读取一下'\n'
	while((ch=getchar())!='\n');//把缓存区清空，一边下一次能正确的输入赋值给下一个getchar(),至ret
	{
		;//空语句，不需要做任何事情，只需要一直“读”
	}
	printf("请确认（Y/N）:>");
	ret=getchar();//第二个getchar直接从键盘上读取字符，赋值给ret
	if(ret=='Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
*/

//while循环例2
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch;
	while((ch=getchar())!=EOF)
	{
		if(ch<'0'||ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}*/