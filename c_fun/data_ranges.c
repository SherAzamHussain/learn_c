/**
*  explore size and range of basic data types in C.
*  print size and range of diferent data types using
*  limits.h heade file. his scipt use the macros deffined 
*  limits.h to print size and range of differentt data types.
*
**/
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    
    /*int int_lower_limit = INT_MIN;
    int int_uper_limit = INT_MAX;
    unsigned int uint_lower_limit = 0;
    unsigned int unit_uper_limit = UINT_MAX;
    short int shint_lower_limit;
        */


    printf("size and range of different data types in this machine are as follow.\n\n");
    printf("%s \t%s \t%s \t\t%s\n\n", "data type", \
    	   "size(byets)","L_range", "U_range" );
    printf("%3s \t%d \t\t%d %15d\n", "integer", sizeof(int), \
            INT_MIN, INT_MAX );
    printf("%s \t%d \t\t%u \t\t%u\n", "usign int", sizeof(unsigned int), \
            0, UINT_MAX );
    printf("%s \t%d \t\t%d \t\t%d\n", "short int", sizeof(short int), \
            SHRT_MIN, SHRT_MAX );
    printf("%s \t%d \t\t%u \t\t%u\n", "u_short int", sizeof(unsigned short int), \
            0, USHRT_MAX );
    printf("%s \t%d \t\t%d \t%d\n", "long int", sizeof(long int), \
            LONG_MIN, LONG_MAX );
    printf("%s \t%d \t\t%u \t\t%u\n", "u_long int", sizeof(unsigned long int), \
            0, ULONG_MAX );
    printf("%s \t\t%d \t\t%e \t%e\n", "float", (sizeof(float), \
            FLT_MIN, FLT_MAX );
    printf("%s \t\t%d \t\t%e \t%e\n", "double", sizeof(double), \
            DBL_MIN, DBL_MAX );
    printf("%s \t%d \t\t%e \t%e\n", "l_double", sizeof(long double), \
            LDBL_MIN, LDBL_MAX );


	return 0;
}