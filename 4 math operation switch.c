#include<stdio.h>
main()
{
    int ch;
    float side,ar;
    float r;
    int l,j,p;
    float a,b,c,s,area;
    printf("1: area of square\n");
    printf("2: area of circle\n");
    printf("3: perimeter of rectangle\n");
    printf("4: area of triangle\n");
    printf("choice your operation:\n");
    scanf("%d",&ch);
    switch(ch){
case 1:
//area of square
printf("enter side of square:");
scanf("%f",&side);
ar=side*side;
printf("The area of square is %f\n",ar);
break;

case 2:
// area of circle
printf("enter the radius:");
scanf("%f",&r);
printf("area of circle is:%f\n",3.14*r*r);
break;

case 3:
//calculate perimeter of rectangle
printf("enter the length:");
scanf("%d",&l);
printf("enter the breadth:");
scanf("%d",&j);
p=2*(l+j);
printf("perimeter of rectangle is: %d",p);
break;

case 4:
//area of triangle
printf("enter the three numbers\n");
scanf("%f%f%f",&a,&b,&c);
s=a+b+c/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle is: %f",area);
break;
default:
    printf("select valid number to perform operation 1 to 4");
}
}
