//头文件的包含
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//宏定义N
#define N 26
//进行多个函数的声明
void answer_sort(void);
void showmenu(void);
void fankuimenu(void);
void question(void);
void No_sort(void);
void save(void);
void right_ascending_order(void);
void right_descending_order(void);
void wrong_ascending_order(void);
void wrong_descending_order(void);
void add(void);
void subtract(void);

//学生信息结构体变量，结构体变量方便使用
struct l
{
	int No; //学号
	char name[20]; //姓名
	int right; //答对次数
	int wrong; //答错次数
}list[]={
	{1,"a",0,1},
	{2,"b",1,1},
	{3,"c",0,0},
	{4,"d",1,5},
	{5,"e",3,0},
	{6,"f",2,6},
	{7,"g",4,2},
	{8,"h",2,4},
	{9,"i",0,6},
	{10,"j",5,6},
	{11,"k",1,1},
	{12,"l",6,9},
	{13,"m",4,2},
	{14,"n",0,0},
	{15,"o",3,7},
	{16,"p",9,0},
	{17,"q",1,2},
	{18,"r",3,2},
	{19,"s",0,3},
	{20,"t",5,5},
	{21,"u",9,3},
	{22,"v",5,6},
	{23,"w",10,2},
	{24,"x",8,10},
	{25,"y",12,1},
	{26,"z",5,3}

};


//菜单设计，方便反复使用
//界面菜单
void showmenu() 
{
	printf("\n\n");
	printf("                     课堂提问管理系统                   \n");
	printf("--------------------------------------------------------\n");
	printf(" 1.随机提问  2.浏览回答情况  3.回答情况排序  4.退出系统 \n");
	printf("--------------------------------------------------------\n");
	printf("请选择（1-4）：");
}

//按回答情况排序反馈菜单
void fankuimenu() 
{
	printf("\n\n");
	printf("                      是否继续？                        \n");
	printf("--------------------------------------------------------\n");
	printf("                1.继续      2.返回菜单                  \n");
	printf("--------------------------------------------------------\n");
	printf("\n");
	printf("请选择（1-2）：");
}

//加分
void add(int n)
{
	int x;
	list[n-1].right++;
	printf("已为该同学加一分");
	while(1)
	{
		fankuimenu();
		scanf("%d",&x);
		if(x==1||x==2)
		{
			switch(x)
			{
				case 1:question();
					break;
				case 2:main();
					break;
			}
		}
		else printf("输入的数值有误，请重新输入\n");
	}
}

//减分
void subtract(int n)
{
	int x;
	list[n-1].wrong++;
	printf("已为该同学减一分");
	while(1)
	{
		fankuimenu();
		scanf("%d",&x);
		if(x==1||x==2)
		{
			switch(x)
			{
				case 1:question();
					break;
				case 2:main();
					break;
			}
		}
		else printf("输入的数值有误，请重新输入\n");
	}
}

//按【回答情况】排序
void answer_sort() 
{
	int i;
	printf("\n\n");
	printf("                        选项                            \n");
	printf("--------------------------------------------------------\n");
	printf("         1.依据回答【正确】数量【升序】排序             \n");
	printf("         2.依据回答【正确】数量【降序】排序             \n");
	printf("         3.依据回答【错误】数量【升序】排序             \n");
	printf("         4.依据回答【错误】数量【降序】排序             \n");
	printf("--------------------------------------------------------\n");
	printf("请选择（1-4）：");
	while(1)
	{
		scanf("%d",&i);
		if(i==1||i==2||i==3||i==4)
		{
			switch(i)
			{
				case 1:right_ascending_order();
					break;
				case 2:right_descending_order();
					break;
				case 3:wrong_ascending_order();
					break;
				case 4:wrong_descending_order();
					break;
			}
		}
		else printf("您输入的数值有误，请重新输入\n");
			 break;
		printf("\n\n");
		printf("                        选项                            \n");
		printf("--------------------------------------------------------\n");
		printf("         1.依据回答【正确】数量【升序】排序             \n");
		printf("         2.依据回答【正确】数量【降序】排序             \n");
		printf("         3.依据回答【错误】数量【升序】排序             \n");
		printf("         4.依据回答【错误】数量【降序】排序             \n");
		printf("--------------------------------------------------------\n");
		printf("请选择（1-4）：");
	}
}


