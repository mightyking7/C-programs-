#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PI 3.14


/*
*@Struct Circle: Structure that groups information on a Circle
*@member double x: The x coordinate of the center
*@member double y: The y coordinate of the center
*@member double radius: The radius of the cricle
*/

struct Circle{

    double x;
    double y;
    double radius;
};


/*
*@Purpose: Returns a random number between a and b 
*@param double a: The lower bound of the random number generator
*@param double b: Th upper bound of the random number generator
*@return : Returns a double random number between a and b
*/

double rand_float(double a, double b)
{
    return ( (double) rand()/ RAND_MAX) * (b-a) + a;
}


int main()
{
    
int i;
double largestarea, area;
int position;
struct Circle *circles[50];

//Seed the random time generator
srand(time(NULL));

//generate random circles
for(i=0;i<50;i++)
{
    circles[i] = (struct Circle *) malloc(sizeof(struct Circle));
    circles[i]-> radius = rand_float(0,100);
    circles[i]-> x = rand_float(100, 900);
    circles[i]-> y = rand_float(100, 900);
}

//compute the largest area

largestarea = PI * circles[0]-> radius * circles[0]-> radius;

for(i=1;i<50;i++)
{
    area = PI * circles[i]-> radius * circles[i]-> radius;

    if(largestarea < area)
    {
        largestarea =  area;
        position = i;
    }
}



printf("Circle with the largest area (%lf) has \n center (%lf, %lf) and radius %lf",
largestarea, circles[position]-> x, circles[position]-> y, circles[position]-> radius);
    

//free all space allocated for the pointers

for(i=0;i<50;i++)
{
    free(circles[i]);
}
    
return 0;
}