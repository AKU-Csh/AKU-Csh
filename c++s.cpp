 //#include <iostream>
//using namespace std;
//int main ()
/*{
    cout<<1<<"\t"<<2<<"\t"<<3<<endl;
    cout<<4<<"\t"<<5<<"\t"<<6<<endl;
    cout<<7<<"\t"<<8<<"\t"<<9<<endl;
	return 0;
}*/



/*#include <iostream>
using namespace std;
int main ()
{
	int a = 6,b = 7;
	int c,d;
	c = a++;//c的结果是+1之前的结果  后面继续执行了a=a+1 
	d = b--;//         -1
	//后置++、--的优先级>前置++、--的优先级>乘除的优先级 
	cout<<c<<"\t"<<d<<"\t"<<a<<"\t"<<b;
	 
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main ()
{
	double a = 1.0;
	double b = -4.0;    //声明并初始化变量a,b,c 
	double c = 3.0;
	cout<<(b*b-4*a*c == 0)<<endl;//判断delta是否等于0 
	cout<<(b*b-4*a*c > 0)<<endl;//判断delta是都大于0 
	return 0;//ture存1 false存0 
}*/

/*#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	while(1){//循环语句    
	cin>>a>>b;
	cout<<(a==b)<<endl; 
	}
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main ()
{
	int y;
	bool f;
	cin>>y;
	f= (y%4==0 && y%100 !=0)||(y%400 ==0);
	cout<<f<<endl;
	return 0;
}*/


//加密字符 
/*#include <iostream>
using namespace std;
int main()
{
	char c;
	char ec;
	int k;
	cout<<"Please input a lower character and k"<<endl;
	cin>>c>>k;//输入字符c 
	ec=((c-'a')+k)%26+'a';//加密公式 
	cout<<ec<<endl;
	return 0;
}*/


/*
华氏温度转化为摄氏温度 
#include <iostream>
using namespace std;
int main ()
{
double f,c;//声明双精度变量f,c 
cin>>f;//输入华氏温度 
c = 5.0/9.0*(f-32);//摄氏度转化公式 
cout<<c<<endl;
return 0;
}
*/

/*
计算数学函数式的值
#include <iostream>
#include <cmath>//因为要用到sin cos函数 
using namespace std;
int main()
{
double x;//声明双精度变量x 
double y;//声明双精度变量y 
cin>>x;
y = sin(x*x)/(1-cos(x));//题目所给公式 
cout<<y;
return 0;
}
*/

/*
数据的简单统计
#include <iostream>
using namespace std;
int main()
{
int x,y,z;
cin>>x>>y>>z;
cout<<x+y+z<<"\n"<<(x+y+z)/3.0<<"\n"<<int((x+y+z)/3.0+0.5)<<endl;
//因为C++中简化了printf函数，所以直接按照所给格式计算输出即可
//不用再将和  平均值  四舍五入存进变量中   
return 0;
} 
*/

/*
找零钱 
#include <iostream>
using namespace std;
int main ()
{
int a,b,c,d,e,J;
a = 50;
b = 20;
c = 10;
d = 5;
e = 1;
//这里可以不用声明并初始化变量a,b,c,d,e
//在下面的cout中直接将a b c d e替换成数字即可 
cin>>J;
cout<<J/a<<" "<<J%a/b<<" "<<J%a%b/c<<" "<<J%a%b%c/d<<" "<<J%a%b%c%d/e<<endl;
return 0;
}
*/

/*
小写转大写
#include <iostream>
using namespace std;
int main()
{
char c;//声明字符常量c 
cin>>c;
c >='a'?cout<<char(c-32):cout<<c;//这里使用了三目运算符...?...:... 
//a的ASCII码数值是97,A的ASCII码数值是65，两者相差32 
//这个运算符是  条件？关系式（如果true的话）：关系式（如果false的话） 
return 0;
} 
*/


//作业题 
/*#include <iostream>
using namespace std;
int main()
{
int e=8;
double f=6.4,g=8.9;
cout<<f+int(e/3*int(f+g)/2)%4<<endl;
return 0;
}*/

/*#include <stdio.h>
int main ()
{
	float a,b,t;//声明float型变量 
	scanf("%f%f",&a,&b);//以小数形式输入ab 
	if(a>b)
{
	t = a;
	a = b;
	b = t; 
}	
	printf("%5.2f,%5.2f\n",a,b);
	return 0;
 } */
 
 
 
/* #include <stdio.h>
int main()
{
    int a;
    char b;
    printf("Please enter your score:");
    scanf("%d", &a);
    if (a >= 90) b = 'A';
    else
        if (a >= 80) b = 'B';
        else
            if (a >= 70) b = 'C';
            else
                if (a >= 60) b = 'D';
                else
                    b = 'E';
    printf("成绩：%d  评分：%c", a,b);
        return 0;
}*/

/*#include <stdio.h>
int main ()
{
	
	void action1(int,int);
	void action2(int,int);
	char c;
	int a = 15,b = 23;
	c = getchar();
	switch(c)
	{
		case'a':
		case'A':action1(a,b);break;
		case'b':
		case'B':action2(a,b);break;
		default:putchar('\a');
	 } 
	return 0;
}
    void action1(int x ,int y) 
    {
    	printf("x + y = %d\n",x+y);
	}
	void action2(int x , int y)
	{
		printf("x * y = %d\n",x*y);
	}
	*/


/*#include <iostream>
using namespace std;
double power (double x ,int n);
int main()
{
 int n;
 double x;
 cout<<"输入x、n :";
 cin>>x;
 cin>>n;
 cout<<"x的n次方是："<<power(x,n)<<endl; 
}
double power (double x ,int n)
{
	double val = 1.0;
	while(n--)
	val = val * x;
	return (val);
}
*/

/*
//求解一元二次方程的解 
#include <stdio.h>
#include <math.h> 
int main ()
{
	double a,b,c,disc;//声明双精度浮点型变量 
	double x1,x2,realpart,imagpart;//声明双精度浮点型变量
	scanf("%1f %1f %1f",&a,&b,&c); 
	printf("The equation");
	if(fabs(a) <= 1e-6)//fabs()为求绝对值函数  1e-6为1*10的-6次方 
		printf("It's not a quadratic");
	else
	{
		disc = b * b - 4 * a * c;//delta公式 
		if(fabs(disc) <= 1e-6)
			printf("Has two equal roots:%8.4f\n",-b/(2*a));
		else
			if(disc > 1e-6)
			{
				x1 = (-b +sqrt(disc))/(2*a);
				x2 = (-b -sqrt(disc))/(2*a);
				printf("Has distinct real roots:%8.4f and %8.4f\n",x1,x2);
				
			 } 
			 else
			 {
			 	realpart = -b / (2 * a);
			 	imagpart = sqrt(-disc)/(2*a);
			 	printf("Has complex roots:\n");
			 	printf("%8.4f + %8.4fi\n",realpart,imagpart);
			 	printf("%8.4f - %8.4fi\n",realpart,imagpart);
			  } 
	}
	return 0;
 } 
*/

/*#include <stdio.h>
int main ()
{
	int i , j , sum = 0;
	printf("Please enter i j = ?");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		sum = sum + j;
	}
	printf("sum = %d\n",sum);
	return 0;
}*/
/* 

#include <stdio.h>
int main()
{
	int f1,f2,f3,i ;
	f1 = 1;
	f2 = 1;
	 printf("%12d\n%12d\n",f1,f2);
	 for(i=1;i<=15;i++)
	 {
	 	f3 = f1 + f2;
	 	printf("%12d\n",f3);
	 	if(f3>100) continue;//continue是结束本次循环  
		                    //跳过下面的语句 强迫开始下一次循环
	 	f1 = f2;
	 	f2 = f3;
	 }
	return 0;
}*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	printf("Please enter a number:");
	scanf("%d",&n);
	k = sqrt(n);//给n开根号  也就是计算二分之n 
	for(i=2;i<=k;i++)
	   if(n%i==0)  break;
	     if(i<=k)
	     printf("%d is not a prime number.\n",n);
	     else
	     printf("%d is a prime number.\n",n);
	return 0;
 }*/ 

/*#include<stdio.h>
int main(){
int max(int x,int y);
int a,b,c;
printf("input a&b:");
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("max=%d\\n",c);
return 0;
}
int max(int x,int y){
int z;
if(x>y) z=x;else z=y;
return(z);
}*/

/*#include <stdio.h>
int main()
{
	char a[2][50];//数组中包含两个元素，每个元素是字符类型，字符串的长度是50个字符 
	scanf("%s", &a);//输入字符 
	printf("This program is coded by %s %s.\n", a);
	return 0;
}*/

/*author: Cuisuhang
 *program name:求1×2×3×4×5的结果
*/

/*#include <stdio.h>
 int main ()
 {
 	int a
 	a = 1 * 2 * 3 * 4 * 5;
 	printf("1×2×3×4×5的结果是：%d\n",a);
 	return 0;
 }*/
 
/*#include <stdio.h>
int main ()
{
	int i , j;
	j =1;
	for(i=1;i<=5;i++)
	{
		j = j * i;
	}
	printf("1×2×3×4×5的结果是：%d\n",j);
	return 0;
 }*/
 
/*#include <stdio.h> 
int main ()
{
	int i = 1 , j = 1;
	while(i<=5)
	{
		j = j * i;
		i++;
	}
	printf("1×2×3×4×5的结果是：%d\n",j);
	
	return 0;
}*/

/*#include <stdio.h>
int main ()
{
	int a , b , c , d , e;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	printf("1×2×3×4×5的结果是：%d\n",a*b*c*d*e);
	return 0;
}*/

