/*
  Copyright (c) 2016 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  
*/

#ifndef __BLEADVERTISEMENT_H
#define __BLEADVERTISEMENT_H

#include <stdint.h>
#include "ble_gap.h"

class BLEAdvertisement {
public:
	BLEAdvertisement(void);

	bool setFlags(uint8_t bleAdvFlags);
    bool setLocalName(const char* localName);
    bool setAppearance(uint16_t appearance);
    bool setAdvertisedServiceData(const char* serviceDataUuid, uint8_t* serviceData, uint8_t serviceDataLength);
    bool setAdvertisedServiceUuid(const BLEUuid &uuid);
	bool setTxPower(int8_t txPower);
	void enableScanResponse(bool enable);
    void debugPrintAdvPacket(char *msg);

protected:
    void pushAdvPacketsToSD(void);
    
private:
    bool updateFieldInPackets(uint8_t adType, const uint8_t *data, int dataLength);
    void addFieldToPacket(uint8_t *advPacket, uint8_t adType, const uint8_t *data, int dataLength);
    bool extendFieldInPacket(uint8_t *advPacket, uint8_t adType, const uint8_t *data, int dataLength);
    int availableBytes(uint8_t *advPacket);
    int lastByteInPacket(uint8_t *advPacket);
    int bytesFree(uint8_t *advPacket);
    int adTypePresent(const uint8_t *advPacket, uint8_t adType);
    
	bool    mScanResponseEnabled;
    uint8_t mAdvPacket[BLE_GAP_ADV_MAX_SIZE + 1];
    uint8_t mScanRspPacket[BLE_GAP_ADV_MAX_SIZE + 1];
};

#endif