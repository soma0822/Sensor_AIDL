#ifndef AIDL_GENERATED_COM_BP_SENSOR_H_
#define AIDL_GENERATED_COM_BP_SENSOR_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/ISensor.h>

namespace com {

class BpSensor : public ::android::BpInterface<ISensor> {
public:
  explicit BpSensor(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpSensor() = default;
  ::android::binder::Status getSensorData(::com::SensorData* sensorData, int32_t* _aidl_return) override;
};  // class BpSensor

}  // namespace com

#endif  // AIDL_GENERATED_COM_BP_SENSOR_H_
