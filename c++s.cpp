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
	c = a++;//c�Ľ����+1֮ǰ�Ľ��  �������ִ����a=a+1 
	d = b--;//         -1
	//����++��--�����ȼ�>ǰ��++��--�����ȼ�>�˳������ȼ� 
	cout<<c<<"\t"<<d<<"\t"<<a<<"\t"<<b;
	 
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main ()
{
	double a = 1.0;
	double b = -4.0;    //��������ʼ������a,b,c 
	double c = 3.0;
	cout<<(b*b-4*a*c == 0)<<endl;//�ж�delta�Ƿ����0 
	cout<<(b*b-4*a*c > 0)<<endl;//�ж�delta�Ƕ�����0 
	return 0;//ture��1 false��0 
}*/

/*#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	while(1){//ѭ�����    
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


//�����ַ� 
/*#include <iostream>
using namespace std;
int main()
{
	char c;
	char ec;
	int k;
	cout<<"Please input a lower character and k"<<endl;
	cin>>c>>k;//�����ַ�c 
	ec=((c-'a')+k)%26+'a';//���ܹ�ʽ 
	cout<<ec<<endl;
	return 0;
}*/


/*
�����¶�ת��Ϊ�����¶� 
#include <iostream>
using namespace std;
int main ()
{
double f,c;//����˫���ȱ���f,c 
cin>>f;//���뻪���¶� 
c = 5.0/9.0*(f-32);//���϶�ת����ʽ 
cout<<c<<endl;
return 0;
}
*/

/*
������ѧ����ʽ��ֵ
#include <iostream>
#include <cmath>//��ΪҪ�õ�sin cos���� 
using namespace std;
int main()
{
double x;//����˫���ȱ���x 
double y;//����˫���ȱ���y 
cin>>x;
y = sin(x*x)/(1-cos(x));//��Ŀ������ʽ 
cout<<y;
return 0;
}
*/

/*
���ݵļ�ͳ��
#include <iostream>
using namespace std;
int main()
{
int x,y,z;
cin>>x>>y>>z;
cout<<x+y+z<<"\n"<<(x+y+z)/3.0<<"\n"<<int((x+y+z)/3.0+0.5)<<endl;
//��ΪC++�м���printf����������ֱ�Ӱ���������ʽ�����������
//�����ٽ���  ƽ��ֵ  ����������������   
return 0;
} 
*/

/*
����Ǯ 
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
//������Բ�����������ʼ������a,b,c,d,e
//�������cout��ֱ�ӽ�a b c d e�滻�����ּ��� 
cin>>J;
cout<<J/a<<" "<<J%a/b<<" "<<J%a%b/c<<" "<<J%a%b%c/d<<" "<<J%a%b%c%d/e<<endl;
return 0;
}
*/

/*
Сдת��д
#include <iostream>
using namespace std;
int main()
{
char c;//�����ַ�����c 
cin>>c;
c >='a'?cout<<char(c-32):cout<<c;//����ʹ������Ŀ�����...?...:... 
//a��ASCII����ֵ��97,A��ASCII����ֵ��65���������32 
//����������  ��������ϵʽ�����true�Ļ�������ϵʽ�����false�Ļ��� 
return 0;
} 
*/


//��ҵ�� 
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
	float a,b,t;//����float�ͱ��� 
	scanf("%f%f",&a,&b);//��С����ʽ����ab 
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
    printf("�ɼ���%d  ���֣�%c", a,b);
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
 cout<<"����x��n :";
 cin>>x;
 cin>>n;
 cout<<"x��n�η��ǣ�"<<power(x,n)<<endl; 
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
//���һԪ���η��̵Ľ� 
#include <stdio.h>
#include <math.h> 
int main ()
{
	double a,b,c,disc;//����˫���ȸ����ͱ��� 
	double x1,x2,realpart,imagpart;//����˫���ȸ����ͱ���
	scanf("%1f %1f %1f",&a,&b,&c); 
	printf("The equation");
	if(fabs(a) <= 1e-6)//fabs()Ϊ�����ֵ����  1e-6Ϊ1*10��-6�η� 
		printf("It's not a quadratic");
	else
	{
		disc = b * b - 4 * a * c;//delta��ʽ 
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
	 	if(f3>100) continue;//continue�ǽ�������ѭ��  
		                    //������������ ǿ�ȿ�ʼ��һ��ѭ��
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
	k = sqrt(n);//��n������  Ҳ���Ǽ������֮n 
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
	char a[2][50];//�����а�������Ԫ�أ�ÿ��Ԫ�����ַ����ͣ��ַ����ĳ�����50���ַ� 
	scanf("%s", &a);//�����ַ� 
	printf("This program is coded by %s %s.\n", a);
	return 0;
}*/

/*author: Cuisuhang
 *program name:��1��2��3��4��5�Ľ��
*/

/*#include <stdio.h>
 int main ()
 {
 	int a
 	a = 1 * 2 * 3 * 4 * 5;
 	printf("1��2��3��4��5�Ľ���ǣ�%d\n",a);
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
	printf("1��2��3��4��5�Ľ���ǣ�%d\n",j);
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
	printf("1��2��3��4��5�Ľ���ǣ�%d\n",j);
	
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
	printf("1��2��3��4��5�Ľ���ǣ�%d\n",a*b*c*d*e);
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
	int num[50];//����ѧ�ŵ����������� 
	int score[50];//����ɼ������������� 
	int i;
	for(i=1;i<=50;i++)//forѭ��50�� 
	{
		printf("�������%d��ѧ����ѧ�ţ�\n",i);
		scanf("%d",&num[i]);
		printf("�������%d��ѧ���ĳɼ���\n",i);
		scanf("%d",&score[i]);
	}
	for(i=1;i<=50;i++)
	{
		if(score[i]>=80)//�ɼ�����80Ϊ�� 
		{
			printf("80�����ϵ�ѧ����ѧ�źͳɼ��ֱ��ǣ�%d %d",num[i],score[i]);//�����i��ѧ����ѧ�źͳɼ� 
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
		  j = 1;//���� 
		else
		  j = 0;//�������� 
		  
			if(j)
		 		printf("%d��������\n",i); 
		 	else
	    		printf("%d�겻������\n",i);
    }
	return 0;
}*/
//ʵ�鱨��2 
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
	printf("�������������ʣ�");
	scanf("%f",&r);
	printf("������������");
	scanf("%d",&n);
	p = pow((1 + r),n);
	printf("10����ҹ�����������ֵ�������������%f��",p);
	
	return 0;
}*/
//���������һ���ظ�������ȷ�� 
/*#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	for(n=100;n<=200;n++)//n��100��ʼ����200���� 
	{	
		k = sqrt(n);//��n������  Ҳ���Ǽ������֮n 

		for(i=2;i<=k;i++)//����n/2 
	    {
	   		if(n%i==0)  break;
	     	 
		}//��i<=k��������ʱ�� n��������ѭ�� 
		if(i>k)
	    	{
		 		printf("%d������\n",n);
			}
	}
	return 0;
 }

  
/* 
#include <stdio.h>
int main()
{
	int i , k , l,j;//�������i��j , k ��l 
	for(l=100;l<=200;l++)//lΪ����������100��ʼ 
	{		
		for(i=2;i<=l;i++)//iΪ��������2��ʼ 
		{
			if(l%i==0)//���ܱ�i����������ѭ�� 
				break;
			else
			  	if(i<=l-1)//���ܱ�i������i<=l-1 
				  	j = 1;//lΪ���� 
	}
	 			 if(j)//�ж����� 
        {
            printf("%d\n",l);
            j = 0;//�������������j��ֵ0 
        }
	}
	return 0;
 }*/

