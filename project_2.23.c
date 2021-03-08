//ͷ�ļ��İ���
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�궨��N
#define N 26
//���ж������������
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

//ѧ����Ϣ�ṹ��������ṹ���������ʹ��
struct l
{
	int No; //ѧ��
	char name[20]; //����
	int right; //��Դ���
	int wrong; //������
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


//�˵���ƣ����㷴��ʹ��
//����˵�
void showmenu() 
{
	printf("\n\n");
	printf("                     �������ʹ���ϵͳ                   \n");
	printf("--------------------------------------------------------\n");
	printf(" 1.�������  2.����ش����  3.�ش��������  4.�˳�ϵͳ \n");
	printf("--------------------------------------------------------\n");
	printf("��ѡ��1-4����");
}

//���ش�����������˵�
void fankuimenu() 
{
	printf("\n\n");
	printf("                      �Ƿ������                        \n");
	printf("--------------------------------------------------------\n");
	printf("                1.����      2.���ز˵�                  \n");
	printf("--------------------------------------------------------\n");
	printf("\n");
	printf("��ѡ��1-2����");
}

//�ӷ�
void add(int n)
{
	int x;
	list[n-1].right++;
	printf("��Ϊ��ͬѧ��һ��");
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
		else printf("�������ֵ��������������\n");
	}
}

//����
void subtract(int n)
{
	int x;
	list[n-1].wrong++;
	printf("��Ϊ��ͬѧ��һ��");
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
		else printf("�������ֵ��������������\n");
	}
}

//�����ش����������
void answer_sort() 
{
	int i;
	printf("\n\n");
	printf("                        ѡ��                            \n");
	printf("--------------------------------------------------------\n");
	printf("         1.���ݻش���ȷ����������������             \n");
	printf("         2.���ݻش���ȷ����������������             \n");
	printf("         3.���ݻش𡾴�����������������             \n");
	printf("         4.���ݻش𡾴�����������������             \n");
	printf("--------------------------------------------------------\n");
	printf("��ѡ��1-4����");
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
		else printf("���������ֵ��������������\n");
			 break;
		printf("\n\n");
		printf("                        ѡ��                            \n");
		printf("--------------------------------------------------------\n");
		printf("         1.���ݻش���ȷ����������������             \n");
		printf("         2.���ݻش���ȷ����������������             \n");
		printf("         3.���ݻش𡾴�����������������             \n");
		printf("         4.���ݻش𡾴�����������������             \n");
		printf("--------------------------------------------------------\n");
		printf("��ѡ��1-4����");
	}
}


//�������һ��ѧ��������,����ʾ��������ѧ�š������С���֡�
void question() 
{
	int i,n,j;
	srand(time(NULL));
	for(i=0;i<N;i++)
		n=rand()%N+1;
	printf("\n");
	printf("�롾��%d�š�ѧ����%s���ش�����",n,list[n-1].name);
	printf("\n\n");
	printf("                     ��Ϊ��ѧ����֣�                   \n");
	printf("--------------------------------------------------------\n");
	printf("                 1.��ȷ         2.����                  \n");
	printf("--------------------------------------------------------\n");
	printf("��ѡ��1-2����");
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
		else  printf("���������ֵ��������������\n");
		printf("\n\n");
		printf("                     ��Ϊ��ѧ����֣�                   \n");
		printf("--------------------------------------------------------\n");
		printf("                 1.��ȷ         2.����                  \n");
		printf("--------------------------------------------------------\n");
		printf("��ѡ��1-2����");
	}
}


//����ѧ�š�����
void No_sort() 
{
	int i;
	printf("�������(ѧ�š���������ȷ����������)��\n");
	for(i=0;i<N;i++)
	{
		printf("%5d%5s%5d%5d\n",list[i].No,list[i].name,list[i].right,list[i].wrong);
	}
}

//�����桿Ϊ�ļ�
void save() 
{
	FILE * fp;
	int i;
	if((fp=fopen("student.txt","wb"))==NULL)//������ļ�
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

//��ȷ����
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
	printf("�������(ѧ�š���������ȷ����������)��\n");
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
		else printf("�������ֵ��������������\n");
	}
}

//��ȷ����
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
	printf("�������(ѧ�š���������ȷ����������)��\n");
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
		else printf("�������ֵ��������������\n");
	}
}

//��������
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
	printf("�������(ѧ�š���������ȷ����������)��\n");
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
		else printf("�������ֵ��������������\n");
	}
}

//������
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
	printf("�������(ѧ�š���������ȷ����������)��\n");
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
		else printf("�������ֵ��������������\n");
	}
}

//���������в�������ɿ��ù���ϵͳ

int main()
{
	int i;
	showmenu();
	while(1)
	{
		scanf("%d",&i);
		if(i==1||i==2||i==3) //���û�δ����4ʱһֱ�ظ�ִ��switch
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
			printf("�ѽ���Ϣ�������ļ� student ��\n");
			break;
		}
		if(i!=1&&i!=2&&i!=3&&i!=4)
		{
			printf("�������ֵ��������������\n");
		}
		showmenu();
	}
}