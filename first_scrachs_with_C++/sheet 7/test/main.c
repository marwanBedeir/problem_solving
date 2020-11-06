#include <stdio.h>
#include <stdlib.h>

int main()
{
int	 account;
char 	name[ 30 ];
double	 balance;
FILE 	*fPtr;
if ( ( fPtr = fopen( "c:\\clients.dat", "r"   ) ) == NULL )
	printf( "File could not be opened\n" );
else {
	printf( "%-10s%-13s%s\n", "Account", "Name", "Balance" );
	fscanf( fPtr, "%d%s%f", &account, name, &balance );
	while (!feof( fPtr ) ) {
		printf( "%-10d%-13s%7.2f\n", account, name, balance );
		fscanf( fPtr, "%d%s%f", &account, name, &balance );
	 } /* end while */
	fclose( fPtr );
}
}
