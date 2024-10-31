#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Enter odd number:\n");
    scanf("%d",&size);
    int box[size][size];

     if(size%2!=0&&size>1)
     {
         //row & col
         int row,col;
         row=1;
         col=((size+1)/2);

         //enter value 1
         box[row-1][col-1]=1;

         //enter values 2 >>(size^2)
         for(int num=2;num<=size*size;num++)
         {
             //reminder=0
             if((num-1)%size==0)
             {
                 row++;
                 if(row>size) // check if row not out of boundry (row>size-1)
                     {
                         row=0;
                         box[row-1][col-1]=num;
                     }
                 else
                    box[row-1][col-1]=num;

             }
             // reminder not 0
             else
             {
                 row--;
                 col--;
                 if(row<1) // check of rows
                    row=size;
                 if(col<1) // check of col
                    col=size;

                box[row-1][col-1]=num;
            }



         }

    printf("Your Magic Matrix Here:\n");
     for(int r=0;r<size;r++)
     {
        for(int c=0;c<size;c++)
        {
            printf("%d\t",box[r][c]);
        }
        printf("\n");
     }

     }
     else printf("Enter Valid Number!\n");


    return 0;
}
