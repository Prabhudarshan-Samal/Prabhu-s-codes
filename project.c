#include<stdio.h>
#include<stdlib.h>

struct food
{
	int tot;
	int quan;
	int cho;
        int choi;
        int choic;
        int choice;
};
int i;
struct food f[99999];
int total = 0;
int ch;
void Veg(void);
void Nonveg(void);
void billings(void);
int main()
{
	int count;

	while(count!=999)
	{
	printf("\nChoose your food you want to eat\n1.Veggie\n2.Non-Veggie\n3.Exit\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			Veg();
			break;
		case 2:
			Nonveg();
			break;
		case 3: billings();
			exit(0);
		default:
			printf("\nEnter a valid option\n");
			break;
	}
	count++;
	}
	
	return 0;

}
void Veg()
{
        int quan;	
	printf("\nChoose the following category\n1.Soups\n2.Starter\n3.Main Course\nPress 0 to exit\n");
	scanf("%d", &f[i].cho);
	switch(f[i].cho)
	{
	case 1:
		printf("\n1.Veg soup:Rs.30\n2.Tomato Soup:Rs.45\n3.Sour Creme soup:Rs.50\n4.Mushroom soup:Rs.60\nChoose any of them\nChoose 0 to exit\n");
	scanf("%d", &f[i].choi);
	switch(f[i].choi)
	{
	case 1:
		printf("\nEnter quantity:\n");
		scanf("%d", &f[i].quan);
		f[i].tot = f[i].tot + (30*f[i].quan);
		
		break;
	
	case 2:
               printf("\nEnter quantity:\n");
	       scanf("%d", &f[i].quan);
	       f[i].tot = f[i].tot + (45*f[i].quan);
	    
	       break;
	
	case 3:
		printf("\nEnter quantity:\n");
               scanf("%d", &f[i].quan);  
               f[i].tot = f[i].tot + (50*f[i].quan);
	       
	       break;
	
	
	case 4:
		printf("\nEnter quantity:\n");
		scanf("%d", &f[i].quan);
		f[i].tot = f[i].tot + (60*f[i].quan);
		
		break;
		
	case 0:
		switch(ch);
		break;
	default:
		printf("\nEnter a valid option!!\n");
		break;
	}
	break;
	
	case 2:
		printf("\n1.Veg Chow chow: Rs.95\n2.Paneer pakoda: Rs.65\n3.Veg Cutlet:Rs.50\n4.Mushroom pakoda:Rs.70\nChoose any of them\nChoose 0 to exit\n");
		scanf("%d", &f[i].choic);
		switch(f[i].choic)
		{
		case 1:
		     printf("\nEnter quantity\n");
		     scanf("%d", &f[i].quan);
		     f[i].tot = f[i].tot + (95*f[i].quan);
		     break;
		case 2:
		     printf("\nEnter quantity\n");
		     scanf("%d", &f[i].quan);
		     f[i].tot = f[i].tot + (65*f[i].quan);
		     break;
		case 3:
		     printf("\nEnter quantity\n");
		     scanf("%d", &f[i].quan);
		     f[i].tot = f[i].tot + (50*f[i].quan);
		     break;
		case 4:
		      printf("\nEnter quantity\n");
		      scanf("%d", &f[i].quan);
		      f[i].tot = f[i].tot + (70*f[i].quan);
	              break;
		case 0:
			switch(ch);
			break;
		}
		break;
	case 3:
		printf("\n1.Veg Machurian:Rs.105\n2.Paneer chilli:Rs.89\n3.Paneer kadhai:Rs.99\n4.Paneer Hyderabadi:Rs.109\n5.Paneer Punjabi:Rs.119\n6.Mushroom hyderabadi:Rs.149\n7.Mushroom Punjabi:Rs.139\n8.Veg kohlapuri:Rs.129\nChoose any of them\nChoose 0 to exit\n");
		scanf("%d", &f[i].choice);
		switch(f[i].choice)
		{
		case 1:
			printf("\nEnter quantity\n");
			scanf("%d", &f[i].quan);
			f[i].tot = f[i].tot + (105*f[i].quan);
			break;

		case 2:
			printf("\nEnter quantity\n");
			scanf("%d", &f[i].quan);
			f[i].tot = f[i].tot + (89*f[i].quan);
			break;
		case 3:
			printf("\nEnter quantity\n");
                        scanf("%d", &f[i].quan);
                        f[i].tot = f[i].tot + (99*f[i].quan);
                        break;
		case 4:
			printf("\nEnter quantity\n");
                        scanf("%d", &f[i].quan);
                        f[i].tot = f[i].tot + (109*f[i].quan);
                        break;
		case 5:
			printf("\nEnter quantity\n");
                        scanf("%d", &f[i].quan);
                        f[i].tot = f[i].tot + (119*f[i].quan);
                        break;
		case 6:
			printf("\nEnter quantity\n");
                        scanf("%d", &f[i].quan);
                        f[i].tot = f[i].tot + (149*f[i].quan);
			break;
		case 7:
			printf("\nEnter quantity\n");
                        scanf("%d", &f[i].quan);
                        f[i].tot = f[i].tot + (139*f[i].quan);
		       	break;
		case 8:
			printf("\nEnter quantity\n");
                        scanf("%d", &f[i].quan);
                        f[i].tot = f[i].tot + (129*f[i].quan);
                        break;
		case 0:
			switch(ch);
			break;
		default:
			printf("\nEnter the correct option!!\n");
			break;
		}
	}
	
	
}
void Nonveg()
{
	
	printf("\nChoose from the following category\n1.Soups\n2.Starter\n3.Main Course\nPress 0 to exit\n");
	scanf("%d", &f[i].cho);

	switch(f[i].cho)
	{
		case 1:{
			printf("\n1.Chicken sour n creme soup:Rs.60\n2.Chicken masala soup:Rs.80\n				3.Mutton soup:Rs.80\nChoose any of the above\nChoose 0 to exit\n");
			scanf("%d", &f[i].choi);
			switch(f[i].choi)
			{
				case 1:
					{
					printf("\nEnter quantity\n");
                        		scanf("%d", &f[i].quan);
                        		f[i].tot = f[i].tot + (60*f[i].quan);
                        		break;
					}
				case 2:
					{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (80*f[i].quan);
                                        break;
					}
				case 3:{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (80*f[i].quan);
                                        break;
				       }				       
				case 0:{
					switch(ch);
					break;
				       }
				default:
				       {
					printf("\nPlease enter the correct code\n");
					break;
				       }
			}
			break;
		       }
		case 2:
		       { 
			printf("\n1.Chicken Pakoda:Rs.80\n2.Egg chop:Rs.60\n3.Chicken 65:Rs.100\n4.Egg 65:Rs:70\n5.Chicken chop:Rs.80\nChoose 0 to exit\nChoose among the above\n");
			scanf("%d", &f[i].choic);
		        switch(f[i].choic)
			{
				case 1:{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (80*f[i].quan);
                                        break;
				       }

				case 2:{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (60*f[i].quan);
                                        break;
				       }
				case 3:{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (100*f[i].quan);
                                        break;
				       }
				case 4:{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (70*f[i].quan);
                                        break;
				       }
				case 5:{
					printf("\nEnter quantity\n");
                                        scanf("%d", &f[i].quan);
                                        f[i].tot = f[i].tot + (80*f[i].quan);
                                        break;
				       }
				case 0:{
					switch(ch);
					break;
				       }
				default:{
					printf("\nPlease enter a valid choice\n");
					break;
					}
			}
			break;
		       }





	case 3:{
		printf("\n1.Chilli Chicken:Rs.120\n2.Chicken Curry:Rs.100\n3.Mutton RoganJosh:Rs.160\n4.Mutton Curry:Rs.150\n5.Mutton Keema:Rs.170\n6.Chicken Keema:Rs.120\n7.Choose any of them\nChoose 0 to exit\n");
		scanf("%d", &f[i].choice);
		switch(f[i].choice)
		{
			case 1:{
				printf("\nEnter quantity\n");
                                scanf("%d", &f[i].quan);
                                f[i].tot = f[i].tot + (120*f[i].quan);
                                break;
			       }


			case 2:{
				 printf("\nEnter quantity\n");
                                scanf("%d", &f[i].quan);
                                f[i].tot = f[i].tot + (100*f[i].quan);
                                break;
			       }

			case 3:{
				printf("\nEnter quantity\n");
                                scanf("%d", &f[i].quan);
                                f[i].tot = f[i].tot + (160*f[i].quan);
                                break;
			       }
			case 4:{
				printf("\nEnter quantity\n");
                                scanf("%d", &f[i].quan);
                                f[i].tot = f[i].tot + (150*f[i].quan);
                                break;
			       }
			case 5:{
				printf("\nEnter quantity\n");
                                scanf("%d", &f[i].quan);
                                f[i].tot = f[i].tot + (170*f[i].quan);
                                break;
			       }
			case 6:{
				printf("\nEnter quantity\n");
                                scanf("%d", &f[i].quan);
                                f[i].tot = f[i].tot + (120*f[i].quan);
                                break;
			       }
			case 0:{
				switch(ch);
				break;
			       }
			default:{
				printf("\nPlease enter the correct value\n");
				break;
				}
		}
	case 0:{
		switch(ch);
		break;
	       }
	default:{
		printf("\nPlease enter the correct option\n");
		break;
	       }
	}break;
	}
}
	

void billings()
{
	FILE *ptr;

	ptr = fopen("YourBill.txt", "w");
	if(ptr==NULL)
	{
	printf("\nError!\n");
	exit(1);
	}	
	
	total = f[i].tot;
        fprintf(ptr, "\nRs.\t");
	fprintf(ptr, "%d", total);
	fprintf(ptr, "\nThank you!!have a nyc day!!\n");
	fclose(ptr);
}
