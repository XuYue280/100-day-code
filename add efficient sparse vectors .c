/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int val1[3]={2,3,4};
    int pos1[3]={0,1,3};
    
    int val2[3]={3,1,4};
    int pos2[3]={0,1,5};
    
    int val3[5]={0}; // 2 6 4 1 4
    int pos3[5]={0}; // 0 1 3 4 5
    
    int i=0,j=0,count=0,k=0;
    int a,b;
    
    
        
    while(count<6){
        if(pos1[i]==count&&pos2[j]==count){
            val3[k]=val1[i]+val2[j];
            pos3[k]=pos2[j];
            i++;
            j++;
            k++;
        } 
        
        else if(pos1[i]==count){
            val3[k]=val1[i];
            pos3[k]=pos1[i];
            i++;
            k++;
        }     
        else if(pos2[j]==count){
            val3[k]=val2[j];
            pos3[k]=pos2[j];
            j++;
            k++;
        } 
        
        count++;
    }



    for(i=0;i<5;i++){
        printf("%d",val3[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d",pos3[i]);
    }
    return 0;
}