/*
**author:         Cuisuhang
  student number: 2021020276
*/
/*
#include <stdio.h>
int main ()
{
	int num[50];//定义学号的整型类数组 
	int score[50];//定义成绩的整型类数组 
	int i;
	for(i=1;i<=50;i++)//for循环50次 
	{
		printf("请输入第%d个学生的学号：\n",i);
		scanf("%d",&num[i]);
		printf("请输入第%d个学生的成绩：\n",i);
		scanf("%d",&score[i]);
	}
	for(i=1;i<=50;i++)
	{
		if(score[i]>=80)//成绩大于80为真 
		{
			printf("80分以上的学生的学号和成绩分别是：%d %d",num[i],score[i]);//输出第i个学生的学号和成绩 
		}
	}
	
	return 0;
}*/


/**author:         Cuisuhang
  student number: 2021020276*/
/*
#include <stdio.h>
int main ()
{
	int i , j;
	for(i=2000;i<=2500;i++)
	{
		if((i%4==0&&i%100 != 0)||i%400==0)
		  j = 1;//闰年 
		else
		  j = 0;//不是闰年 
		  
			if(j)
		 		printf("%d年是闰年\n",i); 
		 	else
	    		printf("%d年不是闰年\n",i);
    }
	return 0;
}*/
//实验报告2 
/*
#include<stdio.h>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(437);
	int c1 , c2;
	char c3 , c4;
	c1=-100; 
	c2=-101;
	c3 = c1;
	c4 = c2;
	printf("%c %c\n",c3,c4);
	printf("%d %d\n",c3,c4);
	return 0;
}*/

/*
#include<stdio.h>
int main(){
int a,b;
float x,y;
char c1,c2;
scanf("a=%db=%d",&a,&b);
scanf("%f%e",&x,&y);
scanf("%c%c",&c1,&c2);
printf("a=%d b=%d\n x=%f y=%e\n c1=%c c2=%c",a,b,x,y,c1,c2);
return 0;
}*/

/*
#include<stdio.h>
int main(){
    int i,j,m=0,n=0;
    i=8;
	j=10;
	m+=i++;
	n-=- -j;
	printf("i=%d,j=%d,m=%d,n=%d\n",i,j,m,n);
	
	return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int i,j;
    i=8;
	j=10;
	printf("%d,%d\n",++-i,++j);
	
	return 0;
}*/


/*#include<stdio.h>
int main(){
    int i,j,m=0,n=0;
    i=8;
	j=10;
	//m+=i++;n-=- -j;
	printf("i=%d,j=%d,m=%d,n=%d\n",i++,j++,i,j);
	return 0;
}*/

/*
#include <stdio.h>
#include <math.h> 
int main()
{
	int  n;
	float r , p; 
	printf("请输入年增长率：");
	scanf("%f",&r);
	printf("请输入年数：");
	scanf("%d",&n);
	p = pow((1 + r),n);
	printf("10年后我国国民生产总值与现在相比增长%f倍",p);
	
	return 0;
}*/
//素数（输出一堆重复，但正确） 
/*#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	for(n=100;n<=200;n++)//n从100开始，到200结束 
	{	
		k = sqrt(n);//给n开根号  也就是计算二分之n 

		for(i=2;i<=k;i++)//除到n/2 
	    {
	   		if(n%i==0)  break;
	     	 
		}//当i<=k不成立的时候 n就跳出了循环 
		if(i>k)
	    	{
		 		printf("%d是素数\n",n);
			}
	}
	return 0;
 }

  
/* 
#include <stdio.h>
int main()
{
	int i , k , l,j;//定义变量i，j , k ，l 
	for(l=100;l<=200;l++)//l为被除数，从100开始 
	{		
		for(i=2;i<=l;i++)//i为除数，从2开始 
		{
			if(l%i==0)//若能被i整除，跳出循环 
				break;
			else
			  	if(i<=l-1)//不能被i整除且i<=l-1 
				  	j = 1;//l为素数 
	}
	 			 if(j)//判断素数 
        {
            printf("%d\n",l);
            j = 0;//输出素数，并给j赋值0 
        }
	}
	return 0;
 }*/

//辗转相除法 
/*#include <stdio.h>
int main()
{
	int m , n , i;
	scanf("%d %d",&m,&n);
	i = m % n;
	while(i!=0)//当余数i不等于0时开始循环 
	{
		m = n;//将n的值交换给m 
		n = i;//将i的值交换给n
		i = m % n;//求余 
	}
	printf("%d\n",n);
	return 0;
}*/ 

/*枚举法 
#include <stdio.h>
int main()
{
	int a , b , c , gys ,i;
	scanf("%d%d",&a,&b);//输入要比较的两个数 
	a>b?c=b:c=a;//将两数之中最小的数赋值给C 
	for(i=1;i<=c;i++)//从1求余到最小的那个数本身 
	{
	if(a%i==0&&b%i==0)//找一个数能将a,b同时除尽的数i 
	gys = i;//将其赋值给gys 
	}
	printf("%d和%d的最大公约数=%d",a,b,gys);
	return 0;
	} 
*/
/*更相减损法 
#include <stdio.h>
 int main()
 {
 	int a , b;
 	scanf("%d%d",&a,&b);
 	while(a!=b)//a,b不相等，大数减小数，直到相等为止 
 	{
 		if(a>b)
 		a=a-b;
 		else
 		b=b-a;
 		
	 }//a=b时结束循环 
	 printf("a,b的最大公约数为：%d",a);//无论是a还是b，结果都一样 
	 return 0;
  } 
 
*/
/* 
#include <stdio.h>
int main()
{
	char c1 , c2 , c3 ,c4 , c5;
	c1 = 'T';
	c2 = 'o';
	c3 = 'd';
	c4 = 'a';
	c5 = 'y';
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	if(c1=='E') c1='A';
	if(c1=='A') c1='W';
	c1-=4;
	c2-=4;
	c3-=4;
	c4-=4;
	c5-=4;
	printf("\n%c%c%c%c%c",c1,c2,c3,c4,c5);
}
//作业 
/*#include <stdio.h>
#define PAI 3.14
int main()
{
	float r;
	int h;
	float C , S , SB , V , VZ;
	scanf("%f %d",&r,&h);
	C = 2 * PAI * r;
	S = PAI * r * r;
	SB = 4 * PAI * r * r;
	V = 4 / 3 * PAI * r * r * r;
	VZ = PAI * r * r * h;
	
	printf("圆周长为：%.2f\n",C);
	printf("圆面积为：%.2f\n",S);
	printf("圆球表面积为：%.2f\n",SB);
	printf("圆球体积为：%.2f\n",V);
	printf("圆柱体积为：%.2f\n",VZ);
	return 0;
}*/
//求实数n次方根 
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x , n;
	while(1)
	{
		cin>>x>>n;
		if(x==0&&n==0)
		{
		cout<<"Program terminationed"<<endl;
		break;
		}
		else if((x<0&&n<=0)||(x<0&&1/n!=int(1/n)))
		{
		cout<<"error reinput"<<endl;
		continue;
		}
	cout<<x<<"\t"<<n<<"th root"<<pow(x,1.0/n)<<endl;
	}
	return 0;
 } */
 
 //求自幂数
 /*
#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	int n;//位数
	int start , end;//n位数的起始值与终止值 
	int m;//待判断的数 
	int digit;//个位数的值 
	int sum;//各 位数 的n次方 的和 
	int i;//循环变量 
	cout<<"求n位自幂数  请输入位数:";
	cin>>n; 
	while(n>0)
	{
		start = pow(10,n-1);
		end = pow(10,n) - 1;
		cout<<n<<"位自幂数";
		for(i=start;i<=end;i++)
		{
			m = i;
			sum = 0;
			while(m!=0)
			{
				digit = m % 10;
				sum = sum + pow(digit,n);
				m = m / 10;
			}
			if(sum==i)
			{
				cout<<i<<endl;
			}
		 }
		 cout << endl;
		cout << "求n位自幂数，请输入位数：";
		cin >> n; 
	 } 
	 cout << endl;
	 return 0;
 }*/

 
//小写转大写 
/*#include <iostream>
using namespace std;
int main()
{
	char str[10];//定义一个不超过10的字符型数组
	int i = 0;//下标
	cin>>str;
	while(str[i]!='\0')
	{
		str[i]=str[i]-32;//给当前下标所表示的字母减去32（ASCII）
		i = i + 1; 
	 } 
	 cout<<str<<endl;
	 return 0;
 }*/


/*结构体类型定义方法
  struct 结构体名
  {
  	类型名1  成员名表1；
	类型名2  成员名表2；
	类型名n  成员名表n； 
  };
同一结构体的成员不能同名，但可与结构体外的其他变量同名*/

/*结构体变量的声明方法
  struct 结构体名  变量列表
  
  声明时机
  1.定义结构体类型后声明
  	struct Date today
  2.定义结构体类型同时声明，可以省略结构体名
  	struct Date{int year,month,day;} today; */
 
//简易通讯录
/*C++版 
#include <iostream>
using namespace std;
int main()
{
	struct telelist{
		char name[8];//名字 
		char sex;//性别 
		char num1[5];//电话号码1 
		char num2[5];//电话号码2 
					}
		list1[3];//三个联系人 
		int i;//计数器 
	for(i=0;i<=2;i++)//正序输入 
	cin>>list1[i].name>>list1[i].sex>>list1[i].num1>>list1[i].num2;
	for(i=2;i>=0;i--)//倒序输出 
	cout<<list1[i].name<<"/"<<list1[i].sex<<"/"<<list1[i].num1<<"/"<<list1[i].num2<<endl;
	return 0;	
}*/

//C语言版
/*
#include <stdio.h>
int main()
{
	struct telelist{
		char name[20];
		char sex[5];
		char num1[11];
		char num2[11];
					}
	list1[3];
	int i;
	for(i=0;i<=2;i++)//正序输入
	{
		scanf("%s %s %d %d",&list1[i].name,&list1[i].sex,&list1[i].num1,&list1[i].num2);
	}	
	for(i=2;i>=0;i--)//倒序输出
	{
		printf("姓名：%s\n",list1[i].name);
		printf("性别：%s\n",list1[i].sex);
		printf("联系方式1：%d\n",list1[i].num1);
		printf("联系方式2：%d\n",list1[i].num2);	
	} 
	return 0;
 }*/ 
 
