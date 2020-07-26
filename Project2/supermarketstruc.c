#include<stdio.h>
main()
{
	struct supermarket
	{
		int icode,qty;
		char iname[20];
		float price,amount;
	}s[100];
	int i=0,count=0,sno;
	float tamount=0;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		printf("\n Enter item code:");
		scanf("%d",&s[i].icode);
		printf("\n Enter item Name:");
		scanf("%s",&s[i].iname);
		printf("\n Enter Quantity :");
		scanf("%d",&s[i].qty);
		printf("\n Enter item price:");
		scanf("%f",&s[i].price);
		s[i].amount=s[i].qty*s[i].price;
		tamount=tamount+s[i].amount;
		i++;
		count++;
		printf("\n Do you wish to continue(y/n):");
		ch=getche();
	}
	printf("\n-----Vijetha Super Market------");
	printf("\n Sno\t Icode\t Name \t Price \t Qty \t Amount");
	printf("\n===================================================\n");
	for(i=0,sno=1;i<count;i++,sno++)
	{
		printf("\n%d \t%d \t%s \t%f \t%d \t%f",sno,s[i].icode,s[i].iname,s[i].price,s[i].qty,s[i].amount);
	}
	printf("\n No. of Items:%d",count);
	printf("\n Total Bill Amount:%f",tamount);
	}