//շת����� 
/*#include <stdio.h>
int main()
{
	int m , n , i;
	scanf("%d %d",&m,&n);
	i = m % n;
	while(i!=0)//������i������0ʱ��ʼѭ�� 
	{
		m = n;//��n��ֵ������m 
		n = i;//��i��ֵ������n
		i = m % n;//���� 
	}
	printf("%d\n",n);
	return 0;
}*/ 

/*ö�ٷ� 
#include <stdio.h>
int main()
{
	int a , b , c , gys ,i;
	scanf("%d%d",&a,&b);//����Ҫ�Ƚϵ������� 
	a>b?c=b:c=a;//������֮����С������ֵ��C 
	for(i=1;i<=c;i++)//��1���ൽ��С���Ǹ������� 
	{
	if(a%i==0&&b%i==0)//��һ�����ܽ�a,bͬʱ��������i 
	gys = i;//���丳ֵ��gys 
	}
	printf("%d��%d�����Լ��=%d",a,b,gys);
	return 0;
	} 
*/
/*������� 
#include <stdio.h>
 int main()
 {
 	int a , b;
 	scanf("%d%d",&a,&b);
 	while(a!=b)//a,b����ȣ�������С����ֱ�����Ϊֹ 
 	{
 		if(a>b)
 		a=a-b;
 		else
 		b=b-a;
 		
	 }//a=bʱ����ѭ�� 
	 printf("a,b�����Լ��Ϊ��%d",a);//������a����b�������һ�� 
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
//��ҵ 
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
	
	printf("Բ�ܳ�Ϊ��%.2f\n",C);
	printf("Բ���Ϊ��%.2f\n",S);
	printf("Բ������Ϊ��%.2f\n",SB);
	printf("Բ�����Ϊ��%.2f\n",V);
	printf("Բ�����Ϊ��%.2f\n",VZ);
	return 0;
}*/
//��ʵ��n�η��� 
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
 
 //��������
 /*
#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	int n;//λ��
	int start , end;//nλ������ʼֵ����ֵֹ 
	int m;//���жϵ��� 
	int digit;//��λ����ֵ 
	int sum;//�� λ�� ��n�η� �ĺ� 
	int i;//ѭ������ 
	cout<<"��nλ������  ������λ��:";
	cin>>n; 
	while(n>0)
	{
		start = pow(10,n-1);
		end = pow(10,n) - 1;
		cout<<n<<"λ������";
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
		cout << "��nλ��������������λ����";
		cin >> n; 
	 } 
	 cout << endl;
	 return 0;
 }*/

 
//Сдת��д 
/*#include <iostream>
using namespace std;
int main()
{
	char str[10];//����һ��������10���ַ�������
	int i = 0;//�±�
	cin>>str;
	while(str[i]!='\0')
	{
		str[i]=str[i]-32;//����ǰ�±�����ʾ����ĸ��ȥ32��ASCII��
		i = i + 1; 
	 } 
	 cout<<str<<endl;
	 return 0;
 }*/


/*�ṹ�����Ͷ��巽��
  struct �ṹ����
  {
  	������1  ��Ա����1��
	������2  ��Ա����2��
	������n  ��Ա����n�� 
  };
ͬһ�ṹ��ĳ�Ա����ͬ����������ṹ�������������ͬ��*/

/*�ṹ���������������
  struct �ṹ����  �����б�
  
  ����ʱ��
  1.����ṹ�����ͺ�����
  	struct Date today
  2.����ṹ������ͬʱ����������ʡ�Խṹ����
  	struct Date{int year,month,day;} today; */
 
//����ͨѶ¼
/*C++�� 
#include <iostream>
using namespace std;
int main()
{
	struct telelist{
		char name[8];//���� 
		char sex;//�Ա� 
		char num1[5];//�绰����1 
		char num2[5];//�绰����2 
					}
		list1[3];//������ϵ�� 
		int i;//������ 
	for(i=0;i<=2;i++)//�������� 
	cin>>list1[i].name>>list1[i].sex>>list1[i].num1>>list1[i].num2;
	for(i=2;i>=0;i--)//������� 
	cout<<list1[i].name<<"/"<<list1[i].sex<<"/"<<list1[i].num1<<"/"<<list1[i].num2<<endl;
	return 0;	
}*/

//C���԰�
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
	for(i=0;i<=2;i++)//��������
	{
		scanf("%s %s %d %d",&list1[i].name,&list1[i].sex,&list1[i].num1,&list1[i].num2);
	}	
	for(i=2;i>=0;i--)//�������
	{
		printf("������%s\n",list1[i].name);
		printf("�Ա�%s\n",list1[i].sex);
		printf("��ϵ��ʽ1��%d\n",list1[i].num1);
		printf("��ϵ��ʽ2��%d\n",list1[i].num2);	
	} 
	return 0;
 }*/ 
 
