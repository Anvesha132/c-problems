#include <stdio.h>
int main()
{
    int  maths,phy,chem,total;
    
    printf(" enter maths marks");
    scanf("%d",&maths);
    printf(" enter  physics marks");
    scanf("%d",&phy);
    printf(" enter  chemistry marks");
    scanf("%d",&chem);
    total= maths+phy+chem;
    if(maths >=65 && phy>=55 && chem>=50 ){
        printf("Eligible for admission");
    }
    else if(total>=190|| (maths+phy)>=140){
        printf("Eligible for admission");

    }
    else{
        printf("not eligible for admission");
    }
    return 0;
}


        







        
    

    

    

