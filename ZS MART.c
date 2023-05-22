#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void){
	int temp,addinvestment,addsale,addexpense,investment=0,sell=0,expense=0,profit=0,upassword=1234, password,abprofit=0,murprofit=0;
	char name1[100]="ZUBAIR",name2[100]="SHAHID";
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\tPASSWORD: ");
	scanf("%d",&password);
	if(password==upassword){
		goto go;
	}
	else{
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tINVALID USER");
		goto exit;
	}               
	//main menu
	go:
	system("CLS");
	printf("\n\t\t\tZS MART SOFTWARE");
	printf("\n____________________________________________________________________________________________________________________");
	printf("\n\nHELLO %s!",name1);
	printf("\n\nTOTAL INVESTMENT: %d",investment);
	printf("\t\t\t\tSell: %d",sell);
	printf("\nEXPENSE: %d",expense);
	printf("\t\t\t\t\tZUBAIR'S PROFIT: %d\n\t\t\t\t\t\tSHAHID'S PROFIT: %d",abprofit,murprofit);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tDEVELOPED BY:\n\t\t\t\t\t\t\t\t\t%s\n\t\t\t\t\t\t\t\t\t%s",name1,name2);
	printf("\n\nENTER ANY NUMBER: FOR INPUTS: ");
	scanf("%d",&temp);                      
	system("CLS");
	printf("\n1- UPGRADE INVESTMENT:");
	printf("\n2- SELL");
	printf("\n3- EXPENSE");
	scanf("%d",&temp);
	if(temp==1){
		reInvest:
			system("CLS");
		printf("YOUR PRESENT INVESTMENT IS %d\n",investment);
		printf("\nADD MONEY: ");
		scanf("%d",&addinvestment);
		investment+=addinvestment;
		profit=sell*0.15;
		printf("\n\nENTER 1 FOR ADD MONEY AGAIN       ENTER 0 FOR RETURN TO MAIN MENU\n");
		scanf("%d",&temp);
		if(temp==1){
			goto reInvest;
		}
		else if(temp!=1){
			goto go;234
		}
	}
	if(temp==2){
		saleadd:
		system("CLS");
		printf("PRESENT SELL: %d",sell);
		printf("\nADD SELL: ");
		scanf("%d",&addsale);
		sell+=addsale;
		investment-=sell;
		profit=sell*0.15;
		abprofit=profit/2;
		murprofit=profit/2;
		printf("\n\nENTER 1: FOR ADD AGAIN      ENTER 0: TO RETURN IN MAIN MENU \n");
		scanf("%d",&temp);
		if(temp==1){
			goto saleadd;
		}
		else if(temp!=1){
			goto go;
		}
	}
	if(temp==3){
		expenseadd:
			system("CLS");
			printf("EXPENSE: %d",expense);
			printf("\nADD EXPENSE: ");
			scanf("%d",&addexpense);
			expense+=addexpense;
			sell-=expense;
			profit=sell*0.15;
			printf("\n\nENTER 1: TO ADD EXPENSE AGAIN       ENTER 0: RETURN IN MAIN MENU \n");
			scanf("%d",&temp);
		switch(temp){
			case 1:
				goto expenseadd;
				break;
			case 0:
				goto go;
		}
	}
	
	exit:
		
	getch();
	
}