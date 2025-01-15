// This is a single line comment
/* *****This is a
******Multiline Comment
**** */
#include <stdio.h>
void main()
{
FILE *fopen(), *fp;
int c ;
c = getc( fp ) ; // hope this gets removed
while ( c != EOF )
{
putchar( c );
c = getc ( fp );
} /*multiline
comment */
fclose( fp );
}