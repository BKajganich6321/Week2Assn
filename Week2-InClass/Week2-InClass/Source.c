#include <stdio.h>

// Define constants (if necessary)
// Example: #define PI 3.14159265358979323846

// Function declarations
void greet(void);                    // Student 1
int add(int a, int b);               // Student 2
int subtract(int a, int b);          // Student 3
double calculateArea(double radius); // Student 4
unsigned long long factorial(int n); // Student 5
void displayMenu(void);             // Student 6
double getNum(void);

int main(void) {
    // Variable declarations
    int choice;
    char input[100]; // For safer input handling
    double radius ;

    // Display a welcome message
    printf("Welcome to the Collaborative Code Management Program!\n");

    // Call the display_menu() function
    displayMenu();

    // Accept user input for menu selection
    printf("\nEnter your choice: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        
        sscanf_s(input, "%d", &choice);
    }

    // Use a switch-case to handle menu options
    switch (choice) {
    case 1:
        greet(); // Call greet function
        break;
    case 2:
        // Call add function (placeholder)
        break;
    case 3:
        // Call subtract function (placeholder)
        break;
    case 4:
        printf("Enter the radius of the circle:");
        radius = getNum();
        double area= calculateArea(radius);
        printf("%lf",area);
        break;
    case 5:
        // Call factorial function (placeholder)
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}

// Function definitions (placeholders)

// Student 1: Implement greet() function
void greet(void) {
    // Placeholder
}

// Student 2: Modify add() function to take user input
int add(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 3: Complete subtract() function
int subtract(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

/*
* Function: calculateArea
* Description: This function takes the radius of a circle as a double and find out the area of the circle  
* Parameters: double radius: radius of the circle
* Returns: double area : Area of the circle (found out using Pi*(r)^2)
*/
double calculateArea(double radius) {
    
    double Pi = 3.14159;
    double area = Pi * radius * radius;

    return area; // Replace with actual logic
}

// Student 5: Develop factorial() function
unsigned long long factorial(int n) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 6: Implement display_menu() function
void displayMenu(void) {
    // Placeholder
    printf("Menu:\n");
    printf("1. Greet\n");
    printf("2. Add two numbers\n");
    printf("3. Subtract two numbers\n");
    printf("4. Calculate the area of a circle\n");
    printf("5. Calculate the factorial of a number\n");
}

double getNum(void)
{
    char record[121] = { 0 }; // Buffer to store input string
    double number = 0.0; // Variable to store the converted number
    // Prompt the user for input and read the input string
    fgets(record, 121, stdin);
    // Attempt to convert the string to a double
    if (sscanf_s(record, "%lf", &number) != 1) {
        // If conversion fails, set the number to -1
        number = -1.0;
    }
    return number; // Return the double (or -1 if conversion failed)
}