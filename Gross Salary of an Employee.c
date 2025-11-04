//Given Basic Salary, HRA, and DA of an employee, calculate the PF on Basic Salary and finally print the PF and Gross Salary of an employee.
//Note:PF $= 12\%$ of the Basic SalaryGross Salary $=$ Basic Salary $+$ HRA $+$ DA $+$ PF
#include <stdio.h>

int main() {
    // Declare variables for Salary (sal), HRA, and DA
    float sal, HRA, DA;
    
    // Read the three float inputs from separate lines
    scanf("%f", &sal);
    scanf("%f", &HRA);
    scanf("%f", &DA);
    
    // Calculate PF: 12% of the Basic Salary
    float pf = 0.12 * sal;
    
    // Calculate Gross Salary: Basic Salary + HRA + DA + PF
    // Note: The code uses 'sal' for Basic Salary, which is correct.
    float Gsalary = sal + HRA + DA + pf;
    
    // Print PF, formatted to two decimal places
    printf("%.2f\n", pf);
    
    // Print Gross Salary, formatted to two decimal places
    printf("%.2f\n", Gsalary);
    
    return 0;
}
