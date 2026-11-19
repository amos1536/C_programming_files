#include<stdio.h>

int main(int argc, char** argv)
{
	int i;
	float item_costs[4],discount,total_cost=0,new_cost;
	printf("please enter the cost of each item\n");
	for(i=0;i<4;i++)
	{
		printf("item %d:",i+1);
		scanf("%f",&item_costs[i]);

	total_cost+=item_costs[i];
   }
	printf("the total cost before the discount is ksh%f\n",total_cost);

	if(total_cost>=500)
	{
		discount=40;
	new_cost=total_cost-discount;
	printf("the discount applied is ksh%f\n",discount);
		printf("the new cost after the discount is ksh%f",new_cost);
	}
	else if(total_cost<500)
	{
	discount=10;
	new_cost=total_cost-discount;
	printf("the discount applied is ksh %f\n",discount);
	printf("the total cost after the discount is ksh%f",new_cost);	
	}
	return 0;
}
 