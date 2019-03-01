#include<stdio.h>
#define MAX 5 
 int top; 
 
 /*Fungsi PUSH*/ 
 void push (int stack[], int item) 
 {    
 
  if (top == (MAX-1))  
   printf("\nStack Full"); 
   else   
     {      
   ++top;   
   stack [top] = item;  
    } 
}   
/*Fungsi POP*/ 
int pop (int stack[]) 
{    
int ret;
   if (top == -1)     
   {   
   ret = 0;     
   } else {    
   
    ret = stack [top];  
	--top;
      }
	  return ret; 
	  }   
	  /*Fungsi Display*/ 
	  void display (int stack[])
	  {   int i;     
	       printf ("\nIsi Stack: ");     
		   if (top == -1){  
		             
			printf ("\nStack Kosong\n\n");
			} else { 
	for (i=top; i>=0; --i)      
	   printf ("\n--------\n|%3d   |\n--------", stack[i]); 
	  }    
	 printf ("\n"); 
}  
 
/*Main Program*/ 
int main()
 {    
 int stack[MAX], item;    
   int pilihan;   	
   
    top = -1; 
	     
	 do  
{   
   do  
    {    
	 printf ("MAIN MENU\n"); 
	 printf ("1.Push / Insert Stack\n");    
	 printf ("2.POP / Delete Stack\n"); 
	 printf ("3.Exit\n");   
	 printf ("Pilihan: ");   
	 scanf  ("%d", &pilihan); 
	 
	    if (pilihan<1 || pilihan>3)         
		     printf ("\nPilhan Salah, Silahkan Ulangi Lagi."); 
 } while (pilihan<1 || pilihan>3);
              
	switch (pilihan) 
	 {     
	  case 1:      
	  printf ("\nElemen Push : ");      
	  scanf  ("%d", &item); 
	  
	   push (stack, item);   
	            
	   display (stack); 
	    break;         
		   
	      	case 2:      
		item = pop (stack);
		            
		if(item == 0){ 
		   printf("\nStack Kosong\n\n");      
    	} else {              
		
		 display (stack);   
		}         
		        
		break;      
	default:      
	    printf ("\nExit"); 
	    } while(pilihan != 3); 
		   
		return 0; 
		}
	
