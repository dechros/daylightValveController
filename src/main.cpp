#include "MainTask/MainTask.h"

void setup()
{
    mainTask main;
    Serial.begin(9600);
    BaseType_t xReturned;
    TaskHandle_t xMainTaskHandle = NULL;

    xReturned = xTaskCreate(mainTask::mainTaskLoop, "NAME", 2048, (void *)1, tskIDLE_PRIORITY, &xMainTaskHandle);

    if (xReturned == pdPASS)
    {
        vTaskStartScheduler();
    }
    else
    {
        while (1)
        {
            /* Error. Needs restart. */
        }
    }
}

void loop()
{
    /* No need to use this loop while using RTOS. */
}