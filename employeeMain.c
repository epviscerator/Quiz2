//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char * phoneNumberToFind); 

    PtrToEmployee searchEmployeeByIncome(const Employee table[], int sizeTable, double numberToFind); 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];     

    extern const int EmployeeTableEntries;      

 

    PtrToEmployee matchPtr;  //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

 

    //Example not found 

    if (matchPtr != NULL) {

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    }
    else {

        printf("Employee ID is NOT found in the record\n"); 
    }
 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) {

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    }
    else {

        printf("Employee Tony Bobcat is NOT found in the record\n"); 

    }
     

    // Phone Number not found

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "360-420-1337"); 

    if (matchPtr != NULL) {

        printf("Phone Number 360-420-1337 is in record %d\n", matchPtr - EmployeeTable); 

    }
    else {

        printf("Phone Number 360-420-1337 is NOT found in the record\n"); 

    }
     
    // Phone Number found

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "714-555-2749"); 

    if (matchPtr != NULL) {

        printf("Phone Number 714-555-2749 is in record %d\n", matchPtr - EmployeeTable); 

    }
    else {

        printf("Phone Number 714-555-2749 is NOT found in the record\n"); 

    }

    // Income not found

   matchPtr = searchEmployeeByIncome(EmployeeTable, EmployeeTableEntries, 333); 
    if (matchPtr != NULL) {

        printf("Income 333 is in record %d\n", matchPtr - EmployeeTable); 

    }
    else {

        printf("Income 333 is NOT found in the record\n"); 

    }
    // Income found

     matchPtr = searchEmployeeByIncome(EmployeeTable, EmployeeTableEntries, 6.34); 
    if (matchPtr != NULL) {

        printf("Income 6.34 is in record %d\n", matchPtr - EmployeeTable); 

    }
    else {

        printf("Income 6.34 is NOT found in the record\n"); 

    }
    return EXIT_SUCCESS; 
    
} 