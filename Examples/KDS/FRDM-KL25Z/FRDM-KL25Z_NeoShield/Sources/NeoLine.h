/*
 * NeoLine.h
 *
 *  Created on: 07.07.2014
 *      Author: tastyger
 */

#ifndef NEOLINE_H_
#define NEOLINE_H_

#include "NeoConfig.h"
#include "NeoPixel.h"

uint8_t NEOL_PixelTrail(uint8_t red, uint8_t green, uint8_t blue, NEO_PixelIdxT start, NEO_PixelIdxT end, NEO_PixelIdxT nofTail, uint8_t dimmPercent, uint16_t delayMs);

#endif /* NEOLINE_H_ */
