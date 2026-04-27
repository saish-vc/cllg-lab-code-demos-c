#include <stdio.h>
int main()
{
 int totalClasses, attendedClasses;
 float attendancePercentage;
 printf ("Enter total number of classes conducted: ");
 scanf ("%d", &totalClasses);
 printf("Enter number of classes attended by the student: ");
 scanf("%d", &attendedClasses);
 attendancePercentage = ((float)attendedClasses / totalClasses) * 100;
 printf("\n--- Attendance Report ---\n");
 printf("Total Classes Conducted: %d\n", totalClasses);
 printf("Classes Attended: %d\n", attendedClasses);
 printf("Attendance Percentage: %.2f%%\n", attendancePercentage);
 if (attendancePercentage >= 75.0)
{
 printf("Eligibility: Eligible to write the examination\n");
 } else {
 printf("Eligibility: Not Eligible to write the examination\n");
 }
 return 0;
}