//【随机抽一名学生】提问,【显示其姓名、学号】并进行【打分】
void question() 
{
	int i,n,j;
	srand(time(NULL));
	for(i=0;i<N;i++)
		n=rand()%N+1;
	printf("\n");
	printf("请【第%d号】学生【%s】回答问题",n,list[n-1].name);
	printf("\n\n");
	printf("                     请为该学生打分：                   \n");
	printf("--------------------------------------------------------\n");
	printf("                 1.正确         2.错误                  \n");
	printf("--------------------------------------------------------\n");
	printf("请选择（1-2）：");
	while(1)
	{
		scanf("%d",&j);
		if(j==1||j==2)
		{
			switch(j)
			{
				case 1:add(n);
					break;
				case 2:subtract(n);
					break;
			}
		}
		else  printf("您输入的数值有误，请重新输入\n");
		printf("\n\n");
		printf("                     请为该学生打分：                   \n");
		printf("--------------------------------------------------------\n");
		printf("                 1.正确         2.错误                  \n");
		printf("--------------------------------------------------------\n");
		printf("请选择（1-2）：");
	}
}


//按【学号】排序
void No_sort() 
{
	int i;
	printf("结果如下(学号、姓名、正确数、错误数)：\n");
	for(i=0;i<N;i++)
	{
		printf("%5d%5s%5d%5d\n",list[i].No,list[i].name,list[i].right,list[i].wrong);
	}
}

//【保存】为文件
void save() 
{
	FILE * fp;
	int i;
	if((fp=fopen("student.txt","wb"))==NULL)//打开输出文件
	{
		printf("cannot open file!");
		exit(0);
	}
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%d %c %d %d\n",list[i]);
	}
	fclose(fp);
}

//正确升序
void right_ascending_order() 
{
	int i,j,x;
	struct l temp;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(list[i].right>list[j].right)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	printf("结果如下(学号、姓名、正确数、错误数)：\n");
	for(i=0;i<N;i++)
	{
		printf("%5d%5s%5d%5d",list[i].No,list[i].name,list[i].right,list[i].wrong);
		printf("\n");
	}
	while(1)
	{
		fankuimenu();
		scanf("%d",&x);
		if(x==1||x==2)
		{
			switch(x)
			{
				case 1:answer_sort();
					break;
				case 2:main();
					break;
			}
		}
		else printf("输入的数值有误，请重新输入\n");
	}
}

//正确降序
void right_descending_order() 
{
	int i,j,x;
	struct l temp;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(list[i].right<list[j].right)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	printf("结果如下(学号、姓名、正确数、错误数)：\n");
	for(i=0;i<N;i++)
	{
		printf("%5d%5s%5d%5d",list[i].No,list[i].name,list[i].right,list[i].wrong);
		printf("\n");
	}
		while(1)
	{
		fankuimenu();
		scanf("%d",&x);
		if(x==1||x==2)
		{
			switch(x)
			{
				case 1:answer_sort();
					break;
				case 2:main();
					break;
			}
		}
		else printf("输入的数值有误，请重新输入\n");
	}
}

//错误升序
void wrong_ascending_order()
{
	int i,j,x;
	struct l temp;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(list[i].wrong>list[j].wrong)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	printf("结果如下(学号、姓名、正确数、错误数)：\n");
	for(i=0;i<N;i++)
	{
		printf("%5d%5s%5d%5d",list[i].No,list[i].name,list[i].right,list[i].wrong);
		printf("\n");
	}
	while(1)
	{
		fankuimenu();
		scanf("%d",&x);
		if(x==1||x==2)
		{
			switch(x)
			{
				case 1:answer_sort();
					break;
				case 2:main();
					break;
			}
		}
		else printf("输入的数值有误，请重新输入\n");
	}
}

//错误降序
void wrong_descending_order() 
{
	int i,j,x;
	struct l temp;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(list[i].wrong<list[j].wrong)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	printf("结果如下(学号、姓名、正确数、错误数)：\n");
	for(i=0;i<N;i++)
	{
		printf("%5d%5s%5d%5d",list[i].No,list[i].name,list[i].right,list[i].wrong);
		printf("\n");
	}
	while(1)
	{
		fankuimenu();
		scanf("%d",&x);
		if(x==1||x==2)
		{
			switch(x)
			{
				case 1:answer_sort();
					break;
				case 2:main();
					break;
			}
		}
		else printf("输入的数值有误，请重新输入\n");
	}
}

//主函数进行操作，完成课堂管理系统

int main()
{
	int i;
	showmenu();
	while(1)
	{
		scanf("%d",&i);
		if(i==1||i==2||i==3) //当用户未输入4时一直重复执行switch
		{
			switch(i)
			{
				case 1:question();
					break;
				case 2:No_sort();
					break;
				case 3:answer_sort();
					break;
			}
		}
		if(i==4)
		{
			save();
			printf("已将信息保存至文件 student 中\n");
			break;
		}
		if(i!=1&&i!=2&&i!=3&&i!=4)
		{
			printf("输入的数值有误，请重新输入\n");
		}
		showmenu();
	}
}