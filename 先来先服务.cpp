#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <conio.h> 
#define  N  5
struct  PCB
{
	char name[8];
	int  arrive_time;
	int  run_time;
    int finish_time;
	int  zhouzhuan_time;
	float avgzhouzhuan_time;
	float daiquanzhouzhuan_time;
	float avgdaiquanzhouzhuan_time;
};
int  total=0; 
struct  PCB  pcb[N],temp;
void  output()
{   
    printf("----------------------------------------------------------------------------------------------\n");
    printf("������   ����ʱ��  ����ʱ��  ���ʱ��  ��תʱ��  ƽ����תʱ��  ��Ȩ��תʱ��  ƽ����Ȩ��תʱ�� \n");
	printf("----------------------------------------------------------------------------------------------\n");
    for(int  i=0;i<N;i++)
	{
	  	printf(" %s        %d         %d         %d         %d        \n",pcb[i].name,pcb[i].arrive_time,pcb[i].run_time,pcb[i].finish_time,pcb[i].zhouzhuan_time,pcb[i].avgzhouzhuan_time ,pcb[i].daiquanzhouzhuan_time ,pcb[i].avgdaiquanzhouzhuan_time );
	}
    printf("----------------------------------------------------------------------------------------------\n");
}
void  main()
{   
   
	int i;
	int j;
	for ( i=0;i<N;i++)
	{
		printf("�����������\n" );
        scanf("%s",pcb[i].name);
		printf("�����뵽��ʱ��:");
		scanf("%d",&pcb[i].arrive_time);
		printf("������Ҫ����ʱ��");
		scanf("%d",&pcb[i].run_time);		
	}
	for( i=0;i<N;i++)
	{  		printf("%s    ",pcb[i].name);
        printf("%d    ",pcb[i].arrive_time);
		printf("%d \n",pcb[i].run_time);
    }

	pcb[0].finish_time=pcb[0].arrive_time+pcb[0].run_time;
	pcb[0].zhouzhuan_time=pcb[0].finish_time-pcb[0].arrive_time;

  	for(i=1;i<N;i++)
	{	 
	 
           
            pcb[i].finish_time=pcb[i-1].finish_time+pcb[i].run_time;
            pcb[i].zhouzhuan_time=pcb[i].finish_time-pcb[i].arrive_time;
	 
	}   
	output();
}

