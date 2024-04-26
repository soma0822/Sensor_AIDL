#ifndef AIDL_GENERATED_COM_BN_SENSOR_H_
#define AIDL_GENERATED_COM_BN_SENSOR_H_

#include <binder/IInterface.h>
#include <com/ISensor.h>

namespace com {

class BnSensor : public ::android::BnInterface<ISensor> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnSensor

}  // namespace com

#endif  // AIDL_GENERATED_COM_BN_SENSOR_H_
