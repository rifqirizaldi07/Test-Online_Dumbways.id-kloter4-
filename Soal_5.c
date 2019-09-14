//fungsi unutk mencetak gari miring 
void drawline(int p)
{
	int i,j;
	for (i = 1; i < p;i++)
	{
		for (j = 1; j <i ; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
}