//三色球
/*
#include <iostream>
using namespace std;
enum COLOR {red,yellow,blue};//枚举 颜色 
int main()
{
	enum COLOR first,second;//用int来定义也可以正常运行 
	for(first=red;first<blue;first=(COLOR)(first+1))//第一次取球 取不到蓝球因为没组合了 
	{                              //给first+1就变成了整数形式所以要强制转换成枚举类型 
		for(second=(COLOR)(first+1);second<=blue;second=(COLOR)(second+1))
		{
			int i;
			for(i=0;i<2;i++)//执行两次循环 
			{
				int temp;
				if(i==0) temp=first;//i=0时 临时变量temp为first 
				if(i==1) temp=second;//i=1时 临时变量temp为second
				switch(temp)//当first为red时输出red 循环后为second输出yellow 
				{
					case red : cout<<"red";		break;
					case yellow : cout<<"yellow";	break;
					case blue : cout<<"blue";	break;
				}
			}
			cout<<endl; 
		}
	}
	return 0;
 }

//冒泡排序

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a[100];
	int N;
	int i = 0 , j = 0;
	cin>>N;
	
	for(i=0;i<N;i++)
	cin>>a[i];
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}*/
/*
#include<stdio.h>
int main(){
	int m= 0;
	int n= 0;
	printf("请输入两个数，求最大公约数：");
	scanf("%d%d",&m,&n);
	while(m!=n)
	{
		if(m>n)
		m = m - n;
		if(m<n)
		n = n - m;
	 } 
	 printf("%d\n",m);
	 return 0;
}*/

/*
#include<stdio.h>
int main(){
	int a,b;
	float d,e;
	char c1,c2;
	double f,g;
	long m,n;
	unsigned int p,q;//无符号int类型 
	int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;
	a=61;
	b=62;
	c1=a;
	c2=b;
	f=3157.890121;
	g=0.123456789;
	d=f;
	e=g;
	p=a=m=50000;
	q=b=n=-60000;
	
	
	s1 = sizeof(a);
	s2 = sizeof(b);
	s3 = sizeof(c1);
	s4 = sizeof(c2);
	s5 = sizeof(d);
	s6 = sizeof(e);
	s7 = sizeof(f);
	s8 = sizeof(g);
	s9 = sizeof(m);
	s10 = sizeof(n);
	s11 = sizeof(p);
	s12 = sizeof(q);
	
	printf("a=%d,b=%d\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n",a,b,c1,c2,d,e);
	printf("f=%15.6f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u\n",f,g,m,n,p,q);
	
	printf("int型变量a所占字节为:%d\nint型变量b所占字节为:%d\n",s1,s2);
	printf("float型变量d所占字节为:%d\nfloat型变量e所占字节为:%d\n",s5,s6);
	printf("char型变量c1所占字节为:%d\nchar型变量c2所占字节为:%d\n",s3,s4);
	printf("double型变量f所占字节为:%d\ndouble型变量g所占字节为:%d\n",s7,s8);
	printf("long型变量m所占字节为:%d\nlong型变量n所占字节为:%d\n",s9,s10);
	printf("unsigned int型变量p所占字节为:%d\nunsigned int型变量q所占字节为:%d\n",s11,s12);
}*/
//结构体求利息 
/*
#include <stdio.h>
#define one 0.015
#define two 0.0275
#define three 0.021
#define five 0.03
#define huo 0.0035
//利息=本金×利率×时间
int main()
{
	struct Money1
	{
		int money = 1000;
		double f1 = money * five * 5;
	
	}Fangfa1;
	
	struct Money2
	{
		int money = 1000;
		double f1 = money * two * 2;
		double f2 = f1 + money * three * 3;
	
	}Fangfa2;
	
	struct Money3
	{
		int money = 1000;
		double f1 = money * two * 2;
		double f2 = f1 + money * three * 3;
	
	}Fangfa3;
	
	struct Money4
	{
		int money = 1000;
		double f1 = money * one * 1;
		double f2 = (money + f1) * one * 1;
		double f3 = (money + f2 + f1) * one * 1;
		double f4 = (money + f3 + f2 + f1) * one * 1;
		double f5 = (money + f4 + f3 + f2 + f1) * one * 1;
		double f6 = f1 + f2 + f3 + f4 + f5; 
				
	}Fangfa4;
	
	struct Money5
	{
		int money = 1000;
		double f1 = money * huo / 4 * 20;
	
	}Fangfa5;
	
	printf("一次存5年期的利息为:%f\n",Fangfa1.f1);
	printf("先存2年期，到期后将本息再存3年期的利息为:%f\n",Fangfa2.f2);
	printf("先存2年期，到期后将本息再存3年期的利息为:%f\n",Fangfa3.f2);
	printf("存1年期，到期后将本息再存1年期，连续存5次的利息为:%f\n",Fangfa4.f6);
	printf("存活期存款。活期利息每一季度结算一次的利息为:%f\n",Fangfa5.f1);
	
	return 0;
}
/*
#include <stdio.h>
#define one 0.015
#define two 0.0275
#define three 0.021
#define five 0.03
#define huo 0.0035

int main ()
{
	
}
*/

/*
#include <stdio.h>
int main()
{
	int c1 , c2;
	printf("Please enter two characters:");
	c1 = getchar();
	c2 = getchar();
	printf("The output using the putchar function is:");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("The output using the printf function is:");
	printf("%c%c",c1,c2);
	return 0;
}*/

//实心菱形
/* 
#include <stdio.h>
int main()
{
	int i,j;//i为层数 
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)//上半部分有5行，每一层星号左边的空格数都为5-i 
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)//每一行都有行数的2倍-1个星星 
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=4;i>=1;i--)//下半部分为4行，从第四行开始，逐层递减 
	{
		for (j=1;j<=5-i;j++)
		{
			printf(" ");
		} 
		for (j=1;j<=i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/
//空心菱形
/* 
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Please Enter n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)//将菱形分为上下两部分，n控制上三角行数 
 {
  for(j=1;j<=n+i-1;j++)//上半部分有5行，每一层星号左边的空格数都为n-i 
  if(j==n-i+1||j==n+i-1)//n-i+1为左边的星星  n+i-1为右边的星星 
     printf("*");
  else 
     printf(" ");//除星星之外的位置全是空格 
  printf("\n");      
 }
 for(i=1;i<n;i++)//控制下三角形的行数 
 {
  for(j=1;j<=2*n-i-1;j++)//每一行都有行数的2倍-1个星星 
  if(j==i+1||j==2*n-i-1)//左边从第二个开始 右边同理 
  printf("*");
  else
  printf(" ");
  printf("\n");
 } 
 return 0;
}*/

/*
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Please Enter n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)//将菱形分为上下两部分，n控制上三角行数 
 {
  for(j=1;j<=n+i-1;j++)//上半部分有5行，每一层星号左边的空格数都为n-i 
  if(j==n-i+1||j==n+i-1)//n-i+1为左边的星星  n+i-1为右边的星星 
     printf("*");
  else 
     printf(" ");//除星星之外的位置全是空格 
  printf("\n");      
 }
 for(i=1;i<n;i++)//控制下三角形的行数 
 {
  for(j=1;j<=2*n-i-1;j++)//每一行都有行数的2倍-1个星星 
  if(j==i+1||j==2*n-i-1)//左边从第二个开始 右边同理 
  printf("*");
  else
  printf(" ");
  printf("\n");
 } 
 return 0;*/

 
//P137 . 7
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int sum1 , sum2 , k;
	float sum3;
	
	for(k=1,sum1=0;k<=100;k++)
	{
		sum1+=k;
	}
	for(k=1,sum2=0;k<=50;k++)
	{
		sum2 += pow(k,2);
	}
	for(k=1,sum3=0;k<=10;k++)
	{
		sum3 += 1/k;	
	}
	printf("%lf",sum1+sum2+sum3);
   }*/
   
/*P137 9
#include <stdio.h>
int main()
{
	int i , j ,n , sum;
	printf("输出范围上限：");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		sum = 1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			sum += j;
		}
		if(sum==i)
		printf("%d是完数\n",i);
	} 
	return 0;
   }  
*/
/*
S20

#include <stdio.h>
int main ()
{
	double n = 1 , m = 2 , sum = 0;
	double temp;
	int i;
	while(i<=20)
	{
		double fs = m / n;
		temp = n;
		n =m;
		m = temp + n;
		sum += fs;
		i++;	   
	}
	printf("%lf",sum);
	return 0;
 }*/

/*
#include <stdio.h>
int main ()
{
	double s , n = 100 , m = 50 , h = 100;
	double s1 = 0 , s2 = 0;
	int i , j , k = 1;
	
	for(i=1;i<=10;i++)
	{
		s1 += n;
		n = n / 2;
	}
	for(j=1;j<=9;j++)
	{
		s2 += m;
		m = m / 2;
	}
	s = s1 + s2;
	while(k<=10)
	{
		h = h / 2;
		k++;
	}
	printf("在第十次下落共经过%lf米",s);
	printf("在第十次反弹%lf米",h);
	return 0;
	
} */

//猴子偷桃
/*
#include <stdio.h>
int main()
{
	int i;
	int r = 1 , total , peach;
	for(i=1;i<10;i++)
	{
		peach = (r + 1)*2;
		r = peach;
	}
	total = peach;
	printf("第一天有%d个桃子",total);
 }
*/
/*
#include <stdio.h>
int main ()
{
	int a = 3 , b = 4 , c = 5;
	int a1 , a2 , a3 , a4 , a5 , x ,y;
	
	a1 = a+b>c&&b==c;
	a2 = a||b+c&&b-c;
	a3 = !(a>b)&&!c||1;
	a4 = !(x=a)&&(y=b)&&0;
	a5 = !(a+b)+c-1&&b+c/2;
	
	printf("a1的值是%d\n",a1);
	printf("a2的值是%d\n",a2);
	printf("a3的值是%d\n",a3);
	printf("a4的值是%d\n",a4);
	printf("a5的值是%d\n",a5);
 }*/
