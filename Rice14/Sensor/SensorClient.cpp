#define LOG_TAG "sensor_cpp"

#include <utils/Log.h>
#include <binder/IServiceManager.h>
#include "com/ISensor.h"

using namespace android;
using com::ISensor;

int main(int argc, char const *argv[])
{
    // サービスマネージャーからIHelloサービスのバインダーを取得
    sp<IBinder> binder = defaultServiceManager()->getService(String16("ISensor"));
    if (binder == nullptr) {
        ALOGE("Failed to get ISensor service binder");
        return -1;
    }

    // IHelloインターフェースを取得
    sp<ISensor> Sensor = interface_cast<ISensor>(binder);
    if (Sensor == nullptr) {
        ALOGE("Failed to get ISensor interface");
        return -1;
    }

    // サービスのhelloメソッドを呼び出し
    com::SensorData sensorData;
    int32_t result;
    Sensor->getSensorData(&sensorData, &result);
    ALOGI("sensorData: %f", sensorData.sensorValues);
    return 0;
}
