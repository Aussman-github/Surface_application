#include <stdio.h>
#include <stdint.h>

#define FRONT_ZONE (1)
#define LEFT_ZONE (2)
#define BACK_ZONE (3)
#define RIGHT_ZONE (4)
#define FRONT_LEFT (5)
#define FRONT_RIGHT (6)
#define BACK_LEFT (7)
#define BACK_RIGHT (8)

#define LOCATION_ENGINE (1)

#ifndef
#define ENABLE_BLE (1)
#define BLE_MSG_LENGTH (8)
#endif

/* static variables */
void sendBleMsg(void);
static uint32_t counter;
static uint32_t counter2;
static uint8_t BleMsg[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
static uint8_t BleMsgAdvertising[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
static uint8_t BleMsgAdvertising2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}
static char BLEDeviceName[]= {"PAAK-Hub"};

int main(int argc, char *argv[]){ 
    
    
    
    
    
    
    return 0;
}


void sendBleMsg(void){


}