/*
#include <stdio.h>
#include <math.h>
int main ()
{
	int a , b , c;
	printf("请输出一个不大于1000的正数：");
	scanf("%d",&a);
	while(a>1000||a<0)
	{
		printf("请重新输入：");
		scanf("%d",&a); 
	 } 
	 b = (int)sqrt(a);
	 printf("%d的平方根为%",a,b);
 }*/
/*
#include <stdio.h>
int main()
{
	int x , y , i , j;
	printf("输入x：");
	scanf("%d",&x);
	
	if(x<1) j=1;
	if(x<10&&x>=1) j=2;
	if(x>=10) j=3;
	
	switch(j)
	{
		case 1 : printf("y的值为%d",y=x);break;
		case 2 : printf("y的值为%d",y=2*x-1);break;
		case 3 : printf("y的值为%d",y=3*x-11);break;
	 } 
	 return 0;
 }*/
 /*P109 9		
#include<stdio.h>
int main()
{
		int a , n = 0 , i;
		printf("输入一个不多于5位的正整数：");
		scanf("%d",&a);
		while(a!=0)
		{
			a = a / 10;
			++n;
		}
		printf("%d位数",n);
	}
*/	
/*	
#include<stdio.h>
int main()
{
		int a , n = 0 , i,j,m;
		int b[m];
		scanf("%d",&m);
		printf("输入一个不多于%d位的正整数：",m);
		scanf("%d",&a);			
			
			for(j=m-1;j>=0;j--)
			{
				i = a % 10;
				a = a / 10;
				b[j]=i;
			}
			for(j=0;j<=m-1;j++)
			{
				printf("%d ",b[j]);
			}
			return 0;
		}
*/							
	

/*
#include<stdio.h>
int main()
{
		int a[5];
		int n,m;
		int i,j,l;
		
		scanf("%d",&n);
		printf("输入一个不多于%d位的正整数：",n);		
		scanf("%d",&m);
		
		while(m!=0)
		{
			
			for(i=4;i>=0;i--)
			{
				l = m % 10;
				m = m / 10;
				a[i]=l;
			}
		}
		for(i=1;i<=5;i++)
		{
			printf("%d,",a[i]);
					}		
	return 0;	
 }*/
/* 
 #include <stdio.h>

int main()
{
 printf("请输入电文：\n");
 char c;
 while(1)
 {
  c=getchar();
  while(c!='\n')
  {
   if((c>='B'&&c<='Y')||(c>='b'&&c<='y'))
   {
    c=c-4;
    printf("%c",c);
   }
   else if((c>='Z'&&c<='A')||(c>='z'&&c<='a'))
   {
    c=c+22;
    printf("%c",c);
   }
  }
  if(c=='\n')
  {
   break;
  }
 }
}*/
/*
#include <stdio.h>
int main()
{
	char c;
	
	while(1)
	{
	
	c = getchar();
	if((c<='A'&&c>='Z')||(c<='a'&&c>='z'))
    c=c+22;
   else if((c>='B'&&c<='Y')||(c>='b'&&c<='y'))
    c=c-4;
    printf("%c",c);
    break;
}*/
//成绩if语句
/* 
#include <stdio.h>
int main()
{
    int a;
    char b;
    printf("Please enter your score:");
    scanf("%d", &a);
    if (a >= 90) b = 'A';
    else
        if (a >= 80) b = 'B';
        else
            if (a >= 70) b = 'C';
            else
                if (a >= 60) b = 'D';
                else
                    b = 'E';
    printf("成绩：%d  评分：%c", a,b);
        return 0;
}*/
//switch
/*
#include <stdio.h>
int main ()
{
	int a , b;
	scanf("%d",&a);
	while(a>100||a<0)
	{
		printf("输入错误！请重新输入：");
		scanf("%d",&a); 		
	} 
	
	if (a>=90) b = 1;
    if (a>=80&&a<90) b = 2;    
    if (a>=70&&a<80) b = 3;
    if (a>=60&&a<70) b = 4;
    if (a<60) b = 5;
    
    switch(b)
    {
    	case 1 : printf("成绩：%d  评分：A", a);break;
    	case 2 : printf("成绩：%d  评分：B", a);break;
    	case 3 : printf("成绩：%d  评分：C", a);break;
    	case 4 : printf("成绩：%d  评分：D", a);break;
    	case 5 : printf("成绩：%d  评分：E", a);break;
	}
	
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int a , b , c , d , t;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
		if(a<b)
		{
			t = a;
			a = b;
			b = t;
		}
		if(a<c)
		{
			t = a;
			a = c;
			c = t;
		}
		if(a<d)
		{
			t = a;
			a = d;
			d = t;
		}
		if(b<c)
		{
			t = b;
			b = c;
			c = t;
		}
		if(b<d)
		{
			t = b;
			b = d;
			d = t;
		}
		if(c<d)
		{
			t = c;
			c = d;
			d = t;
		}
		printf("%d %d %d %d",a,b,c,d);
 } */
/*
#include <stdio.h>
int main ()
{
	char a;
	int dzm=0 , xzm=0 , kg=0 , sz=0 , qt=0;
	
	printf("输入一段字符：");
	while((a=getchar())!='\n')
	{
		if(a>='A'&&a<='Z')
		dzm++;
		else if(a>='a'&&a<='z')
		xzm++;
		else if(a==' ')
		kg++;
		else if(a>='0'&&a<='9')//咱是字符好吗 不是数字 
		sz++;
		else
		qt++; 
		
	}
	printf("大写字母数：%d\n",dzm);
	printf("小写字母数：%d\n",xzm);
	printf("空格数：%d\n",kg);
	printf("数字数：%d\n",sz);
	printf("其他字符数：%d\n",qt);

	return 0; 
}*/
//C语言版自幂数 
/*
#include <stdio.h> 
#include <math.h>
int main()
{
	int n;//位数
	int start , end;//n位数的起始值与终止值 
	int m;//待判断的数 
	int digit;//个位数的值 
	int sum;//各 位数 的n次方 的和 
	int i;//循环变量 
	printf("求n位自幂数  请输入位数:");
	scanf("%d",&n); 
	while(n>0)//位数大于0 
	{
		start = pow(10,n-1);//从当前位数最小的开始判断 
		end = pow(10,n) - 1;//从当前位数最大的开始判断
		printf("%d位自幂数\n",n);
		for(i=start;i<=end;i++)//同上 
		{
			m = i;//待判断的数 
			sum = 0;
			while(m!=0)//当m不等于0 开始循环 
			{
				digit = m % 10;//各个位为当前数取余 
				sum = sum + pow(digit,n);//之和 
				m = m / 10;//除10 
			}
			if(sum==i)
			{
				printf("%d\n",i);
			}
		 }
		printf("\n");
		printf("求n位自幂数，请输入位数：");
		scanf("%d",&n);
	 } 
	printf("\n");
	return 0;
 }*/

//仅求水仙花数
/*
#include <stdio.h> 
#include <math.h>
int main()
{
	int n = 3;//位数
	int start , end;//n位数的起始值与终止值 
	int m;//待判断的数 
	int digit;//个位数的值 
	int sum;//各 位数 的n次方 的和 
	int i;//循环变量 

	for(n=3;n<4;n++)//位数大于0 
	{
		start = pow(10,n-1);//从当前位数最小的开始判断 
		end = pow(10,n) - 1;//从当前位数最大的开始判断
		printf("水仙花数为：",n);
		for(i=start;i<=end;i++)//同上 
		{
			m = i;//待判断的数 
			sum = 0;
			while(m!=0)//当m不等于0 开始循环 
			{
				digit = m % 10;//各个位为当前数取余 
				sum = sum + pow(digit,n);//之和 
				m = m / 10;//除10 
			}
			if(sum==i)
			{
				printf("\t");
				printf("%d ",i);
			}
		 }
	 } 
	printf("\n");
	return 0;
 }*/
//简单选择排序
/* 
#include <stdio.h>
int main()
{
	int i , j , m , temp;
	int a[10];
	
	for(m=0;m<=9;m++)
	{
		scanf("%d",&a[m]);
	}
	
	for(i=0;i<9;i++)
	{
		for(j=i;j<9;j++)
		{
			if(a[i]<a[j+1])
			{
				temp = a[i];
				a[i] = a[j+1];
				a[j+1] = temp;
			}
		}
	
	}
	for(m=0;m<=9;m++)
	{
		printf("%d ",a[m]);
	}
	
	
	return 0;

}*/
/*错误程序 
#include <stdio.h>

void selectsort(int *p)
{
	int i , max=0 , j , temp;
	for(i=0;i<9;i++)
	{
		max = i;//当前最大下标为i 
		for(j=i+1;j<10;j++)
		{
			if(p[max]<p[j])
			{
				max = j;//若有数比当前最大值大，则将当前下标赋值给max		
			}
			if(i!=max)//当i不是当前最大值时，开始互换 
			{
				temp = p[max];
				p[max] = p[i];
				p[i] = temp;
			}
		}
	}
}
void selectoutput (int *p)
{
	int i;
	int a[10];
	for(i=0;i<=9;i++)
	{
		printf("%d ",&a[i]);
	}
}
int main ()
{
	int i , j , temp;//循环变量
	int max;//最大值下标
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	
	 void selectsort(int *p);
	selectoutput(a);
	return 0;
 } */
 
/*
#include <stdio.h>
int main()
{
	void select(int* pt1,int* pt2);
	void exchange(int* q1,int* q2);
	int max;//最大值下标
	int a[10];
	int i , *p1 , *p2 , temp;
	
	printf("输入数字：");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	for(p1=a[0];p1<a[10];p1++)
	{
		
		for(p2=a[1];p2<=a[10];p2++)
		{
			if(p1<p2) 
			if(p1!=a[max]) select(p1,a[max]);
		}
	 } 
}

int select(int j,int* pt2)
{
	temp = j;
	j = *pt2;
	*pt2 = temp;
}

int exchange(int *q1,int *q2)
{
	*q1 = *q2;
}*/

