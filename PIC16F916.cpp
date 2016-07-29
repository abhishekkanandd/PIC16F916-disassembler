#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 12
char bintohex(char *binaryNumber );// function declaration for conversion of hex to binary
char binaryNumber[MAX];
char hexaDecimal[MAX];
char bin7[MAX] ,bin8[MAX],bin3[MAX],bin4[MAX];
FILE *ff;
int p[20];
int main( )
{ 
FILE *fs, *ft,*fp ;
char ch ;
int myhex = 0x0001;
int b1,b2,b3,b4;
int i,j,k;
char a[14];
int a1,a2,a3,a4,a5,a6,a7;
fs = fopen ( "C:\\Users\\abhis_000\\Desktop\\project\\sampletext.txt", "r" ) ;// opening the file where we have saved the hex data to read it
ft = fopen ( "C:\\Users\\abhis_000\\Desktop\\project\\binary.txt", "w" ); // opening the file to write the binary of corresponding hex data
while ( 1 )
{	
ch = fgetc ( fs ) ;// reads single character from sampletext.txt file 
         switch(ch) // uses switch statement to convert the hexadecimal number in its corresponding binary
		 {
             		case '0':
             		{b4=0;b3=0;b2=0;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '1':
             			{b4=0;b3=0;b2=0;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '2':
			 	{b4=0;b3=0;b2=1;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '3':
			 	{b4=0;b3=0;b2=1;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '4':
			 	{b4=0;b3=1;b2=0;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '5':
			 	{b4=0;b3=1;b2=0;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '6':
			 	{b4=0;b3=1;b2=1;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '7':
			 	{b4=0;b3=1;b2=1;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '8':
			 	{b4=1;b3=0;b2=0;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case '9':
			 	{b4=1;b3=0;b2=0;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'A':
			 	{b4=1;b3=0;b2=1;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'a':
			 	{b4=1;b3=0;b2=1;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'B':
			 	{b4=1;b3=0;b2=1;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'b':
			 	{b4=1;b3=0;b2=1;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'C':
			 	{b4=1;b3=1;b2=0;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'c':
			 	{b4=1;b3=1;b2=0;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'D':
			 	{b4=1;b3=1;b2=0;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'd':
			 	{b4=1;b3=1;b2=0;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'E':
			 	{b4=1;b3=1;b2=1;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'e':
			 	{b4=1;b3=1;b2=1;b1=0; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'F':
			 	{b4=1;b3=1;b2=1;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
			 	case 'f':
			 	{b4=1;b3=1;b2=1;b1=1; 
			 	fprintf(ft,"%d%d%d%d",b4,b3,b2,b1);
			 	break;
			 	}
    }
if (ch == EOF)
break ;
}
fclose ( fs ) ; // closes sampletext.txt file
fclose (ft); // closes binary.txt file


fp = fopen ("C:\\Users\\abhis_000\\Desktop\\project\\binary.txt","r") ;  // opening the file in read mode to read the binary data
ff = fopen ("C:\\Users\\abhis_000\\Desktop\\project\\assembly.txt","w"); //opening a new file where we will save the assembly language code

while(1)
{
fprintf(ff,"\n%04x\t",myhex); // for printing the address of the memory location
for(i=0; i<14; i++) // loop runs 14 times so as to store 14 bits of binary data into the array a[i]
{
a[i] = fgetc(fp); // array gets stored with 14 bits of binary data
}


/* comapres the array characters with the instruction set format and then saves a instruction 
based on the bit sequence onto the file assembly.txt*/

if ((a[5]==49)&&(a[4]==49)&&(a[3]==49)&&(a[2]==48)&&(a[1]==48)&&(a[0]==48))
{
fputs("ADDWF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7); 
fprintf(ff,"\t%c",a[6]);
 myhex++;
}
else if ((a[5]==49)&&(a[4]==48)&&(a[3]==49)&&(a[2]==48)&&(a[1]==48)&&(a[0]==48))
{
fputs("ANDWF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[6]==49&&a[5]==49&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("CLRF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7); myhex++;
}
else if (a[6]==48&&a[5]==49&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("CLRW",ff); myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("COMF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==49&&a[4]==49&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("DECF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==49&&a[4]==49&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("DECFSZ\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("INCF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==49&&a[4]==49&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("INCFSZ\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if ((a[5]==48)&&(a[4]==48)&&(a[3]==49)&&(a[2]==48)&&(a[1]==48)&&(a[0]==48))
{
fputs("IORWF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("MOVF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("RLF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("RRF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("SUBWF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
fputs("SWAPF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==49&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("XORWF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fprintf(ff,"\t%c",a[6]); myhex++;
}
else if (a[3]==48&&a[2]==48&&a[1]==49&&a[0]==48)
{
fputs("BCF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fputs("\t",ff);
char bin4[MAX] = {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4); myhex++;
}
else if (a[3]==49&&a[2]==48&&a[1]==49&&a[0]==48)
{
fputs("BSF\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fputs("\t",ff);
char bin4[MAX] =  {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4); myhex++;
}
else if (a[3]==48&&a[2]==49&&a[1]==49&&a[0]==48)
{
fputs("BTFSC\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fputs("\t",ff);
char bin4[MAX] = {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4); myhex++;

}
else if (a[3]==49&&a[2]==49&&a[1]==49&&a[0]==48)
{
fputs("BTFSS\t0x",ff);
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
fputs("\t",ff);
char bin4[MAX] =  {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4); myhex++;
}
else if (a[4]==49&&a[3]==49&&a[2]==49&&a[1]==49&&a[0]==49)
{
fputs("ADDLW\t0x",ff);
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6); myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==49&&a[0]==49)
{
fputs("ANDLW\t0x",ff);
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6); myhex++;
}
else if (a[2]==48&&a[1]==48&&a[0]==49)
{
fputs("CALL\t0x",ff);
char bin3[MAX] = {(int)a[3],(int)a[4],(int)a[5],(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin3); myhex++;
}
else if (a[2]==49&&a[1]==48&&a[0]==49)
{
fputs("GOTO\t0x",ff);
char bin3[MAX] = {(int)a[3],(int)a[4],(int)a[5],(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin3); myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==49&&a[0]==49)
{
fputs("IORLW\t0x",ff);
char bin6[MAX] ={(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6); myhex++;
}
else if (a[3]==48&&a[2]==48&&a[1]==49&&a[0]==49)
{
fputs("MOVLW\t0x",ff);
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],a[11],a[12],a[13]};
bintohex(bin6); myhex++;
}
else if (a[3]==49&&a[2]==48&&a[1]==49&&a[0]==49)
{
fputs("RETLW\t0x",ff);
char bin6[MAX] =  {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6); myhex++;
}
else if (a[4]==48&&a[3]==49&&a[2]==49&&a[1]==49&&a[0]==49)
{
fputs("SUBLW\t0x",ff);
char bin6[MAX] =  {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6); myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==48&&a[2]==49&&a[1]==49&&a[0]==49)
{
fputs("XORLW\t0x",ff);
char bin6[MAX] =  {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6); myhex++;
}
else if (a[6]==49&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("MOVWF\t0x",ff);
char bin7[MAX] =  {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7); myhex++;
}
else if (a[13]==48&&a[12]==48&&a[11]==48&&a[10]==48&&a[9]==48&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("NOP",ff); myhex++;
}
else if (a[13]==48&&a[12]==48&&a[11]==49&&a[10]==48&&a[9]==48&&a[8]==49&&a[7]==49&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("CLRWDT",ff); myhex++;
}
else if (a[13]==49&&a[12]==48&&a[11]==48&&a[10]==49&&a[9]==48&&a[8]==48&&a[7]==48&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("RETFIE",ff); myhex++;
}
else if (a[13]==49&&a[12]==49&&a[11]==48&&a[10]==48&&a[9]==48&&a[8]==49&&a[7]==49&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("SLEEP",ff); myhex++;
}
else if (a[13]==48&&a[12]==48&&a[11]==48&&a[10]==49&&a[9]==48&&a[8]==48&&a[7]==48&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
fputs("RETURN",ff); myhex++;
}
else
{fputs("UNDEFINED",ff);myhex++;}
}
fclose(ff); // closes assembly.txt file
fclose(fp); // closes binary.txt file
return 0;
}


// function to convert binary back to hex 
 char bintohex(char *binaryNumber )
{
int temp;
long int i=0,j=0;
while(binaryNumber[i])
{
binaryNumber[i] = binaryNumber[i] -48;
   ++i; }
	 --i;
	 while(i-2>=0){
       temp =  binaryNumber[i-3] *8 + binaryNumber[i-2] *4 +  binaryNumber[i-1] *2 + binaryNumber[i] ;
       if(temp > 9)
            hexaDecimal[j++] = temp + 55;
       else
            hexaDecimal[j++] = temp + 48;
       i=i-4;
   }

   if(i ==1)
      hexaDecimal[j] = binaryNumber[i-1] *2 + binaryNumber[i] + 48 ;
   else if(i==0)
      hexaDecimal[j] =  binaryNumber[i] + 48 ;
    else
      --j;
	
   while(j>=0){
      fprintf(ff,"%c",hexaDecimal[j--]);
   
   }

   return 0;
}