//��ɫ��
/*
#include <iostream>
using namespace std;
enum COLOR {red,yellow,blue};//ö�� ��ɫ 
int main()
{
	enum COLOR first,second;//��int������Ҳ������������ 
	for(first=red;first<blue;first=(COLOR)(first+1))//��һ��ȡ�� ȡ����������Ϊû����� 
	{                              //��first+1�ͱ����������ʽ����Ҫǿ��ת����ö������ 
		for(second=(COLOR)(first+1);second<=blue;second=(COLOR)(second+1))
		{
			int i;
			for(i=0;i<2;i++)//ִ������ѭ�� 
			{
				int temp;
				if(i==0) temp=first;//i=0ʱ ��ʱ����tempΪfirst 
				if(i==1) temp=second;//i=1ʱ ��ʱ����tempΪsecond
				switch(temp)//��firstΪredʱ���red ѭ����Ϊsecond���yellow 
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

//ð������

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
	printf("�������������������Լ����");
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
	unsigned int p,q;//�޷���int���� 
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
	
	printf("int�ͱ���a��ռ�ֽ�Ϊ:%d\nint�ͱ���b��ռ�ֽ�Ϊ:%d\n",s1,s2);
	printf("float�ͱ���d��ռ�ֽ�Ϊ:%d\nfloat�ͱ���e��ռ�ֽ�Ϊ:%d\n",s5,s6);
	printf("char�ͱ���c1��ռ�ֽ�Ϊ:%d\nchar�ͱ���c2��ռ�ֽ�Ϊ:%d\n",s3,s4);
	printf("double�ͱ���f��ռ�ֽ�Ϊ:%d\ndouble�ͱ���g��ռ�ֽ�Ϊ:%d\n",s7,s8);
	printf("long�ͱ���m��ռ�ֽ�Ϊ:%d\nlong�ͱ���n��ռ�ֽ�Ϊ:%d\n",s9,s10);
	printf("unsigned int�ͱ���p��ռ�ֽ�Ϊ:%d\nunsigned int�ͱ���q��ռ�ֽ�Ϊ:%d\n",s11,s12);
}*/
//�ṹ������Ϣ 
/*
#include <stdio.h>
#define one 0.015
#define two 0.0275
#define three 0.021
#define five 0.03
#define huo 0.0035
//��Ϣ=��������ʡ�ʱ��
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
	
	printf("һ�δ�5���ڵ���ϢΪ:%f\n",Fangfa1.f1);
	printf("�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3���ڵ���ϢΪ:%f\n",Fangfa2.f2);
	printf("�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3���ڵ���ϢΪ:%f\n",Fangfa3.f2);
	printf("��1���ڣ����ں󽫱�Ϣ�ٴ�1���ڣ�������5�ε���ϢΪ:%f\n",Fangfa4.f6);
	printf("����ڴ�������Ϣÿһ���Ƚ���һ�ε���ϢΪ:%f\n",Fangfa5.f1);
	
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

//ʵ������
/* 
#include <stdio.h>
int main()
{
	int i,j;//iΪ���� 
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)//�ϰ벿����5�У�ÿһ���Ǻ���ߵĿո�����Ϊ5-i 
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)//ÿһ�ж���������2��-1������ 
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=4;i>=1;i--)//�°벿��Ϊ4�У��ӵ����п�ʼ�����ݼ� 
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
//��������
/* 
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Please Enter n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)//�����η�Ϊ���������֣�n�������������� 
 {
  for(j=1;j<=n+i-1;j++)//�ϰ벿����5�У�ÿһ���Ǻ���ߵĿո�����Ϊn-i 
  if(j==n-i+1||j==n+i-1)//n-i+1Ϊ��ߵ�����  n+i-1Ϊ�ұߵ����� 
     printf("*");
  else 
     printf(" ");//������֮���λ��ȫ�ǿո� 
  printf("\n");      
 }
 for(i=1;i<n;i++)//�����������ε����� 
 {
  for(j=1;j<=2*n-i-1;j++)//ÿһ�ж���������2��-1������ 
  if(j==i+1||j==2*n-i-1)//��ߴӵڶ�����ʼ �ұ�ͬ�� 
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
 for(i=1;i<=n;i++)//�����η�Ϊ���������֣�n�������������� 
 {
  for(j=1;j<=n+i-1;j++)//�ϰ벿����5�У�ÿһ���Ǻ���ߵĿո�����Ϊn-i 
  if(j==n-i+1||j==n+i-1)//n-i+1Ϊ��ߵ�����  n+i-1Ϊ�ұߵ����� 
     printf("*");
  else 
     printf(" ");//������֮���λ��ȫ�ǿո� 
  printf("\n");      
 }
 for(i=1;i<n;i++)//�����������ε����� 
 {
  for(j=1;j<=2*n-i-1;j++)//ÿһ�ж���������2��-1������ 
  if(j==i+1||j==2*n-i-1)//��ߴӵڶ�����ʼ �ұ�ͬ�� 
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
	printf("�����Χ���ޣ�");
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
		printf("%d������\n",i);
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
	printf("�ڵ�ʮ�����乲����%lf��",s);
	printf("�ڵ�ʮ�η���%lf��",h);
	return 0;
	
} */

//����͵��
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
	printf("��һ����%d������",total);
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
	
	printf("a1��ֵ��%d\n",a1);
	printf("a2��ֵ��%d\n",a2);
	printf("a3��ֵ��%d\n",a3);
	printf("a4��ֵ��%d\n",a4);
	printf("a5��ֵ��%d\n",a5);
 }*/
/*
#include <stdio.h>
#include <math.h>
int main ()
{
	int a , b , c;
	printf("�����һ��������1000��������");
	scanf("%d",&a);
	while(a>1000||a<0)
	{
		printf("���������룺");
		scanf("%d",&a); 
	 } 
	 b = (int)sqrt(a);
	 printf("%d��ƽ����Ϊ%",a,b);
 }*/
