#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void main(){








 char b[100];
int n;
while(n=-1)
{


printf("enter  an operator : \n");
 gets(b);
 switch(b[0]){

 case'<':if(b[1]== '=')
          printf("greater than equal \n");
          else
           printf("this is greater than Operator \n");
 break;





case'>':if(b[2]== '=')
          printf("less than equal Operator \n");
          else
           printf("this is less than Operator \n");
 break;




case'+':if(b[3]== '+')
          printf(" incremental operator \n");
          else
           printf(" Additonal  Operator \n");

           break;

 break;


case'-':if(b[4]== (isdigit)){


          printf("substract operator \n");
}

          else
           printf(" subtract Operator \n");
 break;


 case'=':
           printf("Equal  Operator \n");
 break;


 case'++':
           printf(" incremental  Operator \n");
 break;


 case'*':
           printf("Multiple  Operator \n");
 break;


 case'/':
           printf("divison  Operator \n");
 break;


 case'||':
           printf("OR  Operator \n");
 break;


 case'&&':
           printf("And  Operator \n");
 break;







 case'--':
           printf("Decrement   Operator \n");
 break;


 case'%':
           printf("Module  Operator \n");
 break;

default : printf("this is not an operator \n");

 }
}
}

