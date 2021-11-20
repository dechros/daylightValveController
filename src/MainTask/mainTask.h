#ifndef MAIN_TASK_H
#define MAIN_TASK_H

#include <Arduino.h>
#include <Arduino_FreeRTOS.h>

class mainTask
{
private:
    /* data */
public:
    /**
     * @brief Construct a new Main Task object
     * 
     */
    mainTask();

    /**
     * @brief Destroy the Main Task object
     * 
     */
    ~mainTask();

    /**
     * @brief Main task loop
     * 
     * @param pvParameters 
     */
    static void mainTaskLoop(void *pvParameters);
};

#endif