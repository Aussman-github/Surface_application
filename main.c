/* 
    main.c file
    author: Aussman IDDIR
    Copyright

*/

#include <stdio.h>
#include <stdint.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

#define FRONTNORELOCK_ZONE (1)
#define LEFT_ZONE (2)
#define BACK_ZONE (3)
#define RIGHT_ZONE (4)
#define FRONT_LEFT (5)
#define FRONT_RIGHT (6)
#define BACK_LEFT (7)
#define BACK_RIGHT (8)

#define LOCATION_ENGINE_v2 (1)
#define DISCOVERABLE_DEVICE (1)
#define BMW_ONLY (1)
#define DS5_ONLY (0)
#define NISSAN_XTRAIL (0)
#define FRONT_NORELOCK (9)
#define AUDI (0)
#define VOLVO (0)
#define TESLA (0)

#ifdef UWB_ONLY
#define dbgChkPtr(x) DevAssert(x)
#endif

uint8_t strUwbSessionParam_CheckConsistency();

#ifdef CHECK_CONSISTENCY
static void checkConsistency(void);

#endif


typedef struct {
    uint8_t canId;
    uint32_t canLen;
    uint8_t CanData[8];

}strCanMsg_t;


void vidIncrement(uint32_t *number) { *number++; }

uint64_t pow2(uint64_t param1){
    return param1*param1;
}

typedef struct {
    uint8_t engine3;
    uint8_t engine3_2;

}strlocationEngine_t;


typedef struct {
    uint8_t anchorNumber;
    uint8_t anchorPower;
	uint8_t anchorId;

}anchorconfiguration;

typedef struct {
	uint8_t keyfobTxPower;
}keyfobconfiguration;


typedef struct {
    uint8_t keyfobNumber;
    uint8_t keyfobPower;

}keyfobConfiguration;

typedef struct {
    uint8_t cfg15;

}strUwbCfg_t;

void increment(uint32_t *param1)
{
    *param1 += 1;
}


uint32_t compute(uint32_t nb_a, uint32_t nb_b, uint32_t (*ptrfct2)(uint32_t, uint32_t)){
    ptrfct2(nb_a,nb_b);
}


#ifndef UWB_ONLY
#define ENABLE_BLE (1)
#define BLE_MSG_LENGTH (8)
#define BLE_MSG_PAYLOAD_LENGTH (32)
#endif

#define INITIATOR (1)
#define RESPONDER (0)
#define NUMBER_OF_ANCHORS (14)


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
static uint8_t BleMsgAdvertising2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
static char BLEDeviceName[]= {"PAAK-Hub"};
static char BLEDeviceName2[]= {"PAAK-Hub2"};
char *date = __DATE__;
char *time = __TIME__;

void runLocationEngine(void);

typedef struct{
    uint64_t nbOfAnchors;

}tstr_bmw_cfg;


typedef struct{
    uint64_t nbOfAnchors;

}tstr_DS5_cfg;

typedef struct {
	uint8_t nbOfAnchors,


}tstr_XTRAIL_cfg;

typedef float(*pOp_t)(int);

/* Define a calculate function that takes in two arguments, an integer and an operation (callback function)
 * The function should returns the result of the operation on the integer 
 */


/* All the callback functions have the same signature as the function pointer */
float cb_square(int num) {
	return num * num;
}

float cb_cube(int num) {
	return num * num*num;
}

float cb_square_root(int num) {
	return sqrt(num);
}

float calculate(int num, pOp_t op) {
	return op(num);
}






int main(int argc, char *argv[]){ 
	uint32_t (*ptrfct)(uint32_t, uint32_t);
	uint32_t (*ptrfct2)(uint32_t, uint32_t);

	uint32_t n, i, *ptr, sum = 0;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	ptr = (uint32_t)malloc(n * sizeof(uint32_t));

	// If memory cannot be allocated
	if (ptr == NULL) {
		printf("Memory not allocated");
		exit(0);
	}

	printf("Enter elements: ");
	for (i = 0; i < n; ++i) {
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	
	printf("Sum = %d, sum");

	// Deallocating the memory
	free(ptr);

	printf("Square of 5 is %f\n", calculate(5, cb_squre));
    
    
    
    
    return 0;
}

