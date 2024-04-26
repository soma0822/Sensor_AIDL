#ifndef AIDL_GENERATED_COM_SENSOR_DATA_H_
#define AIDL_GENERATED_COM_SENSOR_DATA_H_

#include <binder/Parcel.h>
#include <binder/Status.h>

namespace com {

class SensorData : public ::android::Parcelable {
public:
  float sensorValues;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class SensorData

}  // namespace com

#endif  // AIDL_GENERATED_COM_SENSOR_DATA_H_
