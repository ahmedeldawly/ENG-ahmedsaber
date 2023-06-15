#include<stdio.h>
int main()
{
	int x, choose,salary;

    printf("                                    ====================================================\n");
	printf("                                                Welcome to McDonald's\n");
	printf("                                              CHOOSE section you want\n");
    printf("                                    ====================================================\n");
	printf("1: McCafe\n");
	printf("2: restaurant\nSlect: ");
	scanf_s("%d", &x);
	if (x == 1)
	{
		printf("your choose Department McCafe\n");
		printf("1-hot beverages\n");
		printf("2-Cold beverages\n");
		scanf_s("%d",&x);
		if(x==1)
		{
			printf("YOUR CHOOSED hot beverages\n");
			printf("1-Hot coffee\n");
			printf("2-Black coffee\n");
			printf("3-coffee with milk\n");
			printf("4-cappuccino\n");
			printf("5-latte\n");
			printf("6-mocha\n");
			printf("7-Hot tea\n");
			printf("8-hot chocolate\n");
			printf("9-whipped cappuccino\n");
			printf("10-whipped latte\n");
		}
		else if(x==2)
		{
			printf("YOUR CHOOSED cold beverages\n");
			printf("1-natural juices\n");
			printf("2-soft drink\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("natural juices\n\n\n");
                printf("1-Orange juice\n");
				printf("2-Apple juice\n");
				printf("3-Pineapple juice\n");
				printf("4-Mango juice\n");
				printf("5-Apricot juice\n");
				if(choose==1)
				{
					printf("yor choosed Orange juice\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: \n");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==2)
				{
					printf("yor choosed Apple juice\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==3)
				{
					printf("yor choosed Pineapple juice\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==4)
				{
					printf("yor choosed Mango juice\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==5)
				{
					printf("yor choosed Apricot juice\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
			}
			else if(choose==2)
			{
				printf("soft drink\n\n\n");
                printf("1-Coca Cola\n");
				printf("2-Fanta\n");
				printf("3-Sprite\n");
				printf("4-Pepsi\n");
				printf("5-Mirinda\n");
				printf("6-7up\n");
				scanf_s("%d",&choose);
				if(choose==1)
				{
					printf("yor choosed coca cola\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==2)
				{
					printf("yor choosed Fanta\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==3)
				{
					printf("yor choosed Sprite\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==4)
				{
					printf("yor choosed Pepsi\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==5)
				{
					printf("yor choosed Mirinda\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
				else if(choose==6)
				{
					printf("yor choosed 7up\n");
					printf("Can you specify your favorite drink size for me?\n");
					printf("1-larg\t");
					printf("2-medium\t");
					printf("3-small\nselect: ");
					scanf_s("%d",&choose);
					if (choose==1)
					{
						printf("yor choosed larg size");
					}
					else if (choose==2)
					{
						printf("yor choosed medium size");
					}
					else if (choose==3)
					{
						printf("yor choosed small size");
					}
				}
			}
		}
	}
	else if(x==2)
	{
		printf("your choose Department restaurant\n");
		printf("1-Bundle Meals & Promotions\n");
		printf("2-Beef\n");
		printf("3-Chicken & Fish\n");
		printf("4-Sides\n");
		printf("5-Happy Meal\n");
		printf("6-Desserts\n");
		printf("7-Breakfast Menu\nchoose: \n");
		scanf_s("%d",&choose);
		if(choose==1)
		{
			printf("yor choosed Bundle Meals & Promotions\n");
			printf("1-Grand share Box®\n");
			printf("2-share Box®\n");
			printf("3-Mix 2 Meal®\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
		else if(choose==2)
		{
			printf("yor choosed Beef®\n");
			printf("1-Double McRoyale®\n");
			printf("2-McRoyale®\n");
			printf("3-Double Big Tasty®\n");
			printf("4-Big tasty mushroom®\n");
			printf("5-Big Tasty®\n");
			printf("6-Big Mac®\n");
			printf("7-Beefburger®\n");
			printf("8-McDouble®\n");
			printf("9-Cheeseburger Deluxe®\n");
			printf("10-Double Cheeseburger®\n");
			printf("11-Cheeseburger®\n");
			printf("12-Little Tasty®\n");
			printf("13-Double Beefburger®\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==4)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==5)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==6)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==7)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==8)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==9)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==10)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==11)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==12)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==13)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
		else if(choose==3)
		{
			printf("yor choosed Chicken & Fish\n");
			printf("1-Grand Chicken Spicy®\n");
			printf("2-Grand Chicken Premier®\n");
			printf("3-Chicken Mac®\n");
			printf("4-Big Tasty® Chicken\n");
			printf("5-Double McChicken®\n");
			printf("6-McChicken®\n");
			printf("7-Chicken MACDO®\n");
			printf("8-McNuggets® 9 Pieces\n");
			printf("9-McNuggets® 6 Pieces\n");
			printf("10-McNuggets® 4 Pieces\n");
			printf("11-Spicy Chicken Fillet®\n");
			printf("12-Chicken Fillet®\n");
			printf("13-Spicy Chicken MACDO®\n");
			printf("14-Chicken MACDO® Deluxe\n");
			printf("15-Spicy Chicken MACDO® Deluxe\n");
			printf("16-Filet-O-Fish®\n");
			printf("17-Double Filet-O-Fish®\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==4)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==5)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==6)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==7)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==8)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==9)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==10)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==11)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==12)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==13)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==14)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==15)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==16)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==17)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
		else if(choose==4)
		{
			printf("yor choosed Sides\n");
			printf("1-Garden Salad®\n");
			printf("2-Chicken Caesar Salad®\n");
			printf("3-McNuggets® 9 Pieces\n");
			printf("4-McNuggets® 6 Pieces\n");
			printf("5-McNuggets® 4 Pieces\n");
			printf("6-Cheddar Cheese Fries®\n");
			printf("7-McFries®\n");
			printf("8-carrot slices®\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==4)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==5)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==6)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==7)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==8)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
		else if(choose==5)
		{
			printf("yor choosed Happy Meal\n");
			printf("1-Happy Meal® Double Beefburger\n");
			printf("2-Happy Meal® Beefburger\n");
			printf("3-Happy Meal® Double Cheeseburger\n");
			printf("4-Happy Meal® McNuggets® 4 Pieces\n");
			printf("5-Happy Meal® Chicken MACDO®\n");
			printf("6-Happy Meal® Cheeseburger\n");
			printf("7-Happy Meal® McNuggets® 6 Pieces\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==4)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==5)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==6)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==7)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
		else if(choose==6)
		{
			printf("yor choosed Desserts\n");
			printf("1-Strawberry Custard Pie®\n");
			printf("2-Strawberry Sundae®\n");
			printf("3-Oreo McFlurry®\n");
			printf("4-Apple Pie®\n");
			printf("5-Caramel Sundae®\n");
			printf("6-Chocolate Fudge Sundae®\n");
			printf("7-Ice Cream Cone®\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==4)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==5)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==6)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==7)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
		else if(choose==7)
		{
			printf("yor choosed Breakfast Menu\n");
			printf("1-Chicken McMuffin® with Egg\n");
			printf("2-Spicy Chicken McMuffin® with Egg\n");
			printf("3-Spicy Chicken McMuffin®\n");
			printf("4-Chicken McMuffin®\n");
			printf("5-McFalafel®\n");
			printf("6-Egg McMuffin® \n");
			printf("7-Sausage McMuffin®\n");
			printf("8-Egg & Cheese Wrap®\n");
			printf("9-Sausage & Egg Wrap®\n");
			printf("10-Sausage Egg McMuffin®\n");
			printf("11-Hash Browns®\n");
			printf("12-Hotcakes 2 Pieces®\n");
			printf("13-Hotcakes 3 Pieces®\n");
			printf("14-Big Breakfast®\n");
			scanf_s("%d",&choose);
			if(choose==1)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==2)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==3)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==4)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==5)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==6)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==7)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==8)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==9)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==10)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==11)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==12)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==13)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
			else if(choose==14)
			{
				printf("1-spcial\t");
				printf("2-spicy\n");
				printf("select: ");
				scanf_s("%d",&choose);
				printf("done");
			}
		}
	}
	
}