//选择
/*
#include<stdio.h>
int main()
{
	int i,j,min,temp,a[10];
	printf("enter data:\n");
	for (i=0;i<10;i++)
	{
		printf("please enter NO.%d numbers:\n",i);
		scanf("%d",&a[i]); //输入10个数
	}
		printf("\n");
		printf("The orginal numbers:\n");
	for (i=0;i<10;i++)
		{
			printf("%5d",a[i]); //输出这10个数
			printf("\t"); //以下8行是对这10个数排序
		}
	for (i=0;i<10;i++)
		{	
			min=i;
			for(j=i+1;j<10;j++)
			{
			if (a[min]>a[j]) 
				min=j;
				temp=a[i]; //以下3行将a[i+1]~a[10]中最小值与a[i]对换
				a[i]=a[min];
				a[min]=temp;
			}
	}
			printf("\n The sorted numbers:\n"); //输出已排好序的10个数
			for(i=0;i<10;i++)
			printf("%5d",a[i]);
			printf("\n");
	return 0;
}
//插入
/* 
#include <stdio.h>
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};//已经排好序的数组a[10] 
	int b[11];//新数组 
	int num , i , j , temp;
	
	printf("请输入要插入的数字：");
	scanf("%d",&num);
	
	for(i=0;i<10;i++)
	{
		b[i] = a[i];//将a[]中的所有元素赋给b[] 
	}
	
	b[10] = num;//最后一位放要插入的 
	
	for(i=0;i<10;i++)//11个数比较10组 
	{
		for(j=0;j<10-i;j++)//每组比较10-i次 
		{
			if(b[j]>b[j+1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<11;i++)
	{
		printf("%d ",b[i]);
	}
	
}*/

//三行80
/* 
#include <stdio.h>
int main()
{
	char a[3][80];//声明二维字符数组 
	int dzm=0 , xzm=0 , kg=0 , sz=0 , qt=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行：",i+1);
		gets(a[i]);//输入第i行 
		for(j=0;a[i][j]!='\0'&&j<80;j++)//判断条件是输入的值不是空且小于80 
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
			dzm++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
			xzm++;
			else if(a[i][j]==' ')
			kg++;
			else if(a[i][j]>='0'&&a[i][j]<='9')//咱是字符好吗 不是数字 
			sz++;
			else
			qt++;	
		}
		 
		
	}
	
	
	printf("大写字母数：%d\n",dzm);
	printf("小写字母数：%d\n",xzm);
	printf("空格数：%d\n",kg);
	printf("数字数：%d\n",sz);
	printf("其他字符数：%d\n",qt);

	return 0; 
}
*/

//鞍点
/*
#include <stdio.h>
#define H 4
#define L 4

int main()
{
	int a[H][L];//三行四列
	int i , j ,l;//行 列  l用作比较行最大值 
	int max , maxj , flag;//行最大值和列最大值 
	 
	for(i=0;i<H;i++)
	{
		printf("请输入第%d行的元素：",i+1);
		for(j=0;j<L;j++)
		{	
			scanf("%d",&a[i][j]);//输入
		}
 	}
 	for(i=0;i<H;i++)
 	{
 		max=a[i][0];//将第一行第一个设为当前最大值 
 		maxj=0;//将当前列号赋给列最大值 
 		for(j=0;j<L;j++)
 		{
 			if(a[i][j]>max)//若当前元素比最大值大时 
			{
				max = a[i][j]; //当前元素就是最大值
				maxj = j;//将当前最大元素的列放在maxj中
			}			 
		}
		
		flag = 1;//假设这次求出来的是鞍点 
	 
		for(l=0;l<H;l++)
		{
			if(max>a[l][maxj])//如果当前最大值是其所在列的最大值 
			{
				flag = 0;//则不是鞍点 
				continue;//结束本次循环 
			}
		}
		if(flag)//判断鞍点是否存在 
    	{
      	printf("a[%d][%d]=%d\n",i,maxj,max); //输出鞍点的值和所在行列号 
      	break;//结束 
    	}
  }
  		if(flag==0)//若flag=0则无鞍点 
  		{ 
    		printf("鞍点不存在!\n"); 
  		}
	return 0;	 
}
*/
//实验报告7 （1）
/* 
#include <stdio.h>
#define H 5
#define L 5
int main()
{
	int i , j;
	int a[H][L];
	int totalH , totalL , totalDJ;
	int sumH , sumL , sumDJ1=0 , sumDJ2=0 , sumDJ;
	//输入 
	for(i=0;i<H;i++)
	{
		printf("请输入第%d行的数据：",i+1);
		for(j=0;j<L;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//行和
	for(i=0;i<H ;i++)
	{
		sumH = 0;
		printf("第%d行之和为：",i+1);
		for(j=0;j<L;j++)
		{
			sumH += a[i][j];
		}
		printf("%d\n",sumH);
	}
	//列和 
	for(j=0;j<L;j++)
	{
		sumL = 0;
		printf("第%d列之和为：",j+1);
		for(i=0;i<H;i++)
		{
			sumL += a[i][j];
		}
		printf("%d\n",sumL);
	}
	//对角线1
	for(i=0,j=0;i<H&&j<L;i++,j++)
	{
		sumDJ1 += a[i][j];
	 }
	 for(i=0,j=4;i<H&&j>=0;i++,j--)
	{
		sumDJ2 += a[i][j];
	 }
	sumDJ = sumDJ1 + sumDJ2;
	printf("对角线之和为:%d",sumDJ);
	 
	return 0; 
	 }	 
*/
//(2)
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int i , j , num;
	char a[10];
	puts("输入一个字符串：");
	gets(a);
	num=strlen(a);
	char b[num];
	for(i=num-1,j=0;i>=0;i--,j++)   //倒序把数组重新赋给数组b
	{
		b[j]=a[i];
	}
    b[j]='\0';  //字符数组结束标志
	if(strcmp(a,b)==0)
		printf("回文");
	else
		printf("不回文");
}
*/
//矩阵
/* 
#include<stdio.h>
#define N 3 
#define M 4
int main(){
	int i,j,k,sum;
	int a[N][M],b[M][N],c[N][N];	 
	//第一个矩阵 
	printf("请输入一个%d×%d的数列A：\n",N,M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
	}
	//第二个矩阵 
	printf("请输入一个%d×%d的数列B：\n",M,N);
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&b[i][j]);
	}
	//两矩阵乘积 
	for(i=0;i<N;i++)
	{
		for(k=0;k<N;k++)
		{
			for(j=0,sum=0;j<M;j++)
			{
				sum+=a[i][j]*b[j][k];
			}
			c[i][k]=sum;		//求得结果的第一个元素,存入第三个数组中 
		}
	}	
	//输出矩阵相乘所得矩阵 
	printf("A×B的结果为：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%d ",c[i][j]);
		printf("\n");	
	}
	return 0; 
}*/

//实验报告8 
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	printf("Please enter a number:");
	scanf("%d",&n); 
	
		k = sqrt(n);//给n开根号  也就是计算二分之n 

		for(i=2;i<=k;i++)//除到n/2 
	    {
	   		if(n%i==0)  break;
	     	 
		}//当i<=k不成立的时候 n就跳出了循环 
		if(i>k)
		printf("%d是素数\n",n);
		else
		printf("%d不是素数\n",n);
	
	return 0;
 }
 */
 /*
#include <stdio.h>
#include <math.h>

int su(int a)
{
	int i , k;
	k = sqrt(a);//给n开根号  也就是计算二分之n 

		for(i=2;i<=k;i++)//除到n/2 
	    {
	   		if(a%i==0)
	   		return 0;
	     	 
		}//当i<=k不成立的时候 n就跳出了循环 
		if(i>k)
		return 1;
		 
	
}
int main()
{
	int n;
	printf("Please enter a number:");
	scanf("%d",&n); 
	su(n);
	if(su(n)==0)
	printf("不是素数");
	else
	printf("是素数"); 
	return 0;
 }
*/
/*#include <stdio.h>
#include <math.h>

int su(int a)
{
	int i , k;
	k = sqrt(a);//给n开根号  也就是计算二分之n 

		for(i=2;i<=k;i++)//除到n/2 
	    {
	   		if(a%i==0)
	   		return 0;
	     	 
		}//当i<=k不成立的时候 n就跳出了循环 
		if(i>k)
		return 1;	
}
int main()
{
	int n;
	for(n=100;n<=200;n++)
	{
		su(n);
		if(su(n)==1)
		printf("%d是素数\n",n); 
	 } 
	
	return 0;
 }*/
