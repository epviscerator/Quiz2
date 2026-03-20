#include <string.h> 

#include "employee.h" 

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber){ 

const PtrToConstEmployee endPtr = ptr + tableSize; 

for(; ptr < endPtr; ptr++)  //search until end of table  ptr++ will increment by what?? 

    { 

        if(ptr->number == targetNumber) {//check if it equals the Employee number 

            return (PtrToEmployee) ptr; //return location of the number to call. 
        }
    } 

    return NULL;   //this will only happen if no Employee number matches in loop above 

} 

 

//Essentially the same functionality as above but comparing strings to check if equal 

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName){ 

    const PtrToConstEmployee endPtr = ptr + tableSize; 

    for(; ptr < endPtr; ptr++) 

    { 

        if(strcmp(ptr->name,targetName) == 0) {

            return (PtrToEmployee) ptr; 
        }
    } 

    return NULL; 

} 

// same as above again but this time searching by phone number
PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char * targetPhoneNumber){

    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++)

    {

        if(strcmp(ptr->phone,targetPhoneNumber) == 0) {

            return (PtrToEmployee) ptr;
        }

        
    }
    return NULL;
}

// same as above yet again but now by income wowie

PtrToEmployee searchEmployeeByIncome(PtrToConstEmployee ptr, int tableSize, double targetNumber) {

    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++)

    {
        if (ptr->salary == targetNumber) {
            return (PtrToEmployee) ptr;
        }

        
    }
    return NULL;
}


