#ifndef AIDL_GENERATED_COM_I_SENSOR_H_
#define AIDL_GENERATED_COM_I_SENSOR_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <com/SensorData.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace com {

class ISensor : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(Sensor)
  virtual ::android::binder::Status getSensorData(::com::SensorData* sensorData, int32_t* _aidl_return) = 0;
};  // class ISensor

class ISensorDefault : public ISensor {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status getSensorData(::com::SensorData* sensorData, int32_t* _aidl_return) override;

};

}  // namespace com

#endif  // AIDL_GENERATED_COM_I_SENSOR_H_
