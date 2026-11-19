
#include<stdio.h>
#include<math.h>
#define pie 3.142
int main()
{
	//local variable declaration//
	float length,width,heigth,radius,base,perimeter,area,curved_surface_area,total_surface_area,volume;
	float a,b,c,d,h,l,w,r;
	int choice;
	
	printf("***WELCOME TO OUR PROGRAM THAT DOES THE PERIMETER,TOTAL SURFACE AREA,CURVED SURFACE AREA AND VOLUME OF ALL SHAPES\n");
	printf("*****************************************************************************************************************\n");
	printf("Kindly choose a shape you would wish to work one\n");
	    //choices making//
    
    printf("Please enter 1 for rectangle \n");
    printf("Please enter 2 for paralleiogram \n");
    printf("please enter 3 for trapezium\n");
	printf("Please enter 4 for circle\n");
    printf("Please enter 5 for triangle\n");
    printf("Please enter 6 for cuboid\n");
    printf("Please enter 7 for cylinder\n");
    printf("Please enter 8 for cube\n");
    
    //call for choices to be made//
    printf("Please enter  your choice\n");
    scanf("%d",&choice);
    if(choice==1){
    	printf("enter length\n");
    	scanf("%f",&length);
    	printf("enter width\n");
    	scanf("%f",&width);
    	area =length * width;
    	printf("the area is %f\n",area);
       	perimeter=(length + width)+(length + width);
    	printf("The perimeter is%f\n",perimeter);
    	return 0;
	}
	else if(choice==2){
		printf("enter the value for a\n");
		scanf("%f",&a);
		printf("Enter the value of b\n");
		scanf("%f",&b);
		printf("Enter value of heigth\n");
		scanf("%f",&heigth);
		printf("Enter value of base\n");
		scanf("%f",&base);
		perimeter=(a+b)+(a+b);
		printf("The perimeter is %f\n",perimeter);
		area=base*heigth;
		printf("The area is%f\n",area);
		return 0;
	
	}
	else if(choice==3){
	printf("Enter the value of a\n");
	scanf("%f",&a);
	printf("Enter the value of b\n");
	scanf("%f",&b);
	printf("Enter the value of c\n");
	scanf("%f",&c);
	printf("Enter the value of d\n");
	scanf("%f",&d);
	printf("Enter the value of h\n");
	scanf("%f",&h);
	 perimeter =a+b+c+d;
	 printf("The perimeter is %f\n",perimeter);
	 area= ( ((a+b)/2) * h );
	 printf("The area is%f\n",area);
	return 0;
	
	}
	else if(choice==4){
	
	printf("Enter radius\n");
	scanf("%f",&radius);
	perimeter=2*(pie) * radius;
	printf("The perimeter is%f\n",perimeter);
	area =(3.142*radius*radius);
	printf("The area is%f\n",area);
	
	return 0;
    }
	else if(choice==5){
	printf("Enter the value of a");
    	scanf("%f",&a);
    	printf("Enter the value of b");
    	scanf("%f",&b);
    	printf("Enter the value of c");
    	scanf("%f",&c);
    	printf("Enter the value of h");
    	scanf("%f",&a);
    	perimeter=a+b+c;
    	printf("The perimeter is%f\n",perimeter);
    	total_surface_area=((0.5)*a*b);
    	printf("The area is%f\n",area);
    	return 0;
	}
	else if(choice==6){
    	printf("Enter the value of b\n");
    	scanf("%f",&b);
    	printf("Enter the value of l\n");
    	scanf("%f",&l);
    	printf("Enter the value of h\n");
    	scanf("%f",&h);
    	perimeter=(4*(l+b+h));
    	printf("The perimeter is %f\n",perimeter);
    	total_surface_area=(2*(l*b+l*h+b*h));
    	printf("The total surface area is%f\n",total_surface_area);
    	curved_surface_area=((2*h)*(l+b));
    	printf("The curved surface area is%f\n",curved_surface_area);
    	volume=(l*b*h);
    	printf("The volume is%f\n",volume);
    	return 0;
    }
    else if(choice==7){
    	printf("Enter the value of r\n");
    	scanf("%f",&r);
    	printf("Enter the value of h\n");
    	scanf("%f",&h);
    	total_surface_area=(2*pie*r)*(r+h);
    	printf("The total surface area is%f\n",total_surface_area);
    	curved_surface_area=2*pie*r*h;
    	printf("The curved surface area is%f\n",curved_surface_area);
    	volume=pie*r*r*h;
    	printf("The volume is%f\n",volume);
    	return 0;
	}
	else if(choice==8){
		printf("please enter the value of one side\n");
		scanf("%f",&a);
		perimeter=(6*a);
		printf("The perimeter is%f\n",perimeter);
		total_surface_area=(6*a*a);
		printf("The total surface area is%f\n",total_surface_area);
		curved_surface_area=(4*a*a);
		printf("The curved surface area is%f\n",curved_surface_area);
		volume=(a*a*a);
		
	}else{
		 printf("Invalid choice		kindly choose from the provided choices\n");
		printf("*************************************************************\n");
	}
	printf("THANK YOU FOR USING OUR PROGRAM WELCOME BACK");
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
