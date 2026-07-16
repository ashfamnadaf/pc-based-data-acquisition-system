#include<LPC21xx.H>
#include"header.h"
#define CS0 (1<<7)
void spi0_init(void)
{
PINSEL0|=0x1500;
IODIR0|=CS0;
IOSET0=(1<<7);
S0SPCR=0x20;
S0SPCCR=150;
}

//SPI0 TRANSFER FUCNTION
#define SPIF ((S0SPSR>>7)&1)
u8 spi0(u8 data)
{
S0SPDR=data;
while(SPIF==0);
return S0SPDR;
}