/*
#include <stdio.h>
int main()
{
	int x , y , i , j;
	printf("����x��");
	scanf("%d",&x);
	
	if(x<1) j=1;
	if(x<10&&x>=1) j=2;
	if(x>=10) j=3;
	
	switch(j)
	{
		case 1 : printf("y��ֵΪ%d",y=x);break;
		case 2 : printf("y��ֵΪ%d",y=2*x-1);break;
		case 3 : printf("y��ֵΪ%d",y=3*x-11);break;
	 } 
	 return 0;
 }*/
 /*P109 9		
#include<stdio.h>
int main()
{
		int a , n = 0 , i;
		printf("����һ��������5λ����������");
		scanf("%d",&a);
		while(a!=0)
		{
			a = a / 10;
			++n;
		}
		printf("%dλ��",n);
	}
*/	
/*	
#include<stdio.h>
int main()
{
		int a , n = 0 , i,j,m;
		int b[m];
		scanf("%d",&m);
		printf("����һ��������%dλ����������",m);
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
		printf("����һ��������%dλ����������",n);		
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
 printf("��������ģ�\n");
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
//�ɼ�if���
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
    printf("�ɼ���%d  ���֣�%c", a,b);
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
		printf("����������������룺");
		scanf("%d",&a); 		
	} 
	
	if (a>=90) b = 1;
    if (a>=80&&a<90) b = 2;    
    if (a>=70&&a<80) b = 3;
    if (a>=60&&a<70) b = 4;
    if (a<60) b = 5;
    
    switch(b)
    {
    	case 1 : printf("�ɼ���%d  ���֣�A", a);break;
    	case 2 : printf("�ɼ���%d  ���֣�B", a);break;
    	case 3 : printf("�ɼ���%d  ���֣�C", a);break;
    	case 4 : printf("�ɼ���%d  ���֣�D", a);break;
    	case 5 : printf("�ɼ���%d  ���֣�E", a);break;
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
	
	printf("����һ���ַ���");
	while((a=getchar())!='\n')
	{
		if(a>='A'&&a<='Z')
		dzm++;
		else if(a>='a'&&a<='z')
		xzm++;
		else if(a==' ')
		kg++;
		else if(a>='0'&&a<='9')//�����ַ����� �������� 
		sz++;
		else
		qt++; 
		
	}
	printf("��д��ĸ����%d\n",dzm);
	printf("Сд��ĸ����%d\n",xzm);
	printf("�ո�����%d\n",kg);
	printf("��������%d\n",sz);
	printf("�����ַ�����%d\n",qt);

	return 0; 
}*/
//C���԰������� 
/*
#include <stdio.h> 
#include <math.h>
int main()
{
	int n;//λ��
	int start , end;//nλ������ʼֵ����ֵֹ 
	int m;//���жϵ��� 
	int digit;//��λ����ֵ 
	int sum;//�� λ�� ��n�η� �ĺ� 
	int i;//ѭ������ 
	printf("��nλ������  ������λ��:");
	scanf("%d",&n); 
	while(n>0)//λ������0 
	{
		start = pow(10,n-1);//�ӵ�ǰλ����С�Ŀ�ʼ�ж� 
		end = pow(10,n) - 1;//�ӵ�ǰλ�����Ŀ�ʼ�ж�
		printf("%dλ������\n",n);
		for(i=start;i<=end;i++)//ͬ�� 
		{
			m = i;//���жϵ��� 
			sum = 0;
			while(m!=0)//��m������0 ��ʼѭ�� 
			{
				digit = m % 10;//����λΪ��ǰ��ȡ�� 
				sum = sum + pow(digit,n);//֮�� 
				m = m / 10;//��10 
			}
			if(sum==i)
			{
				printf("%d\n",i);
			}
		 }
		printf("\n");
		printf("��nλ��������������λ����");
		scanf("%d",&n);
	 } 
	printf("\n");
	return 0;
 }*/

//����ˮ�ɻ���
/*
#include <stdio.h> 
#include <math.h>
int main()
{
	int n = 3;//λ��
	int start , end;//nλ������ʼֵ����ֵֹ 
	int m;//���жϵ��� 
	int digit;//��λ����ֵ 
	int sum;//�� λ�� ��n�η� �ĺ� 
	int i;//ѭ������ 

	for(n=3;n<4;n++)//λ������0 
	{
		start = pow(10,n-1);//�ӵ�ǰλ����С�Ŀ�ʼ�ж� 
		end = pow(10,n) - 1;//�ӵ�ǰλ�����Ŀ�ʼ�ж�
		printf("ˮ�ɻ���Ϊ��",n);
		for(i=start;i<=end;i++)//ͬ�� 
		{
			m = i;//���жϵ��� 
			sum = 0;
			while(m!=0)//��m������0 ��ʼѭ�� 
			{
				digit = m % 10;//����λΪ��ǰ��ȡ�� 
				sum = sum + pow(digit,n);//֮�� 
				m = m / 10;//��10 
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
//��ѡ������
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
/*������� 
#include <stdio.h>

void selectsort(int *p)
{
	int i , max=0 , j , temp;
	for(i=0;i<9;i++)
	{
		max = i;//��ǰ����±�Ϊi 
		for(j=i+1;j<10;j++)
		{
			if(p[max]<p[j])
			{
				max = j;//�������ȵ�ǰ���ֵ���򽫵�ǰ�±긳ֵ��max		
			}
			if(i!=max)//��i���ǵ�ǰ���ֵʱ����ʼ���� 
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
	int i , j , temp;//ѭ������
	int max;//���ֵ�±�
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
	int max;//���ֵ�±�
	int a[10];
	int i , *p1 , *p2 , temp;
	
	printf("�������֣�");
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

//ѡ��
/*
#include<stdio.h>
int main()
{
	int i,j,min,temp,a[10];
	printf("enter data:\n");
	for (i=0;i<10;i++)
	{
		printf("please enter NO.%d numbers:\n",i);
		scanf("%d",&a[i]); //����10����
	}
		printf("\n");
		printf("The orginal numbers:\n");
	for (i=0;i<10;i++)
		{
			printf("%5d",a[i]); //�����10����
			printf("\t"); //����8���Ƕ���10��������
		}
	for (i=0;i<10;i++)
		{	
			min=i;
			for(j=i+1;j<10;j++)
			{
			if (a[min]>a[j]) 
				min=j;
				temp=a[i]; //����3�н�a[i+1]~a[10]����Сֵ��a[i]�Ի�
				a[i]=a[min];
				a[min]=temp;
			}
	}
			printf("\n The sorted numbers:\n"); //������ź����10����
			for(i=0;i<10;i++)
			printf("%5d",a[i]);
			printf("\n");
	return 0;
}
//����
/* 
#include <stdio.h>
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};//�Ѿ��ź��������a[10] 
	int b[11];//������ 
	int num , i , j , temp;
	
	printf("������Ҫ��������֣�");
	scanf("%d",&num);
	
	for(i=0;i<10;i++)
	{
		b[i] = a[i];//��a[]�е�����Ԫ�ظ���b[] 
	}
	
	b[10] = num;//���һλ��Ҫ����� 
	
	for(i=0;i<10;i++)//11�����Ƚ�10�� 
	{
		for(j=0;j<10-i;j++)//ÿ��Ƚ�10-i�� 
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

//����80
/* 
#include <stdio.h>
int main()
{
	char a[3][80];//������ά�ַ����� 
	int dzm=0 , xzm=0 , kg=0 , sz=0 , qt=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("�������%d�У�",i+1);
		gets(a[i]);//�����i�� 
		for(j=0;a[i][j]!='\0'&&j<80;j++)//�ж������������ֵ���ǿ���С��80 
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
			dzm++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
			xzm++;
			else if(a[i][j]==' ')
			kg++;
			else if(a[i][j]>='0'&&a[i][j]<='9')//�����ַ����� �������� 
			sz++;
			else
			qt++;	
		}
		 
		
	}
	
	
	printf("��д��ĸ����%d\n",dzm);
	printf("Сд��ĸ����%d\n",xzm);
	printf("�ո�����%d\n",kg);
	printf("��������%d\n",sz);
	printf("�����ַ�����%d\n",qt);

	return 0; 
}
*/

