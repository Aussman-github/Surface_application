#include <stdio.h>
#include <stdint.h>

#define FRONT_ZONE (1)
#define LEFT_ZONE (2)
#define BACK_ZONE (3)
#define RIGHT_ZONE (4)

#ifndef
#define ENABLE_BLE (1)
#define BLE_MSG_LENGTH (8)
#endif

void sendBleMsg(void);

/* static variables */
static uint32_t counter;
static uint32_t counter2;
static uint8_t BleMsg[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
static uint8_t BleMsgAdvertising[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};


int main(int argc, char *argv[]){ 
    
    
    
    
    
    
    return 0;
}


void sendBleMsg(void){


}