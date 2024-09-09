Nikhil Chandrashekar
UCFID: 5641442


#include <stdio.h>
#include <math.h>//Allows math functions and math work to be preformed in the code//
#define PI 3.14159//Through program, PI is understood as 3.14159//

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


int main(int argc, char **argv)
 {//Used to recall the functions//
calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();
return 0;//returns a simple integer no output//  
}


double calculateHelperforcode()
{
    double x1, y1, x2, y2, distance; //Variables for the coordinates and distance//
    
    printf("\nPlease enter the points for the coordinates: \n");
    printf("Enter x1: "); //printing for x1 coordinate//
    scanf("%lf", &x1);
    printf("Enter x2: ");//printing for x2 coordinate//
    scanf("%lf", &x2);
    printf("Enter y1: ");//printing for y1 coordinate//
    scanf("%lf", &y1);
    printf("Enter y2: ");//printing for y2 coordinate//
    scanf("%lf", &y2);

    printf("\nPoint #1 entered: x1 = %.2lf; x2 = %.2lf", x1, x2);
    printf("\nPoint #2 entered: y1 = %.2lf; y2 = %.2lf\n", y1, y2);
    
    distance = sqrt ((x2 - x1)*(x2-x1) + (y2 - y1)*(y2-y1));//Distance formula includes all coordinates and preforms math to get distance between both points//
    
    return distance;

// For double calculateHelperforcode()
//The purpose is to act as a helper to execute and return distance
//The points of coordinates would be the inputs
//The output would be the printing of the user being prompted to enter the points till showing what they have entered and finally the distance between the points//
//Returns distance

}



double calculateDistance() {

    double distance = calculateHelperforcode(); 
    printf("\nThe distance between the two points is: %.2f\n", distance);//Prints out what the distance is//
    return distance;
    //This part of code actually prints out what the distance is after preforming the math from above and the points being entered//
    //returns the distance between the 2 points//
        
    }

double calculatePerimeter() {  
    //Prompts user to re-enter points or to input new points//
    double rad = calculateHelperforcode() / 2;//Recalls distance, variable to show radius to be multiplied by 2 and PI//

    double perimeter_c = 2 * rad * PI; //formula to calculate perimeter 
    
    printf("\nThe perimeter from the points given is: %.2lf\n", perimeter_c); //Prints the perimeter from the given points//

    return 3.0;// Level of difficulty//
    
    //For double calculatePerimeter this function gives perimeter//
    //The purpose is to input the points and return the perimeter through math///
    //There is no input other than the recurring x1,x2,y1,y2//
    //The output is the perimeter//
    //Return a value given by you to show how challenging it was to build this function in the code//
    }


double calculateArea() {

    double rad = calculateHelperforcode() / 2;//Recalls the distance parts to enter the points//

    double area_c = PI * rad * rad;//Area formula to calculate area between the points//

    printf("\nThe area of the city encompassed by your request is: %.2lf\n", area_c); //Prints the area//

    return 4.0;// level of difficulty//
    
    //For double calculateArea 
    //The purpose is to preform the math through the formula and print the area of the given points
    //There is no input other than the recurring x1,x2,y1,y2//
    //The output is the area of the given points//
    //Return a value given by you to show how challenging it was to build this function in the code//
    }

double calculateWidth() {
    
    double calwidth = calculateHelperforcode();//Recalls distance parts of code to enter coordinates//
    
    printf("\nThe width of the city encompassed by your request is %.2lf\n", calwidth); //Simply recalls distance and prints//
    
    return 2.0; //Level of difficulty//
    
    //For double calculateWidth
    //The purpose is to preform the math and print the width//
    //There is no inputs other than the recurring x1,x2,y1,y2//
    //The output is it prints out the width//
    //Return a value given by you to show how challenging it was to build this function in the code//
    }

double calculateHeight() {
    
    double calheight = calculateHelperforcode();
    
    printf("\nThe height of the city encompassed by your request is %.2lf\n", calheight);//Simply recalls distance and prints//
    
    return 2.0; //level of difficulty//
    
    //For double calculateHeight
    //The purpose is to preform the math and print the height//
    //There is no inputs other than the recurring x1,x2,y1,y2//
    //The output is it prints out the height//
    //Return a value given by you to show how challenging it was to build this function in the code//
    
    }