//����
/*
#include <stdio.h>
#define H 4
#define L 4

int main()
{
	int a[H][L];//��������
	int i , j ,l;//�� ��  l�����Ƚ������ֵ 
	int max , maxj , flag;//�����ֵ�������ֵ 
	 
	for(i=0;i<H;i++)
	{
		printf("�������%d�е�Ԫ�أ�",i+1);
		for(j=0;j<L;j++)
		{	
			scanf("%d",&a[i][j]);//����
		}
 	}
 	for(i=0;i<H;i++)
 	{
 		max=a[i][0];//����һ�е�һ����Ϊ��ǰ���ֵ 
 		maxj=0;//����ǰ�кŸ��������ֵ 
 		for(j=0;j<L;j++)
 		{
 			if(a[i][j]>max)//����ǰԪ�ر����ֵ��ʱ 
			{
				max = a[i][j]; //��ǰԪ�ؾ������ֵ
				maxj = j;//����ǰ���Ԫ�ص��з���maxj��
			}			 
		}
		
		flag = 1;//���������������ǰ��� 
	 
		for(l=0;l<H;l++)
		{
			if(max>a[l][maxj])//�����ǰ���ֵ���������е����ֵ 
			{
				flag = 0;//���ǰ��� 
				continue;//��������ѭ�� 
			}
		}
		if(flag)//�жϰ����Ƿ���� 
    	{
      	printf("a[%d][%d]=%d\n",i,maxj,max); //��������ֵ���������к� 
      	break;//���� 
    	}
  }
  		if(flag==0)//��flag=0���ް��� 
  		{ 
    		printf("���㲻����!\n"); 
  		}
	return 0;	 
}
*/
//ʵ�鱨��7 ��1��
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
	//���� 
	for(i=0;i<H;i++)
	{
		printf("�������%d�е����ݣ�",i+1);
		for(j=0;j<L;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//�к�
	for(i=0;i<H ;i++)
	{
		sumH = 0;
		printf("��%d��֮��Ϊ��",i+1);
		for(j=0;j<L;j++)
		{
			sumH += a[i][j];
		}
		printf("%d\n",sumH);
	}
	//�к� 
	for(j=0;j<L;j++)
	{
		sumL = 0;
		printf("��%d��֮��Ϊ��",j+1);
		for(i=0;i<H;i++)
		{
			sumL += a[i][j];
		}
		printf("%d\n",sumL);
	}
	//�Խ���1
	for(i=0,j=0;i<H&&j<L;i++,j++)
	{
		sumDJ1 += a[i][j];
	 }
	 for(i=0,j=4;i<H&&j>=0;i++,j--)
	{
		sumDJ2 += a[i][j];
	 }
	sumDJ = sumDJ1 + sumDJ2;
	printf("�Խ���֮��Ϊ:%d",sumDJ);
	 
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
	puts("����һ���ַ�����");
	gets(a);
	num=strlen(a);
	char b[num];
	for(i=num-1,j=0;i>=0;i--,j++)   //������������¸�������b
	{
		b[j]=a[i];
	}
    b[j]='\0';  //�ַ����������־
	if(strcmp(a,b)==0)
		printf("����");
	else
		printf("������");
}
*/
//����
/* 
#include<stdio.h>
#define N 3 
#define M 4
int main(){
	int i,j,k,sum;
	int a[N][M],b[M][N],c[N][N];	 
	//��һ������ 
	printf("������һ��%d��%d������A��\n",N,M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
	}
	//�ڶ������� 
	printf("������һ��%d��%d������B��\n",M,N);
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&b[i][j]);
	}
	//������˻� 
	for(i=0;i<N;i++)
	{
		for(k=0;k<N;k++)
		{
			for(j=0,sum=0;j<M;j++)
			{
				sum+=a[i][j]*b[j][k];
			}
			c[i][k]=sum;		//��ý���ĵ�һ��Ԫ��,��������������� 
		}
	}	
	//�������������þ��� 
	printf("A��B�Ľ��Ϊ��\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%d ",c[i][j]);
		printf("\n");	
	}
	return 0; 
}*/

//ʵ�鱨��8 
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	printf("Please enter a number:");
	scanf("%d",&n); 
	
		k = sqrt(n);//��n������  Ҳ���Ǽ������֮n 

		for(i=2;i<=k;i++)//����n/2 
	    {
	   		if(n%i==0)  break;
	     	 
		}//��i<=k��������ʱ�� n��������ѭ�� 
		if(i>k)
		printf("%d������\n",n);
		else
		printf("%d��������\n",n);
	
	return 0;
 }
 */
 /*
#include <stdio.h>
#include <math.h>

int su(int a)
{
	int i , k;
	k = sqrt(a);//��n������  Ҳ���Ǽ������֮n 

		for(i=2;i<=k;i++)//����n/2 
	    {
	   		if(a%i==0)
	   		return 0;
	     	 
		}//��i<=k��������ʱ�� n��������ѭ�� 
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
	printf("��������");
	else
	printf("������"); 
	return 0;
 }
*/
/*#include <stdio.h>
#include <math.h>

int su(int a)
{
	int i , k;
	k = sqrt(a);//��n������  Ҳ���Ǽ������֮n 

		for(i=2;i<=k;i++)//����n/2 
	    {
	   		if(a%i==0)
	   		return 0;
	     	 
		}//��i<=k��������ʱ�� n��������ѭ�� 
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
		printf("%d������\n",n); 
	 } 
	
	return 0;
 }*/
