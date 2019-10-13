#include <stdio.h>
#include<conio.h>
#include <math.h>
double getDistance (double x1,double y1, double x2, double y2)
{
    return (sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
}

void main()
{
    int i,j=0,p1=0,p2=1;
    double shortestDistance;
    const int NUMBER_OF_POINTS = 3;
    double points[3][2];
    clrscr();
    printf ("\n Enter %d points: " , NUMBER_OF_POINTS );
       for(i=0; i< NUMBER_OF_POINTS;i++)
	scanf ("%lf", &points[i][0]);
    scanf ("%lf", &points[i][1]);


   // int p1=0,p2=1;

    shortestDistance= getDistance( points[p1][0], points[p1][1], points[p2][0], points[p2][1]);
    for ( i=0;i<NUMBER_OF_POINTS;i++){
        for ( j=i+1;j<NUMBER_OF_POINTS;j++){
            double distance=getDistance(points[i][0],points[i][1],points[j][0],points[j][1]);
 
            if(shortestDistance > distance){
                p1=i;
                p2=j;
                shortestDistance = distance;
            }
        }
    }
 
    printf ("The closest two points are (%lf", points[p1][0]);
    printf (", %lf", points[p1][1]);
    printf (") and ("); 
    printf ("%.2lf", points[p2][0]);
    printf (",%.2lf\n" ,points[p2][1]);
 
    system("pause");
    //return 0;
    getch();
}
