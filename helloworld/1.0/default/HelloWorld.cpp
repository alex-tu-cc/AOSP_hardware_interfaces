// FIXME: your file license if you have one

#include "HelloWorld.h"

namespace android {
namespace hardware {
namespace helloworld {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::helloworld::V1_0::IHelloWorld follow.
Return<void> HelloWorld::justTest(const hidl_string& name, justTest_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<void> HelloWorld::justTest1(::android::hardware::helloworld::V1_0::HelloTest name) {
    // TODO implement
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IHelloWorld* HIDL_FETCH_IHelloWorld(const char* /* name */) {
    //return new HelloWorld();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace helloworld
}  // namespace hardware
}  // namespace android