//ʵ�鱨��8 ��2��
/* 
#include <stdio.h>
#include <string.h>
void fuzhi (char [])
{
	int i , j=0;
	char a1[100];
	int k = strlen(a);//kΪʵ�ʲ�������ĳ���
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
	a1[j]='\0';//�ַ�����ֹ
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
		printf("��%d��ѧ����ƽ�����ǣ�%f\n", i + 1, ping);
	}
}
void kecheng(int a[][5]) {
	int i, j;
	float k, ke;
	for (j=0;j<5;j++) {
		for (i=0,k=0.0;i<10;i++)
			k += a[i][j];
		ke = k / 10;
		printf("��%d��ѧ���Ŀγ�ƽ�����ǣ�%f\n", j + 1, ke);
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
	printf("��߷�Ϊ��%d\n��%d��ѧ��\n��%d�ſγ�\n", h, xue, cour);
}

int main()
{
	int xs[10][5];
	int i, j;
	printf("�������������50��ѧ���ĳɼ���");
	for (i=0;i<10;i++)
		for (j=0;j<5;j++)
			scanf("%d", &xs[i][j]);  //����50��ѧ����5�ſεĳɼ� 
	pingjun(xs);   //����ѧ��ƽ���ֺ���
	kecheng(xs); //���ÿγ�ƽ���ֺ��� 
	zuigao(xs);  //������߷ֺ��� 
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
	puts("�����ַ���:");
	gets(a1);
	puts("��ĵ�����:");
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
    putchar(n % 10 + '0');//�ݹ������ʼ��ӡ 
	//+'0' �ܹ�����������ת��Ϊ�ַ���ʽ�����֡�-'0' ���ܹ����ַ���ʽ������ת��Ϊ��������  
}
//Convert(483) 483/10!=0 ����Convert(48)
//Convert(48)  48/10!=0  ����Convert(4)
//Convert(4)   4/10=0    ����
//Convert(4)��ӡ4        ����
//Convert(48)��ӡ8      ����
//Convert(483)��ӡ3
//ͨ����˵�����ǵ��ݹ�����Ժ󣬾Ϳ��Ե����ݹ���䲻���ڣ�ֱ��ִ��putchar(n%10+'0'); 

int main()
{
	int number;
	printf("������һ����: ");
	scanf("%d", &number);
	printf("���: ");
	if (number < 0)//�и����Ļ��Ӹ��� 
	{
		putchar('-');
		number = -number;//������ת��Ϊ���� 
	}
	Convert(number);
	return 0;
}
*/

//ʵ�鱨��9(3) 
/*
#include <stdio.h>
int main ()
{
	char a;
	int dzm=0 , xzm=0 , kg=0 , sz=0 , qt=0;
	
	printf("����һ���ַ���");
	while((a=getchar())!='\n')
	{
		if(a>='A'&&a<='Z')
		dzm++;
		else if(a>='a'&&a<='z')
		xzm++;
		else if(a==' ')
		kg++;
		else if(a>='0'&&a<='9')//�����ַ����� �������� 
		sz++;
		else
		qt++; 
		
	}
	printf("��д��ĸ����%d\n",dzm);
	printf("Сд��ĸ����%d\n",xzm);
	printf("�ո�����%d\n",kg);
	printf("��������%d\n",sz);
	printf("�����ַ�����%d\n",qt);

	return 0; 
}
*/
//������ð������
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
	printf("������һ����: ");
	scanf("%d", &n);
	itoa(n,s,10);//������ת��Ϊ10�����ַ���ʽ 
	printf("���: %s",s);	
	return 0;
}
*/
//ʵ�鱨��9(4)1
/* 
#include <stdio.h>
int hcf(int a,int b)
{
	int i;
	printf("%d �� %d",a,b);
	int m = a;
	int n = b;
	i = m % n;
	while(i!=0)//������i������0ʱ��ʼѭ�� 
	{
		m = n;//��n��ֵ������m 
		n = i;//��i��ֵ������n
		i = m % n;//����
	}
	printf("�����Լ��Ϊ: %d\n",n);
	return n;
}
int lcd(int a,int b,int c)
{
	int i;
	for(i=1;i>0;i++)
	{
		if(i%a==0&&i%b==0&&i%c==0)
		{
			printf("%d �� %d �� %d ����С������Ϊ��%d",a,b,c,i);
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
	printf("%d �� %d",a,b);
	int m = a;
	int n = b;
	i = m % n;
	while(i!=0)//������i������0ʱ��ʼѭ�� 
	{
		m = n;//��n��ֵ������m 
		n = i;//��i��ֵ������n
		i = m % n;//����
	}
	gy = n;
	printf("�����Լ��Ϊ: %d\n",gy);
	return n;
}
int lcd(int a,int b,int c)
{
	for(gb=1;gb>0;gb++)
	{
		if(gb%a==0&&gb%b==0&&gb%c==0)
		{
			printf("%d �� %d �� %d ����С������Ϊ��%d",a,b,c,gb);
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
//ʵ�鱨��10(1)1
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
	int a , b ,c;//������������
	scanf("%d %d %d",&a,&b,&c);
	int *a1 , *a2 , *a3;//��������int��ָ��
	a1 = &a;
	a2 = &b;
	a3 = &c;
	paixu(a1,a2,a3);
	printf("%d %d %d",*a1,*a2,*a3);
	return 0;
	
}*/

