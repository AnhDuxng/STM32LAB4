/*
 * scheduler.h
 *
 *  Created on: Nov 27, 2023
 *      Author: anhdu
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#define SCH_MAX_TASKS 40

#include "main.h"
#include "led_display.h"
#include "stdint.h"

void SCH_Add_Task (void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Delete_Task(const unsigned int TASK_INDEX);
void SCH_Testing();
void SCH_Init();
void SCH_MakePlaceForNewTask(uint8_t pos);

#endif /* INC_SCHEDULER_H_ */
