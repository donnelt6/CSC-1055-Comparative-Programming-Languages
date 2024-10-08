#include <stdio.h>
#include <math.h> 

// Define a struct to represent a 2D point
struct Point {
    float x; // X-coordinate
    float y; // Y-coordinate
};

// Function to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point point1, point2;

    // Input coordinates for the first point
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &point1.x, &point1.y);

    // Input coordinates for the second point
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &point2.x, &point2.y);

    // Calculate the distance between the two points
    float distance = calculateDistance(point1, point2);

    // Output the result
    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n",
           point1.x, point1.y, point2.x, point2.y, distance);

    return 0;
}
