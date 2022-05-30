#include <stdio.h>
#include <math.h>

// declaration of structures line and point
struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    float midpoint;
    float slope;
    float distance;
};

// function that finds the slope of a line given two points
float solveSlope(struct line line1){
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    return slope;
}

// function that computes the midpoint of two points
void solveMidpoint(struct line line1){
    float midX = (line1.point1.x + line1.point2.x) / 2;
    float midY = (line1.point1.y + line1.point2.y) / 2;
    printf("Midpoint: %.2f %.2f", midX, midY);
}

// function that calculates the distance between two points
float solveDistance(struct line line1){
    float distance = ((line1.point1.x - line1.point2.x) * (line1.point1.x - line1.point2.x)) +
                    ((line1.point1.y - line1.point2.y) * (line1.point1.y - line1.point2.y));
    float d = sqrt(distance);
    return d;
}

// function that finds the equation of a line
void getSlopeInterceptForm(struct line line1){
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    float b = line1.point1.y - (slope * line1.point1.x);
    printf("y = %.2fx + %.2f", slope, b);
}

int main(){
    struct line line1;
    float slope, distance;

    // asks user to input coordinates of point 1
    printf("Enter x and y for point 1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);

    // asks user to input coordinates of point 2
    printf("Enter x and y for point 2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    /* assigns the computed value of slope using function solveSlope to variable slope,
    and the computed value of distance using function solveDistance to variable distance*/
    slope = solveSlope(line1);
    distance = solveDistance(line1);

    /* prints the slope, midpoint, distance,
    and slope intercept form given two points */
    printf("Slope: %.2f\n", slope);
    solveMidpoint(line1);
    printf("\nDistance between 2 points: %.2f\n", distance);
    getSlopeInterceptForm(line1);

    printf("\n\n");

    return 0;
}
