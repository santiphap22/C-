#include <stdio.h>
int main()
{
	int number1,number2,number3;
	printf("Enter 3 integers: ");
	scanf("%d %d %d",&number1,&number2,&number3);
	
	if ((number1<=number2)&&(number2<=number3))
		printf("Sorted Output: %d <= %d <= %d",number1,number2,number3);
    if ((number1<=number3)&&(number3<=number2))
	    printf("Sorted Output: %d <= %d <= %d",number1,number3,number2);
	if ((number2<=number1)&&(number1<=number3))
		printf("Sorted Output: %d <= %d <= %d",number2,number1,number3);
	if ((number2<=number3)&&(number3<=number1))
	    printf("Sorted Output: %d <= %d <= %d",number2,number3,number1);	    
	if ((number3<=number1)&&(number1<=number2))
		printf("Sorted Output: %d <= %d <= %d",number3,number1,number2);
	if ((number3<=number2)&&(number2<=number1))
        printf("Sorted Output: %d <= %d <= %d",number3,number2,number1);
	
	
	
	
	
	return 0;
}
