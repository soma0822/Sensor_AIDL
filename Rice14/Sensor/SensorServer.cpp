#define LOG_TAG "sensor_cpp"

#include <stdlib.h>
#include <utils/RefBase.h>
#include <utils/Log.h>
#include <binder/TextOutput.h>
#include <binder/IInterface.h>
#include <binder/IBinder.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>

#include "com/ISensor.h"
#include "com/BnSensor.h"

using namespace android;

class ISensorServer : public com::BnSensor
{
public:
    binder::Status getSensorData(::com::SensorData* sensorData, int32_t* _aidl_return) override
    {
        ALOGI("getSensorData");
        sensorData->sensorValues = 99.0f;
        *_aidl_return = 1;
        ALOGI("sensorData: %f", sensorData->sensorValues);
        return binder::Status();
    }
};

int main(int argc, char const *argv[])
{
    defaultServiceManager()->addService(String16("ISensor"), new ISensorServer());
    ProcessState::self()->startThreadPool();
    IPCThreadState::self()->joinThreadPool();
    return 0;
}