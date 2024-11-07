/*CT101/G/22501/24
ELIZABETH AMONDI 
*/
/*an array data structure is a data structure that stores a collection of 
elements usually of the same data type in
continuous memory allocation*/

#include<stdio.h>
int main(){
int  i,j,k;
int scores[2][2][2]={{{65,92},{84,72}},{{35,70},{59,67}}};
for(i=0;i<2;i++);{
for(j=0;j<2;j++);{
for(k=0;k<2;k++);{
printf("scores [%d][%d][%d]=%d\n",i,j,k, scores [i][j][k]);
}
}
}
return 0 ;
}


    
