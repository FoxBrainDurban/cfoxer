/* Simple credit calculator
Program that determines if a department store customer has exceed the credit limin
*/
#include <stdio.h>

int main()
{
	int accountNum, NewTotal;
	double Balance;
	int TotalItemCharged;
	int TotalCredits;
	int CreditLimit;
	float newbalance;


	//prompt the user for values
	printf("Enter account number (-1 to end) :");
	scanf("%d", &accountNum);
	printf("Enter beginning balance :");
	scanf("%lf" ,&Balance);
	printf("Enter total charges :");
	scanf("%d", &TotalItemCharged);
	printf("Enter total credits :");
	scanf("%d", &TotalCredits);
	printf("Enter credit Limit :");
	scanf("%d", &CreditLimit);
	printf("===============THANK YOU FOR USING MYCARD!=========================\n" );
	//print the values
	printf("Account  :%d\n", accountNum);
	printf("CrediLimit  :%d\n", CreditLimit);
	printf("Beginning Balance :%.2lf\n ", Balance);

	printf("==================================================================\n");

	newbalance=Balance+TotalItemCharged-TotalCredits;

	if(newbalance>CreditLimit)
	{
		printf(" Unfortunatley, You have exceeded the credit limit \n");
	}
	
	return 0;
}