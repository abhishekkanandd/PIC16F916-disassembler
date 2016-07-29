#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include <inttypes.h>
#define MAX 12
int bintohex(char *binaryNumber );//function for conversion of binary back to hex
char binaryNumber[MAX];
char hexaDecimal[MAX];
char bin7[MAX] ,bin8[MAX],bin3[MAX],bin4[MAX];
//FILE *ff;
int p[20];
int main( )
{
/* Reading the contents of file and copying its binary in another file */ 
//FILE *fs, *ft,*fp ;
char ch ;
int myhex = 0x0001;
int b1,b2,b3,b4;
int i,j,k;
long int kk=0;
char a[14];
int a1,a2,a3,a4,a5,a6,a7;

// Here in this array we need to put the binary data that we got after the conversion of hex in binary
char pp[10000]="0001000000101000111111110011111111111111001111111111111100111111000101000010101111111111001111111111111100111111111111110011111111111111001111111111111100111111111111110011111111111111001111111111111100111111111111110011111111111111001111111111111100111111100000110000000110000011000101100110000000110000100011110000000010000011000100101000001100000001001000000011000010000100000000000000000000110000100000000000000010000100000010101000000000110000000001000000001000000011000111000001100000101000100000110000000100000111001100001000010100000000101000000000000000110010001100001000011000000000101000010000000000010100001100001000011100000000100000110000000110000011000101100000011100110000100111000000000010010001000000011110000000110000100001010000000011110101001100001000011000000000111100000011000010010110000000001000001100010010000000110001011101000000001100001000011100000000100000110001011000000011000100111000001000110000100001110000000010000011000000011011101000010110101111110000000111100011000000011010100100000001000001100001100001000101001010001110001100010010001010010001000001000111001010001110001100010110001010010001010001101110001000111000001100000001000000110001011100000000001100001000111100000001100011010000000001110101001000111000001100000001000000110001011101001001001100000000110000000110000000110001100110000001001010001000001100000001001111110011000011110101000000001000001100000001000000110001011110001111000000011000110100000000100011100000000110001100000000010111101100100011100000110000000111110101000010000000001100011001011001010010100011110101000000110111010100001000010101110010100010000011000000010000001100010111000000000011000010001111000000011000110100000000100011100000000101001001001100001000110000000000011110110010001110000011000000010000001100010111000000010011000010001111000000011000110100000000100011100000000100000010001100001000110000000000011110110010001110000011000000010000001100010111000000100011000010001111000000011000110100000000100011100000000100001000001100001000110000000000011110110010001110000011000000011000111100100011000001100010001101101010001000111011101000010110100100000011000010110000000000001010010000110000101100010000000010011111001000101011110100000001101111000000000110111011000000011110011000000001011001010001010010000011000000011111111000110000011001010000010100000011000111011110011000000001001110100001101110011000001010000110001100010010100110010010100011100110000000010101110000110000011001100000001000000011000110001110000000101010100001100001101110101001000100001000011000011111101010010001010000000110000110110010100100010001000001100001111100101001000101010000011000011000101010010001011100000110000111001010100100010011011000110001101110111110001010001011101100011101101111100010100010111011000100010110001100010111101111110011000010110000000000001001111100100010001100010000100010100010000000000011001000001000101000110000000000110011000010000100010000000000001101000000100010100101000000000011010100001000101001100000000000110111000010001010100000000000000001110011000000111011000001010000001100011101000001010001011000000011000110010000010100010010011001010001111011101010000000011110010100011110111010110000000111100101000111011110100100000001011001010001110111101000000000011110010100011100111001110000000101100101000111111110110000000001010001000011000000111100000001100000001100011101110101110010100011100011000100011110010100010001111101100010100001010010001100000011110000000110000000110001110111011110001010001011110000000001101110100001010111101011001010001010100100011100111000100010100011100101000101010110001100010010101010010001110011100101000100010010100100011001111001010001000100001111001100000110100100000010000000110001110011101110001010000011101000010101111000110001010111100101000100011110111000101000111000110001110111110110001010001010100100011000111101100010100001100101000101101011101100010100111000110001000100010101001010010000011000110000011010110000001000000011000111000000011100101001011000110001111011111111001010000000011000110000111010110000000000000100001010010000011000010110";
//fs = fopen ( "C:\\Users\\abhis_000\\Documents\\abc.txt", "r" ) ;
//ft = fopen ( "C:\\Users\\abhis_000\\Documents\\copy.txt", "a" );
while(kk<4096) // here the limit should be equal to the no of elements in the pp array
{
printf("\n%04x\t",myhex);// prints the address of hexadecimal number in hexadecimal format
for(i=0; i<14; i++)
{
a[i] = (int)pp[kk++] ; // 14 bits gets stored into the array at a time out of the whole bit sequence
}

// Here onwards it will match the bits sequence in array for different instructions 

if (a[5]==49&&a[4]==49&&a[3]==49&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("ADDWF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==49&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("ANDWF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[6]==49&&a[5]==49&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("CLRF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);myhex++;
}
else if (a[6]==48&&a[5]==49&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("CLRW");myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("COMF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==49&&a[4]==49&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("DECF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==49&&a[4]==49&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("DECFSZ\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("INCF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==49&&a[4]==49&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("INCFSZ\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==49&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("IORWF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("MOVF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("RLF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("RRF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("SUBWF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==49&&a[2]==49&&a[1]==48&&a[0]==48)
{
printf("SWAPF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==49&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("XORWF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t%c",a[6]);myhex++;
}
else if (a[3]==48&&a[2]==48&&a[1]==49&&a[0]==48)
{
printf("BCF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t");
char bin4[MAX] = {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4);myhex++;
}
else if (a[3]==49&&a[2]==48&&a[1]==49&&a[0]==48)
{
printf("BSF\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t");
char bin4[MAX] =  {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4);myhex++;
}
else if (a[3]==48&&a[2]==49&&a[1]==49&&a[0]==48)
{
printf("BTFSC\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t");
char bin4[MAX] = {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4);myhex++;

}
else if (a[3]==49&&a[2]==49&&a[1]==49&&a[0]==48)
{
printf("BTFSS\t0x");
char bin7[MAX] = {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);
printf("\t");
char bin4[MAX] =  {(int)a[4],(int)a[5],(int)a[6]};
bintohex(bin4);myhex++;
}
else if (a[4]==49&&a[3]==49&&a[2]==49&&a[1]==49&&a[0]==49)
{
printf("ADDLW\t0x");
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[5]==49&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==49&&a[0]==49)
{printf("ANDLW\t0x");
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[2]==48&&a[1]==48&&a[0]==49)
{
printf("CALL\t0x");
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[2]==49&&a[1]==48&&a[0]==49)
{
printf("GOTO\t0x");
char bin3[MAX] = {(int)a[3],(int)a[4],(int)a[5],(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin3);myhex++;
}
else if (a[5]==48&&a[4]==48&&a[3]==48&&a[2]==49&&a[1]==49&&a[0]==49)
{
printf("IORLW\t0x");
char bin6[MAX] ={(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[3]==48&&a[2]==48&&a[1]==49&&a[0]==49)
{
printf("MOVLW\t0x");
char bin6[MAX] = {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[3]==49&&a[2]==48&&a[1]==49&&a[0]==49)
{
printf("RETLW\t0x");
char bin6[MAX] =  {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[4]==48&&a[3]==49&&a[2]==49&&a[1]==49&&a[0]==49)
{
printf("SUBLW\t0x");
char bin6[MAX] =  {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[5]==48&&a[4]==49&&a[3]==48&&a[2]==49&&a[1]==49&&a[0]==49)
{
printf("XORLW\t0x");
char bin6[MAX] =  {(int)a[6],(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin6);myhex++;
}
else if (a[6]==49&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("MOVWF\t0x");
char bin7[MAX] =  {(int)a[7],(int)a[8],(int)a[9],(int)a[10],(int)a[11],(int)a[12],(int)a[13]};
bintohex(bin7);myhex++;
}
else if (a[13]==48&&a[12]==48&&a[11]==48&&a[10]==48&&a[9]==48&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("NOP");myhex++;
}
else if (a[13]==48&&a[12]==48&&a[11]==49&&a[10]==48&&a[9]==48&&a[8]==49&&a[7]==49&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("CLRWDT");myhex++;
}
else if (a[13]==49&&a[12]==48&&a[11]==48&&a[10]==49&&a[9]==48&&a[8]==48&&a[7]==48&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("RETFIE");myhex++;
}
else if (a[13]==49&&a[12]==49&&a[11]==48&&a[10]==48&&a[9]==48&&a[8]==49&&a[7]==49&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("SLEEP");myhex++;
}
else if (a[13]==48&&a[12]==48&&a[11]==48&&a[10]==49&&a[9]==48&&a[8]==48&&a[7]==48&&a[6]==48&&a[5]==48&&a[4]==48&&a[3]==48&&a[2]==48&&a[1]==48&&a[0]==48)
{
printf("RETURN");myhex++;
}
else
{printf("UNDEFINED");myhex++;}

}
//fclose(ff);
//fclose(fp);
getch();
}


/* function to convert binary back to hex */
int bintohex(char *binaryNumber )
{
int temp;
long int i=0,j=0;
while(binaryNumber[i])
{
binaryNumber[i] = binaryNumber[i] -48;
   ++i; }
	 --i;
	 while(i-2>0){
       temp =  binaryNumber[i-3] *8 + binaryNumber[i-2] *4 +  binaryNumber[i-1] *2 + binaryNumber[i] ;
       if(temp > 9)
            hexaDecimal[j++] = temp + 55;
       else
            hexaDecimal[j++] = temp + 48;
       i=i-4;
   }
   if(i==2){
        hexaDecimal[j] = binaryNumber[i-2] *4 +binaryNumber[i-1] *2 + binaryNumber[i] + 48 ;
   }
   else if(i ==1)
      hexaDecimal[j] = binaryNumber[i-1] *2 + binaryNumber[i] + 48 ;
   else if(i==0)
      hexaDecimal[j] =  binaryNumber[i] + 48 ;
    else
      --j;

   while(j>=0){
      printf("%c",hexaDecimal[j--]);


   }
return 0;
}