//实验报告8 （2）
/* 
#include <stdio.h>
#include <string.h>
void fuzhi (char [])
{
	int i , j=0;
	char a1[100];
	int k = strlen(a);//k为实际参数数组的长度
	for(i=0;i<k;i++)
	{
		if(a[i]=='A'||a[i]=='a'||a[i]=='E'
		 ||a[i]=='e'||a[i]=='I'||a[i]=='i'
		 ||a[i]=='O'||a[i]=='o'||a[i]=='U'
		 ||a[i]=='u')
		{
			a1[j++]=a[i];
		}	
	}
	a1[j]='\0';//字符串截止
	printf("%s",a1); 
}

int main()
{
	char a2[100];
	gets(a2);
	fuzhi(a2);
	return 0;
}
*/
//(3)
/*
#include <stdio.h>
void pingjun(int a[][5])
{
	int i, j;
	float k, ping;
	for (i=0;i<10;i++) {
		k = 0.0;
		for (j=0;j<5;j++)
			k += a[i][j];
		ping = k / 5;
		printf("第%d个学生的平均分是：%f\n", i + 1, ping);
	}
}
void kecheng(int a[][5]) {
	int i, j;
	float k, ke;
	for (j=0;j<5;j++) {
		for (i=0,k=0.0;i<10;i++)
			k += a[i][j];
		ke = k / 10;
		printf("第%d个学生的课程平均分是：%f\n", j + 1, ke);
	}
}
void zuigao(int a[][5]) {
	int i,j,h=0,xue,cour;
	for (i=0,xue=0,cour=0;i<10;i++) {
		for (j=0;j<5;j++) {
			if (a[i][j] > h) {
				h = a[i][j];
				xue = i + 1;
				cour = j + 1;
			}
		}
	}
	printf("最高分为：%d\n第%d号学生\n第%d门课程\n", h, xue, cour);
}

int main()
{
	int xs[10][5];
	int i, j;
	printf("请你依次输入该50个学生的成绩：");
	for (i=0;i<10;i++)
		for (j=0;j<5;j++)
			scanf("%d", &xs[i][j]);  //输入50个学生各5门课的成绩 
	pingjun(xs);   //调用学生平均分函数
	kecheng(xs); //调用课程平均分函数 
	zuigao(xs);  //调用最高分函数 
	return 0;

}
*/
/*
#include<stdio.h>
#include<string.h>
void longest(char a[]){
	int i,j;
	char s1[20],s2[20]={'\0'};
	for (i=0;a[i]!='\0';i++)
	{
		int j = 0;
		while(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			s1[j++]=a[i++];           
		}
		s1[j]='\0';
		if(strlen(s1)>strlen(s2))     
			strcpy(s2,s1);              
	}
	puts(s2);
}

int main(){
	char a1[100];
	puts("输入字符串:");
	gets(a1);
	puts("最长的单词是:");
	longest(a1);
	return 0;
}
*/
/*
#include<stdio.h>
void Convert(int n)
{
	int i;
	if ((i = n / 10) != 0)
		Convert(i); 
    putchar(n % 10 + '0');//递归结束开始打印 
	//+'0' 能够将整型数字转换为字符格式的数字。-'0' 则能够将字符格式的数字转换为整型数字  
}
//Convert(483) 483/10!=0 调用Convert(48)
//Convert(48)  48/10!=0  调用Convert(4)
//Convert(4)   4/10=0    导致
//Convert(4)打印4        导致
//Convert(48)打印8      导致
//Convert(483)打印3
//通俗来说，就是当递归结束以后，就可以当作递归语句不存在，直接执行putchar(n%10+'0'); 

int main()
{
	int number;
	printf("请输入一个数: ");
	scanf("%d", &number);
	printf("输出: ");
	if (number < 0)//有负数的话加负号 
	{
		putchar('-');
		number = -number;//将负数转化为正数 
	}
	Convert(number);
	return 0;
}
*/

//实验报告9(3) 
/*
#include <stdio.h>
int main ()
{
	char a;
	int dzm=0 , xzm=0 , kg=0 , sz=0 , qt=0;
	
	printf("输入一段字符：");
	while((a=getchar())!='\n')
	{
		if(a>='A'&&a<='Z')
		dzm++;
		else if(a>='a'&&a<='z')
		xzm++;
		else if(a==' ')
		kg++;
		else if(a>='0'&&a<='9')//咱是字符好吗 不是数字 
		sz++;
		else
		qt++; 
		
	}
	printf("大写字母数：%d\n",dzm);
	printf("小写字母数：%d\n",xzm);
	printf("空格数：%d\n",kg);
	printf("数字数：%d\n",sz);
	printf("其他字符数：%d\n",qt);

	return 0; 
}
*/
//函数版冒泡排序
/* 
#include <stdio.h>
void in_out_put ()
{
	int a[10];
	int i , j;	
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]<a[j+1])
			{   
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}

int main()
{
	int a[10];
	int i , j;
	in_out_put();
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i , n;
	char s[100];
	printf("请输入一个数: ");
	scanf("%d", &n);
	itoa(n,s,10);//将数字转化为10进制字符形式 
	printf("输出: %s",s);	
	return 0;
}
*/
//实验报告9(4)1
/* 
#include <stdio.h>
int hcf(int a,int b)
{
	int i;
	printf("%d 和 %d",a,b);
	int m = a;
	int n = b;
	i = m % n;
	while(i!=0)//当余数i不等于0时开始循环 
	{
		m = n;//将n的值交换给m 
		n = i;//将i的值交换给n
		i = m % n;//求余
	}
	printf("的最大公约数为: %d\n",n);
	return n;
}
int lcd(int a,int b,int c)
{
	int i;
	for(i=1;i>0;i++)
	{
		if(i%a==0&&i%b==0&&i%c==0)
		{
			printf("%d 和 %d 和 %d 的最小公倍数为：%d",a,b,c,i);
			break;
		}
		
	}

}
int main()
{
	int a , b , c;
	scanf("%d %d",&a,&b);
	c = hcf(a,b);
	lcd(a,b,c);
	return 0;
}*/

/*
#include <stdio.h>
int gy , gb;
int hcf(int a,int b)
{
	int i;
	printf("%d 和 %d",a,b);
	int m = a;
	int n = b;
	i = m % n;
	while(i!=0)//当余数i不等于0时开始循环 
	{
		m = n;//将n的值交换给m 
		n = i;//将i的值交换给n
		i = m % n;//求余
	}
	gy = n;
	printf("的最大公约数为: %d\n",gy);
	return n;
}
int lcd(int a,int b,int c)
{
	for(gb=1;gb>0;gb++)
	{
		if(gb%a==0&&gb%b==0&&gb%c==0)
		{
			printf("%d 和 %d 和 %d 的最小公倍数为：%d",a,b,c,gb);
			break;
		}
		
	}

}
int main()
{
	int a , b , c;
	scanf("%d %d",&a,&b);
	c = hcf(a,b);
	lcd(a,b,c);
	return 0;
}
*/
//实验报告10(1)1
/*
#include <stdio.h>
int paixu(int *a,int *b,int *c)
{
	
	if(*a>*b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;	
	}
	else if(*b>*c)
	{
		int temp;
		temp = *b;
		*b = *c;
		*c = temp;
	}
	if(*a>*b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;	
	}
	/*else if(*a>*c)
	{
		int temp;
		temp = *a;
		*a = *c;
		*c = temp;	
	}
	
}
int main()
{
	int a , b ,c;//声明三个变量
	scanf("%d %d %d",&a,&b,&c);
	int *a1 , *a2 , *a3;//声明三个int型指针
	a1 = &a;
	a2 = &b;
	a3 = &c;
	paixu(a1,a2,a3);
	printf("%d %d %d",*a1,*a2,*a3);
	return 0;
	
}*/

//实验报告10(1)2
/*
#include <stdio.h>
int paixu(char *a,char *b,char *c)
{
	
	if(*a>*b&&*b>*c)// 3  2  1
	{
		int temp;
		temp = *a;
		*a = *c;
		*c = temp;
	}
	else if(*a>*b&&*a>*c&&*b<*c)//3 1 2
	{
		int temp1 , temp2;
		temp1 = *b;
		temp2 = *c;
		*c = *a;
		*a = temp1;
		*b = temp2;
	}
	else if(*b>*a&&*b>*c&&*a>*c)// 2 3 1
	{
		int temp1 , temp2;
		temp1 = *c;
		temp2 = *a;
		*c = *b;
		*a = temp1;
		*b = temp2;
	}
	else if(*b>*a&&*b>*c&&*a<*c)// 1 3 2
	{
		int temp;
		temp = *c;
		*c = *b;
		*b = temp;
	}
	
}
int main()
{
	char a , b ,c;//声明三个变量
	scanf("%c %c %c",&a,&b,&c);
	char *a1 , *a2 , *a3;//声明三个int型指针
	a1 = &a;
	a2 = &b;
	a3 = &c;
	paixu(a1,a2,a3);
	printf("%c %c %c",*a1,*a2,*a3);
	return 0;
	
}*/
/*
//实验报告10（2）
#include <stdio.h>
#define N 3
void change(int a[][N])
{
    int temp;
    for(int i=0;i<N;i++)
	{
        for(int j=i+1;j<N;j++)
		{
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("转置后的矩阵为:\n");
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[N][N];
    printf("请输入%d个值:\n",N*N);
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    printf("原矩阵为:\n");
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    change(a);
    return 0;
}*/
/*
#include <stdio.h>
#define N 3
void change(int (*p)[N])
{
    int temp;
    for(int i=0;i<N;i++)
	{
        for(int j=i+1;j<N;j++)
		{
            temp=*(*(p+i)+j);
            *(*(p+i)+j)=*(*(p+j)+i);//转置 
            *(*(p+j)+i)=temp;
        }
    }
    printf("转置后的矩阵为:\n");
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
}
int main()
{
    int a[N][N];
    int (*p)[N];//数组指针，p是一个指针，指向一个有3个元素的数组
//  int *p[3] 指针数组，p是一个有3个元素的数组，每个元素的类型是整形指针 
    p = a;
    printf("请输入%d个值:\n",N*N);
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    printf("原矩阵为:\n");
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    change(a);
    return 0;
}

/*
#include <stdio.h>
void fun(char *p)
{
	int i;

	for(;*p!='\0';p++)
	i++;
	printf("字符串长度为：%d",i);
 } 
int main(){
	char a[100] , *p;
	p = a;
	gets(p);
	fun(p);
	return 0;
 }
*/
/*
#include <stdio.h>
int paixu(int *a,int *b,int *c)
{
	
	if(*a>*b&&*b>*c)// 3  2  1
	{
		int temp;
		temp = *a;
		*a = *c;
		*c = temp;
	}
	else if(*a>*b&&*a>*c&&*b<*c)//3 1 2
	{
		int temp1 , temp2;
		temp1 = *b;
		temp2 = *c;
		*c = *a;
		*a = temp1;
		*b = temp2;
	}
	else if(*b>*a&&*b>*c&&*a>*c)// 2 3 1
	{
		int temp1 , temp2;
		temp1 = *c;
		temp2 = *a;
		*c = *b;
		*a = temp1;
		*b = temp2;
	}
}
int main()
{
	int a , b ,c;//声明三个变量
	scanf("%d %d %d",&a,&b,&c);
	int *a1 , *a2 , *a3;//声明三个int型指针
	a1 = &a;
	a2 = &b;
	a3 = &c;
	paixu(a1,a2,a3);
	printf("%d %d %d",*a1,*a2,*a3);
	return 0;
	
}*/
/*
#include <stdio.h>
#include <string.h>
void DX(char *p)
{
	int j;
	for(;*p!='\0';p++)
	j++;
	for(int i=j;i>=0;i--)
	printf("%c",*--p);//因为字符串末尾有一个结束标志所以*p++的话会先打印空格 
}
int main()
{
	char a[10];
	char *p;
	p = a;
	gets(p);
	DX(p); 
}
*/
/*
#include<stdio.h>
int main()
{
	char a[100] , *p;
	p = a;
	int i;
	gets(p);
	for(;*p!='\0';p++)
	i++;
	printf("字符串长度为：%d",i);
	return 0;
 } 
*/
/*
#include <stdio.h>
void swap(int *a,int *b)
{
	if(*a>*b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}
  }  
int main()
 {
 	int a1 , b1;
 	scanf("%d %d",&a1,&b1);
 	int *p1 = &a1;
	int *p2 = &b1;
	swap(&a1,&b1);  
	printf("%d  %d",*p1,*p2);         
 	return 0;
 }*/

