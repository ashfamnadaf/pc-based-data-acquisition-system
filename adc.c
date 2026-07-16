#include <LPC21xx.H>
 #include"header.h"
 void adc_init(void)
 {
 PINSEL1|=0x15400000;
 ADCR=0x00200400;
 }
 #define DONE ((ADDR>>31)&1)
 u32 adc_read(s32 ch_num)
 {
 u32 res=0;
 ADCR|=(1<<ch_num);
 ADCR|=(1<<24);
 while(DONE==0);
 ADCR^=(1<<24);
 ADCR^=(1<<ch_num);
 res=(ADDR>>6)&0x3FF;
 return res;
 }
