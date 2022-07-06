#include <stdio.h>
 
int main(){
    char c1;
    char c2;
    char c3;
    char c4;
    char c5;
    char c6;
    char c7;
 
    char dummy[15];
    int year;
    char gender;
 
    scanf("%c%c%c%c%c%c-%c%s", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &dummy);
 
    if(c7 == '1'){year = 19;   gender = 'M';}
    if(c7 == '2'){year = 19;   gender = 'F';}
    if(c7 == '3'){year = 19;   gender = 'M';}
    if(c7 == '4'){year = 19;   gender = 'F';}
 
   printf("%d%c%c/%c%c/%c%c %c", year, c1, c2, c3, c4, c5, c6 , gender);
    return 0;
}