//ʵ�鱨��10(1)2
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
	char a , b ,c;//������������
	scanf("%c %c %c",&a,&b,&c);
	char *a1 , *a2 , *a3;//��������int��ָ��
	a1 = &a;
	a2 = &b;
	a3 = &c;
	paixu(a1,a2,a3);
	printf("%c %c %c",*a1,*a2,*a3);
	return 0;
	
}*/
/*
//ʵ�鱨��10��2��
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
    printf("ת�ú�ľ���Ϊ:\n");
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
    printf("������%d��ֵ:\n",N*N);
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    printf("ԭ����Ϊ:\n");
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
            *(*(p+i)+j)=*(*(p+j)+i);//ת�� 
            *(*(p+j)+i)=temp;
        }
    }
    printf("ת�ú�ľ���Ϊ:\n");
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
    int (*p)[N];//����ָ�룬p��һ��ָ�룬ָ��һ����3��Ԫ�ص�����
//  int *p[3] ָ�����飬p��һ����3��Ԫ�ص����飬ÿ��Ԫ�ص�����������ָ�� 
    p = a;
    printf("������%d��ֵ:\n",N*N);
    for(int i=0;i<N;i++)
	{
        for(int j=0;j<N;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    printf("ԭ����Ϊ:\n");
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
	printf("�ַ�������Ϊ��%d",i);
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
	int a , b ,c;//������������
	scanf("%d %d %d",&a,&b,&c);
	int *a1 , *a2 , *a3;//��������int��ָ��
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
	printf("%c",*--p);//��Ϊ�ַ���ĩβ��һ��������־����*p++�Ļ����ȴ�ӡ�ո� 
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
	printf("�ַ�������Ϊ��%d",i);
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

//ʵ�鱨��11��1��
//��ָ���
/* 
#include <stdio.h>
int main()
{
	int a[100];
	int all , person , flag = 0;
	int i;
	
	scanf("%d",&person);
	printf("������������%d\n",person);
	
	
	all = person;
	
	for(i=1;i<=person;i++)
	{
		a[i]=1;//��Ȧ����Ϊ1 
	} 
	for(i=1; ;i++)
	{
		if(i==person+1)//��i�������������ͻص�1 
		{
			i=1;
		}
		
		if(a[i]!=0)//����ǰ����Ȧ��Ļ���flag+1
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
			printf("ʣ�µ���Ϊ��%d",i);
		}
	}
	
	return 0;
} */

//ָ��� 
/*
#include <stdio.h>
int main()
{
	int a[100];
	int *p = &a[1];

	int all , person , flag = 0;
	int i;
	
	scanf("%d",&person);
	printf("������������%d\n",person);
	
	
	all = person;
	
	for(i=0;i<person;i++)
	{
		*(p+i)=1;//��Ȧ����Ϊ1 
	} 
	for(i=0; ;i++)
	{
		if(i==person)//��i�������������ͻص�1 
		{
			i=0;
		}
		
		if(*(p+i)!=0)//����ǰ����Ȧ��Ļ���flag+1
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
			printf("ʣ�µ���Ϊ��%d",i);
		}
	}
	
	return 0;
}
*/
//C����ʵ�鱨��11��2�� 
/*
#include <stdio.h>
int main()
{
	int a[5][5];//�������� 
	int (*p)[5];//����ָ�� 
	int *max , *min 
	return	0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
#define N 5
void swop(int* a, int* b)//ʹ��λ����� ����������
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
void fun(int(*p)[N])
{
	int* max = (int*)p;//���ֵ
	int* min1 = (int*)p;//��Сֵ
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
	int* min2 = *(p + 2) + 2;//��2С 
	int* min3 = *(p + 2) + 2; //��3С
	int* min4 = *(p + 2) + 2;//��4С 

	swop(max, *(p + 2) + 2);//���ֵ���м��ֵ����
	swop(min1, *p);//��Сֵ�����Ͻǵ�ֵ����
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
	swop(min2, *(p)+N - 1);//��Сֵ�����Ͻǵ�ֵ����
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
	swop(min3, *(p + N - 1));//��������Сֵ�����½ǵ�ֵ����
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
	swop(min4, *(p + N - 1) + N - 1); //��������Сֵ���½ǵ�ֵ����
}
int main()
{
	int arr[N][N];
	int(*p)[N] = arr;//����ָ���ά�����ָ��p
	int count = 25;
	for (int i = 0; i < N; ++i) {//��ʼ����ά����
		for (int j = 0; j < N; ++j)
		{
			*(*(p + i) + j) = count;
			count -= 1;
		}
	}
	printf("ԭ����Ϊ\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
	printf("\n\nת���������Ϊ\n");
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
	printf("����������ֵ:\n");
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++) 
		{
			scanf("%d", &num[i][j]);
		}
	}
	//���ԭ���ľ���
	printf("������ľ���Ϊ:\n");
	for (i = 0; i<5; i++) 
	{
		for (j = 0; j<5; j++)
		{
			printf("%3d", num[i][j]);
		}
		printf("\n");
	}
	change(p);
	//���������ľ���
	printf("��Ҫ�������ľ���Ϊ:\n");
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
	//�ҵ����ֵ�����ŵ��м�
	int i, j, t, *max = p;
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++) 
		{
			if (*max < *(p + i * 5 + j)) //p�ĳ�ʼλ��Ϊ0
										 //iΪ��  jΪ�� 
			max = p + i * 5 + j;
		}
	}
	t = *(p + 2 * 5 + 2);//��3�е�3�� 
	*(p + 2 * 5 + 2) = *max;
	*max = t;

	int * min = p;//����С��ֵ
	
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
	
	t = *min;//��С��ֵ�͵�һ��Ԫ�ؽ���
	*min = *p;
	*p = t;

	min = p + 1;//�ӵڶ���Ԫ�ؿ�ʼ

				//�ҵ���С��ֵ
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
	
	t = *min;//��С��ֵ�͵�5��Ԫ�ؽ���
	*min = *(p + 4);
	*(p + 4) = t;
	min = p + 1;//�ӵڶ���Ԫ�ؿ�ʼ

				//�ҵ�����С��ֵ
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
	//����С��ֵ�͵�21��Ԫ�ؽ���
	t = *min;
	*min = *(p + 20);
	*(p + 20) = t;
	min = p + 1;//�ӵڶ���Ԫ�ؿ�ʼ

				//�ҵ�����С��ֵ
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
	//����С��ֵ�͵�25��Ԫ�ؽ���
	t = *min;
	*min = *(p + 24);
	*(p + 24) = t;
}*/
/*
#include<stdio.h>
#include<math.h>

float avg(int arry[][5], int n)//��һ�ſγ̵�ƽ���� 
{
	float sum = 0 , ping;
	for (int i = 0; i < n; i++) {
		sum += arry[i][0];
	}
	ping = sum / n; 
	printf("��һ�ſγ�ƽ����:%f\n", ping);
	return ping;
}
void fail(int arry[][5], int n)
{
	printf("�������Ͽγ̲�����ѧ����Ϣ��\n ");
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
		printf("ѧ��:%d\n ", i + 1);
		printf("����: ");
		for (int j = 0; j < 5; j++)
		{
			sum += arry[i][j];
			printf("%d ", arry[i][j]);
		}
		printf("ƽ����:%d \n", sum / 5);
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
			sum += arry[i][j]; //�����ܷ����ڼ���ƽ����
			if (arry[i][j] > 85) {
				count++; //��ÿ�ſζ�����85��count�ܻ���jͬ��++
			}
		}
		if ((sum / 5) > 90 || count == j) {
			printf("����ѧ��: %d\n", i + 1);
		}
	}
	return;
}

int main()
{
	int arry[4][5];
	printf("����һ��4x5�ľ���");
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
            //s[i]����sָ�������е�i��Ԫ�ر����һ��ָ�룬�ٴν����þ������յ����ݿռ�
			if (*(s[i]) > *(s[j])) {
				int tmp = *(s[i]); //ָ��ĺô�����ֱ��ͨ����ֵ���Ըı�ָ��
				*(s[i]) = *(s[j]);  //ֻҪ�������ַ����ĵ�ַ��ʵ�����ַ����Ľ���
				*(s[j]) = tmp;//���ͨ��ָ��ָ��Ľ������ܹ�ʵ���������ַ���������
			}
		}
	}
}
int main()
{
	int *integers;
	int count = 0;
	printf("�����������: ");
	scanf("%d", &count);
	integers = (int*)malloc(count * sizeof(int));//Ϊָ������count��int�ռ����ڴ�����������
	int **p = (int **)malloc(count * sizeof(int*));//Ϊָ������count��int*�ռ����ڴ��int�ռ���׵�ַ
	printf("������%d������: \n", count);
	for (int i = 0; i < count; i++) {
		p[i] = integers + i; //��������ÿ��intԪ�ؿռ���׵�ַ��ֵ��ָ�������еĸ���Ԫ��
		scanf("%d", p[i]);//p[i]�ͱ���ʱ��i�����ݵĵ�ַ��������ﲻ��ȡ��ַ
	}
	sort(p, count);
	for (int i = 0; i < count; i++) {
		printf("%d ", integers[i]);
	}
	printf("\n");
	free(integers);//�ͷ������ռ� 
	free(p);//�ͷ�ָ��ָ���ָ��Ŀռ� 
	return 0;
}*/

