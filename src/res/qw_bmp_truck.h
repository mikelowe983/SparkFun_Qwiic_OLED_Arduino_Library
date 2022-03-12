

#pragma once


#include "qwiic_resdef.h"

class QwBMPTruck final : public bmpSingleton<QwBMPTruck> {

public:
	const uint8_t * data(void){

#include "_bmp_truck.h"

		return bmp_truck_data;
	}

	QwBMPTruck(): bmpSingleton<QwBMPTruck>(BMP_TRUCK_WIDTH, BMP_TRUCK_HEIGHT){}

};

#define QW_BMP_TRUCK QwBMPTruck::instance()