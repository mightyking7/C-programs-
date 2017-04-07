 #include<stdio.h>
#include<stdlib.h>

/*
 *@author Isaac Eduardo Buitrago, hwt460 
 */
 int main(){

 int ths, hun, ten,one, i;   
 
     for(i=1;i<=1000;i++){

       printf("%d ",i);

       if(i==1000){
             ths=1000;
	     printf("M\n");
             exit(-1);
}

	 	hun = i/100*100;
  	ten = i%100/10*10;
  	one = i%100%10;

			    switch(hun){
			    case 100:printf("C");
			      break;
			    case 200:printf("CC");
			      break; 
			    case 300:printf("CCC");
			      break;
			    case 400:printf("CD");
			      break;
			    case 500:printf("D");
			      break;
			    case 600: printf("DC");
			      break;
			    case 700:printf("DCC");
			      break;
			    case 800:printf("DCCC");
			      break;
			    case 900:printf("CM");
			      break;
			    
}
			    switch(ten){
			    case 10:printf("X");
			      break;
			    case 20:printf("XX");
			      break;
			    case 30:printf("XXX");
			      break;
			    case 40:printf("XL"); 
			      break;
			    case 50:printf("L");
			    break;
			    case 60:printf("LX");
			      break;
			    case 70:printf("LXX");
			      break;
			    case 80: printf("LXXX");
			      break;
			    case 90: printf("XC");
			      break;
}


                            switch(one){
                                case 1:printf("I");
                                break;
                                case 2:printf("II");
                                break;
                                case 3:printf("III");
                                break;
                                case 4:printf("IV");
                                break;
                                case 5:printf("V");
                                break;
                                case 6:printf("VI");
                                break;
                                case 7:printf("VII");
                                break;
                                case 8:printf("VIII");
                                break;
                                case 9:printf("IX");
																break;
                                }

			    printf("\n");
                            
			    //end for loop
     }
     //end main
		 return 0;
 }