//���ַ������򣬣�ð�����򷨣�
/*
#include <stdio.h>
#include <string.h>
int main()
{
	void sort(char* zifuchuan[],int n);//��������
	void print(char* zifuchuan[],int n);
	char* zifuchuan[]={"a",
				  "d",
				  "c",
				  "h",
		          "g" };
	int n=5;
	sort(zifuchuan,n);    //��������
	print(zifuchuan,n);
 
}

void sort(char* zifuchuan[],int n)//��ð�������õ��ַ��Ƚ� 
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
 
void print(char* zifuchuan[],int n)//�����
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
	int num;//���� 
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
		*(p+i)=1;//��Ȧ����Ϊ1 
	} 
	for(i=0; ;i++)
	{
		if(i==person)//��i�������������ͻص�1 
		{
			i=0;
		}
		
		if(*(p+i)!=0)//����ǰ����Ȧ��Ļ���flag+1
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
			printf("ʣ�µ���Ϊ��%d",i);
		}
	}
	
 } */

//C����ʵ�鱨��12��1��
/*
#include <stdio.h>
struct Student//�����ṹ����� 
{
	int num;
	char name[50];
	int score[3];
	float ping;
};
int main()
{
	void input (struct Student stu[]);//�������뺯�� 
	float average (struct Student stu[]);//������ƽ���ֺ��� 
	struct Student max(struct Student stu[]);//������߷�ѧ������ 
	
	struct Student stu[5];//����ѧ���Ľṹ������ 
	struct Student smax;//��߷�ѧ�� 
	struct Student *p = stu;//�ṹ��ָ�� 
	float a;
	
	input(p);
	
	a = average(p);
	printf("ƽ����Ϊ%.1f\n",a);
	
	smax = max(p);
	printf("�ɼ���ߵ�ѧ����Ϣ��\n");
	printf("ѧ��%d\n����%s\n���ſγɼ��ֱ�Ϊ%d %d %d",smax.num,smax.name,smax.score[0],smax.score[1],smax.score[2]); 
	
	return 0;
} 
void input (struct Student stu[])
{
	int i;//ѭ������
	printf("������ѧ����Ϣ��\n");
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


//C����ʵ�鱨��12��2��
/*
#include <stdio.h>
#include <stdlib.h>
 
struct Person{                                   //����ṹ��
    int num;
    struct Person *next , *head , *point;
};
int main()
{
    struct Person per[13];                              //����ṹ���������
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
        if (i==3)//��������������ʱ 
		{
            p1=p->next;//��pָ�����һ����p1����� 
            printf("%d�ų�ȥ��\n", p1->num);
            p->next=p->next->next;//nextָ��ֱ��������һ��������ָ�����¸�����
            i=1;//���¿�ʼ 
 
        }
    }
    printf("\n���һ�����ǣ� %d��\n", p->num);       //������
    return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>

//�����ṹ��struct Student
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Student* prev;
	struct Student* next;
};

struct Student* input(int);//�������뺯��
void append(struct Student**, struct Student*);//������������
void del_list(struct Student**, int);//����ɾ��һ�������ж���ڵ㺯��(��age)
struct Student* del_item(struct Student**, struct Student*);//����ɾ�������ڵ㺯��
void print(struct Student*);//����������� 

int main()
{
	struct Student* a;                              //����ָ��a
	a = input(3);                                   //�������뺯��������a����
	int age;
	printf("��������Ҫɾ��������: ");
	scanf("%d", &age);
	del_list(&a, age);                                     //��a��ɾ��b
	print(a);
	return 0;
}

struct Student* input(int n)
{
	struct Student* head = NULL, * stu;
	int i = 0;
	for (i = 1; i <= n; i++)//ʹ�ö�̬�ڴ���� 
	{
		stu = (struct Student*)malloc(sizeof(struct Student));
		printf("�������%d��ѧ������Ϣ: ", i);
		scanf("%d %s %c %d", &stu->num, stu->name, &stu->sex, &stu->age);
		append(&head, stu);
	}
	printf("\n");
	return head;
}

//����������� 
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

//ɾ��һ�������ж���ڵ㺯��(��age)
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

//ɾ�������ڵ㺯��
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

//�������
void print(struct Student* stu)
{
	if (stu == NULL)
		printf("��.\n");
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























