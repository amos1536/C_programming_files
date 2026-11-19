#include<stdio.h>
#include<math.h>
int main()
{
	//local variable declaration//
	float length;
	float width;
	float heigth;
	float pie =3.142;
	float radius;
	float base;
	char a,b,c,d,h,l,w,r;
	int choice;
	float perimeter;
	float area;
	float curvedsurfacearea;
	float totalsurfacearea;
	float volume;
	printf("***WELCOME TO OUR PROGRAM THAT DOES THE PERIMETER,TOTAL SURFACE AREA,CURVED SURFACE AREA AND VOLUME OF ALL SHAPES\n");
	printf("*****************************************************************************************************************\n");
	printf("Kindly choose a shape you would wish to work one\n");
	    //choices making//
    
    printf("Please enter 1 for rectangle \n");
    printf("Please enter 2 for paralleiogram \n");
    printf("please enter 3 for trapezium");
    printf("Please enter 4 for eclipe  \n");
	printf("Please enter 5 for circle\n");
    printf("Please enter 6 for triangle\n");
    printf("Please enter 7 for cuboid\n");
    printf("Please enter 8 for cube\n");
    printf("Please enter 9 for cylinder\n");
    printf("Please enter 10 for cone\n");
    printf("Please enter 11 for sphere\n");
    printf("Please enter 12 for hemisphere\n");
    printf("Please enter 13 for cube\n");
    
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
		scanf("%c",&a);
		printf("Enter the value of b\n");
		scanf("%c",&b);
		printf("Enter value of heigth\n");
		scanf("%c",&heigth);
		printf("Enter value of base\n");
		scanf("%c",&base);
		perimeter=(2)*(a+b);
		printf("The perimeter is%f\n",perimeter);
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
	perimeter=2*(3.142) * radius;
	printf("The perimeter is%f\n",perimeter);
	area =(3.142*radius*radius);
	printf("The area is%\n",area);
	return 0;
    }
    else if(choice==5){
    	printf("Enter the value of a");
    	scanf("%f",&a);
    	printf("Enter the value of b");
    	scanf("%f",&b);
    	//perimeter=3.142*((( (a*a)+(b*b) )/2)^(0.5) );
    	//printf("The perimeter is %`f\n,perimeter");
    	area=3.142*a*b;
    	printf("The area is%f\n",&area);
	}
	else if(choice==6){
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
    	area=((0.5)*a*b);
    	printf("The area is%f\n",area);
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
