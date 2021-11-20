#include "mainTask.h"

mainTask::mainTask(/* args */)
{
}

mainTask::~mainTask()
{
}

static void mainTask::mainTaskLoop(void *pvParameters)
{
    configASSERT(((uint32_t)pvParameters) == 1);

    while (1)
    {
        Serial.write("deneme");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}