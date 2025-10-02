int func(int a, int b) 
{ 
static int value = 4; 
value = value + a + b; 
return value; 
}  
    
int main() 
{ 
    int num_1 , num_2 ; 
 
    printf("Enter two numbers: "); 
    scanf("%d %d", &num_1, &num_2); 
         
              //calling the function 
    printf("\nResult of first call\n%d",func(num_1,num_2)); 
     
    printf("\nResult of second call\n%d",func(num_1,num_2)); 
     
    printf("\nResult of third call\n%d",func(num_1,num_2)); 
     
return 0; 
 
} 
