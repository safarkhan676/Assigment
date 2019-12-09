#include<stdio.h>
int main()
{
	int matrixA[3][3]={{1,3,7},{6,8,0},{5,2,4}};
	int matrixB[3][3]={{2,4,6},{8,0,1,},{3,7,9}};
	int multiple[3][3];
	int row,col;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			multiple[row][col]=matrixA[row][col]*matrixB[row][col];
			}
			}
			for(row=0;row<3;row++)
			{
				for(col=0;col<3;col++)
				{
					printf("%d \t",multiple[row][col]);
				}
				printf("\n");
			}
}

