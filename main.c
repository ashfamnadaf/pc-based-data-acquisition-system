#include <LPC21xx.H>
#include "header.h";
main()
{
u32 pot,adval;
u16 temp;
float vtg,vout,a,temp1;
int tempr;
adc_init();
uart0_init(9600);
spi0_init();
while(1)
{
//---------------------------pressure--------------------------------------------//
pot=adc_read(2);
v=(pot*3.3)/1023;
uart0_tx_string("\r\nP:");
uart0_int(pot);
uart0_tx(' ');
uart0_float(v);
uart0_tx_string("kPa");
delay_ms(100);
//----------------------------temperature--------------------------------------------//
adcval=adc_read(1);
vout=(adcval*3.3)/1023;
tempr=(vout-0.5)/0.01;
uart0_tx_string("\r\nT:");
uart0_int(tempr);
uart0_tx('C');
delay_ms(100);
//--------------------------light_intensity-------------------------------------------//
temp=adc_read(2);
temp1=temp;
a=(((4095-temp1)/4095))*100;
uart0_tx_string("\r\nL:");
uart0_float(a);
uart0_tx('%');
delay_ms(100);
uart0_tx_string("\r\n");

}
}
