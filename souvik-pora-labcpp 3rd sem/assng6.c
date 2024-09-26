//Write to implement Adamas University semester grading system.
//ans:-
#include <stdio.h>

typedef struct {
    char courseName[50];
    int credits;
    char grade;
} Course;

float gradeToPoint(char grade) {
    switch (grade) {
        case 'O': return 10.0;
        case 'A': return 9.0;
        case 'B': return 8.0;
        case 'C': return 7.0;
        case 'D': return 6.0;
        case 'E': return 5.0;
        case 'P': return 4.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

float calculateSGPA(Course courses[], int numCourses) {
    float totalPoints = 0.0;
    int totalCredits = 0;
    for (int i = 0; i < numCourses; i++) {
        totalPoints += gradeToPoint(courses[i].grade) * courses[i].credits;
        totalCredits += courses[i].credits;
    }
    return totalPoints / totalCredits;
}

float calculateCGPA(Course allCourses[], int totalCourses) {
    float totalPoints = 0.0;
    int totalCredits = 0;
    for (int i = 0; i < totalCourses; i++) {
        totalPoints += gradeToPoint(allCourses[i].grade) * allCourses[i].credits;
        totalCredits += allCourses[i].credits;
    }
    return totalPoints / totalCredits;
}

int main() {
    int numCourses;
    printf("Enter the number of courses this semester: ");
    scanf("%d", &numCourses);

    Course courses[numCourses];
    for (int i = 0; i < numCourses; i++) {
        printf("Enter course name: ");
        scanf("%s", courses[i].courseName);
        printf("Enter credits for %s: ", courses[i].courseName);
        scanf("%d", &courses[i].credits);
        printf("Enter grade for %s: ", courses[i].courseName);
        scanf(" %c", &courses[i].grade);
    }

    float sgpa = calculateSGPA(courses, numCourses);
    printf("SGPA for this semester: %.2f\n", sgpa);

    int totalCourses;
    printf("Enter the total number of courses completed: ");
    scanf("%d", &totalCourses);

    Course allCourses[totalCourses];
    for (int i = 0; i < totalCourses; i++) {
        printf("Enter course name: ");
        scanf("%s", allCourses[i].courseName);
        printf("Enter credits for %s: ", allCourses[i].courseName);
        scanf("%d", &allCourses[i].credits);
        printf("Enter grade for %s: ", allCourses[i].courseName);
        scanf(" %c", &allCourses[i].grade);
    }

    float cgpa = calculateCGPA(allCourses, totalCourses);
    printf("CGPA up to this semester: %.2f\n", cgpa);

    return 0;
}
