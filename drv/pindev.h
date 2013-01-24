/*
 * SPI2UART program for HT45B0F
 *
 * Wrote by Michael Li
 * QQ:13458499
 * Mail: michael_li@dspa.com.tw
 *
 */
#ifndef _PIN_DRIVER_H
#define _PIN_DRIVER_H


typedef struct
{
    int  iPin;
    int  iVal;
} ST_GPIO;


#define DSPG_PORT_IOC_MAGIC	'k'
#define DSPG_GPIOA_WRITE        _IOWR(DSPG_PORT_IOC_MAGIC,1,ST_GPIO)
#define DSPG_GPIOB_WRITE        _IOWR(DSPG_PORT_IOC_MAGIC,2,ST_GPIO)
#define DSPG_GPIOC_WRITE        _IOWR(DSPG_PORT_IOC_MAGIC,3,ST_GPIO)
#define DSPG_GPIOA_SYSMUX       _IOWR(DSPG_PORT_IOC_MAGIC,4,ST_GPIO)
#define DSPG_GPIOB_SYSMUX       _IOWR(DSPG_PORT_IOC_MAGIC,5,ST_GPIO)
#define DSPG_GPIOC_SYSMUX       _IOWR(DSPG_PORT_IOC_MAGIC,6,ST_GPIO)
#define DSPG_GPIOA_SYSPAD       _IOWR(DSPG_PORT_IOC_MAGIC,7,ST_GPIO)
#define DSPG_GPIOB_SYSPAD       _IOWR(DSPG_PORT_IOC_MAGIC,8,ST_GPIO)
#define DSPG_GPIOC_SYSPAD       _IOWR(DSPG_PORT_IOC_MAGIC,9,ST_GPIO)
#define DSPG_GPIOA_READ         _IOWR(DSPG_PORT_IOC_MAGIC,10,ST_GPIO)
#define DSPG_GPIOB_READ         _IOWR(DSPG_PORT_IOC_MAGIC,11,ST_GPIO)
#define DSPG_GPIOC_READ         _IOWR(DSPG_PORT_IOC_MAGIC,12,ST_GPIO)

#endif

