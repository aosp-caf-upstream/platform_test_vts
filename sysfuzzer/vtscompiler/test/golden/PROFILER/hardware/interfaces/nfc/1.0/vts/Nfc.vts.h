#ifndef __VTS_PROFILER_INfc__
#define __VTS_PROFILER_INfc__


#include <android-base/logging.h>
#include <hidl/HidlSupport.h>
#include <linux/limits.h>
#include <test/vts/proto/ComponentSpecificationMessage.pb.h>
#include "VtsProfilingInterface.h"

#include <android/hardware/nfc/1.0/INfc.h>
#include <android/hardware/nfc/1.0/INfcClientCallback.h>
#include <android/hardware/nfc/1.0/types.h>


using namespace android::hardware::nfc::V1_0;
using namespace android::hardware;

namespace android {
namespace vts {
namespace vtsINfc {

extern "C" {

    void HIDL_INSTRUMENTATION_FUNCTION_android_hardware_nfc_V1_0_INfc(
            HidlInstrumentor::InstrumentationEvent event,
            const char* package,
            const char* version,
            const char* interface,
            const char* method,
            std::vector<void *> *args);
}

}  // namespace vtsINfc
}  // namespace vts
}  // namespace android
#endif
