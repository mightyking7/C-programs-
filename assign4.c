#include<stdlib.h>
#include<stdio.h>


/*
* assign4.c
* @Purpose:Finds the k largest numbers in a file. An array is allocated with k elements,
* user parameter, the array stores numbers from the file,user parameter,and 
* determines its correct location in the aray by calling cutoffIndexIndex().
* The value returned is then used sort the array in descending order by calling updateArray().
* The k largest values are stored in the array and out-putted to the screen.
*/

/*
* @Purpose:Finds and returns the index location where the value is smaller than judge.
*  If the array doesn't need  updating return -1.
* @param int data:  Array to be passed in  
* @param int size: Size of the the array
* @param int judge: Value to determine location of the cut off index 
* @var int i: Used to iterate through data
* @var int coindex: Acronym for Cut Off Index, 
*  the index where all values past it are smaller than judge. This value is returned.
*/

int cutoffIndex(int *data, int size, int judge)
{
    int i, coindex;

     for(i=0;i<size;i++)
     
         if( judge > data[i])
         {
            coindex = i;
            return coindex;
         }
     
        return -1;
}

/*
* @Purpose: Shifts elements from sIndex to the end of the array right by one. newValue is 
* then inserted at sIndex. This orders elements in descending order.   
*/


void updateArray(int *data, int size, int sIndex, int newValue)
{

    /*start shifting elements right at end of array*/

    int end =  size - 1 ;

    for(end ; end > sIndex ; -- end)

        data[end] =  data[end-1];

    data[sIndex] = newValue;

}



int main(int argc, char *argv[])
{
    FILE *ifp;
    int  i, k, num, coIndex;
    int *aptr;

    k = atoi(argv[2]);

    /*Allocate an array of size k and initialize it to 0*/
    
    aptr = (int *) calloc(k, sizeof(int));
    
    ifp = fopen(argv[1],"r");

    /*
    * Read in numbers and first determine if they belong in the array, if not continue.
    * Next determine the cutoffIndex and call updateArray with the read in value.  
    */
    
    while(fscanf(ifp,"%d",&num)==1)
    {
        coIndex = cutoffIndex(aptr,k,num);

        if(coIndex == -1) //array doesn't need to be updated
            continue;
        else
        {
            updateArray(aptr,k,coIndex,num);
        }
    }

    //close the file pointer
    fclose(ifp);

    //Print the result
    for(i=0;i<k;i++)
        printf( i == k-1 ? "%d\n": "%d, "  , aptr[i]);

    //free the memory
    free(aptr);

    return 0;
}

