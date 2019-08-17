#include "myl.h"

int main()
{
    int v,e; 
    float f;                                                 
    int number_bytes;                                       
    printStr("Enter a integer: ");

    // -------------------------------------------------------------
    e = readInt(&v);                                      
   	printInt(e);
   	printStr("\n");

   	e = readInt(&v);
   	printInt(e);
   	printStr("\n");
   	number_bytes = printInt(v);
   	printStr("\n");
    printStr("printing this integer required "); 
    printInt(number_bytes);
    printStr(" characters to be printed\n\n");                

   	e = readInt(&v);
   	printInt(e);
   	printStr("\n");
   	printInt(v);
   	printStr("\n");

   	// -------------------------------------------------------
    e = readFlt(&f);                                      
   	printInt(e);
   	printStr("\n");

   	e = readFlt(&f);
   	printInt(e);
   	printStr("\n");
   	number_bytes = printFlt(f);
   	printStr("\n");
    printStr("printing this float required "); 
    printInt(number_bytes);
    printStr(" characters to be printed\n\n");                

   	e = readFlt(&f);
   	printInt(e);
   	printStr("\n");
   	printFlt(f);
   	printStr("\n");
    
    
    return 0;
}
