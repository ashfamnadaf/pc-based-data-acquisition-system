#include<LPC21xx.H>
#include"header.h"
#define CS0 (1<<7)
u16 mcp3204_adc_read(u8 ch_num)
{
u16 result=0;
u8 byteH=0,channel1=0,byteL;
channel1=(ch_num<<6);						
IOCLR0=CS0;
spi0(0x06);
byteH=spi0(channel1);
byteL=spi0(0x00);
IOSET0=CS0;
byteH&=0x0F ;
result=(byteH<<8);
return result;
}