//实验报告11（1）
//非指针版
/* 
#include <stdio.h>
int main()
{
	int a[100];
	int all , person , flag = 0;
	int i;
	
	scanf("%d",&person);
	printf("输入总人数：%d\n",person);
	
	
	all = person;
	
	for(i=1;i<=person;i++)
	{
		a[i]=1;//在圈内则为1 
	} 
	for(i=1; ;i++)
	{
		if(i==person+1)//若i超过了总人数就回到1 
		{
			i=1;
		}
		
		if(a[i]!=0)//若当前人在圈里的话则flag+1
		{
			flag++;
		}
		else
		{
			continue;
		}
		if(flag%3==0)
		{
			a[i]=0;
			all--;
		}
		if(all==1)
		break;
	}
	for(i=1;i<=person;i++)
	{
		if(a[i]!=0)
		{
			printf("剩下的人为：%d",i);
		}
	}
	
	return 0;
} */

//指针版 
/*
#include <stdio.h>
int main()
{
	int a[100];
	int *p = &a[1];

	int all , person , flag = 0;
	int i;
	
	scanf("%d",&person);
	printf("输入总人数：%d\n",person);
	
	
	all = person;
	
	for(i=0;i<person;i++)
	{
		*(p+i)=1;//在圈内则为1 
	} 
	for(i=0; ;i++)
	{
		if(i==person)//若i超过了总人数就回到1 
		{
			i=0;
		}
		
		if(*(p+i)!=0)//若当前人在圈里的话则flag+1
		{
			flag++;
		}
		else
		{
			continue;
		}
		if(flag%3==0)
		{
			*(p+i)=0;
			all--;
		}
		if(all==1)
		break;
	}
	for(i=0;i<person;i++)
	{
		if(*(p+i)!=0)
		{
			printf("剩下的人为：%d",i);
		}
	}
	
	return 0;
}
*/
//C语言实验报告11（2） 
/*
#include <stdio.h>
int main()
{
	int a[5][5];//声明矩阵 
	int (*p)[5];//矩阵指针 
	int *max , *min 
	return	0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
#define N 5
void swop(int* a, int* b)//使用位运算符 交换两个数
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
void fun(int(*p)[N])
{
	int* max = (int*)p;//最大值
	int* min1 = (int*)p;//最小值
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (*max < *(*(p + i) + j))
			{
				max = *(p + i) + j;
			}
			if (*min1 > *(*(p + i) + j))
			{
				min1 = *(p + i) + j;
			}
		}
	}
	int* min2 = *(p + 2) + 2;//第2小 
	int* min3 = *(p + 2) + 2; //第3小
	int* min4 = *(p + 2) + 2;//第4小 

	swop(max, *(p + 2) + 2);//最大值与中间的值交换
	swop(min1, *p);//最小值与左上角的值交换
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (*(p + i) + j == *p)
			{
				continue;
			}
			if (*min2 > *(*(p + i) + j))
			{
				min2 = *(p + i) + j;
			}
		}
	}
	swop(min2, *(p)+N - 1);//次小值与右上角的值交换
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (*(p + i) + j == *p || *(p + i) + j ==*(p)+N - 1)
			{
				continue;
			}
			if (*min3 > *(*(p + i) + j))
			{
				min3 = *(p + i) + j;
			}
		}
	}
	swop(min3, *(p + N - 1));//倒数第三小值与左下角的值交换
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (*(p + i) + j == *p || *(p + i) + j == *(p)+N - 1 || *(p + i) + j == *(p + N - 1))
			{
				continue;
			}
			if (*min4 > *(*(p + i) + j))
			{
				min4 = *(p + i) + j;
			}
		}
	}
	swop(min4, *(p + N - 1) + N - 1); //倒数第四小值右下角的值交换
}
int main()
{
	int arr[N][N];
	int(*p)[N] = arr;//定义指向二维数组的指针p
	int count = 25;
	for (int i = 0; i < N; ++i) {//初始化二维数组
		for (int j = 0; j < N; ++j)
		{
			*(*(p + i) + j) = count;
			count -= 1;
		}
	}
	printf("原数组为\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
	printf("\n\n转换后的数组为\n");
	fun(p);
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
	{
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
}
*/
/*
*/
/*
#include <stdio.h>
#include <string.h>
#include <malloc.h>
 
#define N 100
#define MAX 100
 
void sort(char** str,int n)
{
    for(int i = 0;i < n - 1;i++)
    {
        for(int j = 0;j < n - 1- i;j++)
        {
            if(strcmp(str[j], str[j + 1]) > 0)
            {
                char *temp = str[j]; 
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
} 
  
int main()
{
    char *a[N];
    int n;
    int i;
 
    printf("n : ");
    scanf("%d", &n);
 
    for(i=0; i<n; i++)
    {
        a[i] = (char *)malloc(MAX * sizeof(char));
        scanf("%s", a[i]);
    }
 
    sort(a,n);
  
    for(i = 0;i < n;i++)
    {
        puts(a[i]);
    }
}
*/
/*
#include <stdio.h>
int main() 
{
	void change(int* p);
	int num[5][5];
	int i, j, *p;
	p = &num[0][0];
	printf("请输入矩阵的值:\n");
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			scanf("%d", &num[i][j]);
		}
	}
	//输出原来的矩阵
	printf("所输入的矩阵为:\n");
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++)
		{
			printf("%3d", num[i][j]);
		}
		printf("\n");
	}
	change(p);
	//输出调整后的矩阵
	printf("按要求调整后的矩阵为:\n");
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			printf("%3d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void change(int * p) {
	//printf("%d\n",p[3]);
	//找到最大值，并放到中间
	int i, j, t, *max = p;
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++) 
		{
			if (*max < *(p + i * 5 + j)) //p的初始位置为0
										 //i为行  j为列 
			max = p + i * 5 + j;
		}
	}
	t = *(p + 2 * 5 + 2);//第3行第3列 
	*(p + 2 * 5 + 2) = *max;
	*max = t;

	int * min = p;//找最小的值
	
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			if (*min > * (p + i * 5 + j)) 
			{
				min = p + i * 5 + j;
			}
		}
	}
	
	t = *min;//最小的值和第一个元素交换
	*min = *p;
	*p = t;

	min = p + 1;//从第二个元素开始

				//找到次小的值
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			if (i == 0 && j == 0) continue;
			else if (*min > *(p + i * 5 + j)) 
			{
				min = p + i * 5 + j;
			}
		}
	}
	
	t = *min;//次小的值和第5个元素交换
	*min = *(p + 4);
	*(p + 4) = t;
	min = p + 1;//从第二个元素开始

				//找到第三小的值
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 4)) continue;
			else if (*min > *(p + i * 5 + j)) 
			{
				min = p + i * 5 + j;
			}
		}
	}
	//第三小的值和第21个元素交换
	t = *min;
	*min = *(p + 20);
	*(p + 20) = t;
	min = p + 1;//从第二个元素开始

				//找到第四小的值
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 4) || (i == 4 && j == 0)) continue;
			else if (*min > *(p + i * 5 + j)) 
			{
				min = p + i * 5 + j;
			}
		}
	}
	//第四小的值和第25个元素交换
	t = *min;
	*min = *(p + 24);
	*(p + 24) = t;
}*/
/*
#include<stdio.h>
#include<math.h>

float avg(int arry[][5], int n)//第一门课程的平均分 
{
	float sum = 0 , ping;
	for (int i = 0; i < n; i++) {
		sum += arry[i][0];
	}
	ping = sum / n; 
	printf("第一门课程平均分:%f\n", ping);
	return ping;
}
void fail(int arry[][5], int n)
{
	printf("两门以上课程不及格学生信息：\n ");
	for (int i = 0; i < n; i++) {
		int sum = 0, failke = 0;
		for (int j = 0; j < 5; j++)
		{
			if (arry[i][j] < 60)
			{
				failke++;
			}
		}
		if (failke <= 2) {
			continue;
		}
		printf("学号:%d\n ", i + 1);
		printf("分数: ");
		for (int j = 0; j < 5; j++)
		{
			sum += arry[i][j];
			printf("%d ", arry[i][j]);
		}
		printf("平均分:%d \n", sum / 5);
		printf(" ");
	}
	return;
}
void excellent(int arry[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		int sum = 0, count = 0;
		for (j = 0; j < 5; j++) {
			sum += arry[i][j]; //计算总分用于计算平均分
			if (arry[i][j] > 85) {
				count++; //若每门课都大于85则count总会与j同步++
			}
		}
		if ((sum / 5) > 90 || count == j) {
			printf("优秀学生: %d\n", i + 1);
		}
	}
	return;
}

int main()
{
	int arry[4][5];
	printf("输入一个4x5的矩阵：");
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<5;j++)
		{
			scanf("%d", &arry[i][j]);
		}
	}
	avg(arry, 4);
	excellent(arry, 4);
	fail(arry, 4);

	printf(" ");
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
#include <malloc.h> 
void sort(int *s[], int len)
{
	int i, j;
	for (i = 0; i < len; i++) {
		for (j = i; j < len; j++) {
            //s[i]就是s指针数组中第i个元素保存的一级指针，再次解引用就是最终的数据空间
			if (*(s[i]) > *(s[j])) {
				int tmp = *(s[i]); //指针的好处在于直接通过赋值可以改变指向
				*(s[i]) = *(s[j]);  //只要交换了字符串的地址就实现了字符串的交换
				*(s[j]) = tmp;//因此通过指针指向的交换就能够实现数组中字符串的排序
			}
		}
	}
}
int main()
{
	int *integers;
	int count = 0;
	printf("请输入计数器: ");
	scanf("%d", &count);
	integers = (int*)malloc(count * sizeof(int));//为指针申请count个int空间用于存放输入的数据
	int **p = (int **)malloc(count * sizeof(int*));//为指针申请count个int*空间用于存放int空间的首地址
	printf("请输入%d个整数: \n", count);
	for (int i = 0; i < count; i++) {
		p[i] = integers + i; //将数组中每个int元素空间的首地址赋值给指针数组中的各个元素
		scanf("%d", p[i]);//p[i]就保存时第i个数据的地址，因此这里不用取地址
	}
	sort(p, count);
	for (int i = 0; i < count; i++) {
		printf("%d ", integers[i]);
	}
	printf("\n");
	free(integers);//释放整数空间 
	free(p);//释放指向指针的指针的空间 
	return 0;
}*/

