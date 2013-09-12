/*!
\file Beacon/inc/globals.h
\brief Global values

\author Yuan Gao
*/

#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#define FIRMWARE_VERSION    1           /*!< Firmware version */
#define MESSAGE_LOOP_HZ     50          /*!< Max frequency of message loop in Hz (keep this number low, like around 25) */
#define XBEE_PANIC          3           /*!< Number of seconds after missing heartbeat from GCS before considering XBee fail */
#define GPS_PANIC           3           /*!< Number of seconds after no message from GPS before considering GPS fail */

extern volatile unsigned char allowTransmit;

extern volatile unsigned int flashVLED;
extern volatile unsigned int PRGTimer;
extern volatile unsigned char PRGLastState;
extern volatile unsigned int PRGPushTime;
extern volatile unsigned int PRGBlankTimer;

extern unsigned int sysMS;
extern unsigned long long sysUS;
extern unsigned short heartbeatWatchdog;
extern unsigned short gpsWatchdog;

#endif