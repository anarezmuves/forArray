// Author: Anamaria Rezmuves
// Author: Nicolas Stoica

// This code counts an array's elements 
// selectively, based on  incrementing totals
// after iterative for loop string comparisons


#include <stdio.h>
int main(){

char *animals[6] = {"cow", "cow", "dog", "cow", "dog", "dog"};

int cowTotal = 0;
int dogTotal = 0;

for (int i = 0; i <6; i++)
    {
   
     if( animals[i]=="cow")  
        {
        cowTotal++;
        }    
    else dogTotal++;
    }

printf("cows:%d\ndogs:%d\n",cowTotal,dogTotal);
return 0;
}
