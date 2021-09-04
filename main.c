/* 
    main.c file
    author: Aussman IDDIR
    Copyright

*/

#include <stdio.h>
#include <stdint.h>

#define FRONTNORELOCK_ZONE (1)
#define LEFT_ZONE (2)
#define BACK_ZONE (3)
#define RIGHT_ZONE (4)
#define FRONT_LEFT (5)
#define FRONT_RIGHT (6)
#define BACK_LEFT (7)
#define BACK_RIGHT (8)

#define LOCATION_ENGINE_V1 (1)
#define DISCOVERABLE_DEVICE (1)
#define BMW_ONLY (1)
#define DS5_ONLY (0)
#define XTRAIL (0)
#define FRONT_NORELOCK (9)
#define AUDI (0)
#define VOLVO (0)
#define TESLA (0)

#define dbgChkPtr(x) DevAssert(x)

#define increment(x) 
uint8_t strUwbSessionParam_CheckConsistency();

typedef struct {
    uint8_t canId;
    uint32_t canLen;
    uint8_t CanData[8];

}strCanMsg_t;


void vidIncrement(uint32_t *number) { *number++ };

uint64_t pow(uint32_t x){
    return x*x;
}

typedef struct {
    uint8_t engine3;
    uint8_t engine3_2;

}strlocationEngine_t;


typedef struct {
    uint8_t anchorNumber;
    uint8_t anchorPower;

}anchorconfiguration;


typedef struct {
    uint8_t keyfobNumber;
    uint8_t keyfobPower;

}keyfobConfiguration;

typedef struct {
    uint8_t cfg15;

}strUwbCfg_t;

void increment(uint32_t *x){
    *x += 1;
}



#ifndef
#define ENABLE_BLE (1)
#define BLE_MSG_LENGTH (8)
#define BLE_MSG_PAYLOAD_LENGTH (32)
#endif

#define INITIATOR (1)
#define RESPONDER (0)
#define NUMBER_OF_ANCHORS (10)


/* Function prototypes */
void Mcp_Log(char *buffer);

/* UWB Session parameters negociation*/
static uint8_t syncCode;
static uint8_t protocolVersion;
static uint8_t UwbChannel;
static uint8_t radioconfigs;

/* static variables */
void sendBleMsg(void);
static uint32_t counter;
static uint32_t counter2;
static uint8_t BleMsg[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
static uint8_t BleMsgAdvertising[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
static uint8_t BleMsgAdvertising2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}
static char BLEDeviceName[]= {"PAAK-Hub"};
static char BLEDeviceName[]= {"PAAK-Hub2"};

void runLocationEngine(void);

typedef struct{
    uint64_t nbOfAnchors;

}tstr_bmw_cfg;


typedef struct{
    uint64_t nbOfAnchors;

}tstr_DS5_cfg;

int main(int argc, char *argv[]){ 
    
    
    
    
    
    
    return 0;
}


void sendBleMsg(char *buffer){


}


void Mcp_Log(){


}
