/*	Ultra wide band configuration
 *
 * Author: Aussman IDDIR
   Copyright
*/
#include <stdint.h>

#define BLE_FREQUENCY (2.4)
#define PROTOCOL_VERSION (0x100)
#define DERIVATION (1)
#define INTERFACE_BOX_CANID (0x1A1)
#define HUB_CANID (0x11)
#define CHANNEL_DEFAULT (5)
#define CHANNEL_ASIA (9)

#define DEV_ASSERT(x) DevAssert(x)

#define dbgCheck(x) DEV_ASSERT(x)


void setChannel(uint8_t channel){


}
	
void setUwbTxPower(uint8_t TxPower){

}
void resetChannel(uint8_t channel){

    
}