//对字符串排序，（冒泡排序法）
/*
#include <stdio.h>
#include <string.h>
int main()
{
	void sort(char* zifuchuan[],int n);//函数声明
	void print(char* zifuchuan[],int n);
	char* zifuchuan[]={"a",
				  "d",
				  "c",
				  "h",
		          "g" };
	int n=5;
	sort(zifuchuan,n);    //函数调用
	print(zifuchuan,n);
 
}

void sort(char* zifuchuan[],int n)//把冒泡排序用到字符比较 
{
	char* temp;
	int i,j;
	for(i=0;i<n-1;i++) 
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(zifuchuan[j],zifuchuan[j+1])>0)
			{
				temp=zifuchuan[j];
				zifuchuan[j]=zifuchuan[j+1];
				zifuchuan[j+1]=temp;
			}
		}
	}
}
 
void print(char* zifuchuan[],int n)//输出嘛
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n",zifuchuan[i]);
	}
}*/
/*
#include <stdio.h>
struct student
{
	int num;//号码 
	struct student *next; 
} 
int main()
{
	struct student s1 , s2 , s3 , s4 , s5 , s6;
	struct student s7 , s8 , s9 , s10 , s11 , s12 , s13;
	struct student *head , *point;
	
	s1.num = 1;
	s2.num = 2;
	s3.num = 3;
	s4.num = 4;
	s5.num = 5;
	s6.num = 6;
	s7.num = 7;
	s8.num = 8;
	s9.num = 9;
	s10.num = 10;
	s11.num = 11;
	s12.num = 12;
	s13.num = 13;
	
	head = &s1;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	s4.next = &s5;
	s5.next = &s6;
	s6.next = &s7;
	s7.next = &s8;
	s8.next = &s9;
	s9.next = &s10;
	s10.next = &s11;
	s11.next = &s12;
	s12.next = &s13;
	s13.next = NULL;
	point = head;
	
	/*all = person;
	
	for(i=0;i<person;i++)
	{
		*(p+i)=1;//在圈内则为1 
	} 
	for(i=0; ;i++)
	{
		if(i==person)//若i超过了总人数就回到1 
		{
			i=0;
		}
		
		if(*(p+i)!=0)//若当前人在圈里的话则flag+1
		{
			flag++;
		}
		else
		{
			continue;
		}
		if(flag%3==0)
		{
			*(p+i)=0;
			all--;
		}
		if(all==1)
		break;
	}
	for(i=0;i<person;i++)
	{
		if(*(p+i)!=0)
		{
			printf("剩下的人为：%d",i);
		}
	}
	
 } */

//C语言实验报告12（1）
/*
#include <stdio.h>
struct Student//声明结构体变量 
{
	int num;
	char name[50];
	int score[3];
	float ping;
};
int main()
{
	void input (struct Student stu[]);//声明输入函数 
	float average (struct Student stu[]);//声明总平均分函数 
	struct Student max(struct Student stu[]);//声明最高分学生函数 
	
	struct Student stu[5];//声明学生的结构体数组 
	struct Student smax;//最高分学生 
	struct Student *p = stu;//结构体指针 
	float a;
	
	input(p);
	
	a = average(p);
	printf("平均分为%.1f\n",a);
	
	smax = max(p);
	printf("成绩最高的学生信息：\n");
	printf("学号%d\n姓名%s\n三门课成绩分别为%d %d %d",smax.num,smax.name,smax.score[0],smax.score[1],smax.score[2]); 
	
	return 0;
} 
void input (struct Student stu[])
{
	int i;//循环变量
	printf("请输入学生信息：\n");
	for(i=0;i<5;i++)
	{
		scanf("%d%d%d%d%s",&stu[i].num,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].name);
		//gets(stu[i].name);
		stu[i].ping = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 5;
	} 
}
float average (struct Student stu[])
{
	int i;
	float sump;
	for(i=0;i<5;i++)
	{
		sump = sump + stu[i].ping;
	}
	float aver = sump / 5;
	return aver;
}
struct Student max(struct Student stu[])
{
	int i , maxi = 0;
	for(i=0;i<5;i++)
	{
		if(stu[i].ping>stu[maxi].ping)
		maxi = i;
	}
	return stu[maxi];
}*/


//C语言实验报告12（2）
/*
#include <stdio.h>
#include <stdlib.h>
 
struct Person{                                   //定义结构体
    int num;
    struct Person *next , *head , *point;
};
int main()
{
    struct Person per[13];                              //定义结构体变量数组
    int i;
    
    per[0].num=1;
    per[1].num=2;
    per[2].num=3;
    per[3].num=4;
    per[4].num=5;
    per[5].num=6;
    per[6].num=7;
    per[7].num=8;
    per[8].num=9;
    per[9].num=10;
    per[10].num=11;
    per[11].num=12;
    per[12].num=13;
    
    per[0].next=&per[1];
    per[1].next=&per[2];
    per[2].next=&per[3];
    per[3].next=&per[4];
    per[4].next=&per[5];
    per[5].next=&per[6];
    per[6].next=&per[7];
    per[7].next=&per[8];
    per[8].next=&per[9];
    per[9].next=&per[10];
    per[10].next=&per[11];
    per[11].next=&per[12];
    per[12].next=&per[0];

    struct Person *p,*p1;
    for (p=per, i=1; p->next!=p; p=p->next)
	{    
        i++;
        if (i==3)//当报到第三个人时 
		{
            p1=p->next;//将p指向的下一个给p1并输出 
            printf("%d号出去了\n", p1->num);
            p->next=p->next->next;//next指针直接跳过下一个变量，指向下下个变量
            i=1;//重新开始 
 
        }
    }
    printf("\n最后一个人是： %d号\n", p->num);       //输出结果
    return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>

//声明结构体struct Student
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Student* prev;
	struct Student* next;
};

struct Student* input(int);//声明输入函数
void append(struct Student**, struct Student*);//声明建立链表
void del_list(struct Student**, int);//声明删除一个链表中多个节点函数(由age)
struct Student* del_item(struct Student**, struct Student*);//声明删除单个节点函数
void print(struct Student*);//声明输出函数 

int main()
{
	struct Student* a;                              //定义指针a
	a = input(3);                                   //调用输入函数，输入a链表
	int age;
	printf("请输入需要删除的年龄: ");
	scanf("%d", &age);
	del_list(&a, age);                                     //从a中删除b
	print(a);
	return 0;
}

struct Student* input(int n)
{
	struct Student* head = NULL, * stu;
	int i = 0;
	for (i = 1; i <= n; i++)//使用动态内存分配 
	{
		stu = (struct Student*)malloc(sizeof(struct Student));
		printf("请输入第%d号学生的信息: ", i);
		scanf("%d %s %c %d", &stu->num, stu->name, &stu->sex, &stu->age);
		append(&head, stu);
	}
	printf("\n");
	return head;
}

//建立链表操作 
void append(struct Student** head2, struct Student* stu)
{
	stu->next = NULL;
	if (*head2 == NULL)
	{
		stu->prev = NULL;
		*head2 = stu;
	}
	else
	{
		struct Student* p = *head2;
		while (p->next != NULL)
			p = p->next;
		p->next = stu;
		stu->prev = p;
	}
}

//删除一个链表中多个节点函数(由age)
void del_list(struct Student** head, int age)
{
	struct Student* p;
	for (p = *head; p != NULL; )
	{
		if (p->age == age)
			p = del_item(head, p);
		else
			p = p->next;
	}
}

//删除单个节点函数
struct Student* del_item(struct Student** head, struct Student* p)
{
	if (p == *head)
		*head = p->next;
	if (p->prev != NULL)
		p->prev->next = p->next;
	if (p->next != NULL)
		p->next->prev = p->prev;
	struct Student* next = p->next;
	return next;
}

//输出函数
void print(struct Student* stu)
{
	if (stu == NULL)
		printf("空.\n");
	else
	{
		struct Student* p;
		for (p = stu; p != NULL; p = p->next)
		{
			printf("%d %s %c %d\n", p->num, p->name, p->sex, p->age);
		}
	}
}*/

#include <stdio.h>
int main()
{
	int i = -1 , j = 0;
	while(i<10)
	{
		i += 2;
		
		j++;
	}i++;
	printf("%d",j);
	return 0;
}























