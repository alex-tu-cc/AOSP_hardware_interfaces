#! /bin/bash
# refer to https://blog.csdn.net/shift_wwx/article/details/86525079
PACKAGE=android.hardware.helloworld@1.0
LOC=$ANDROID_BUILD_TOP/hardware/interfaces/helloworld/1.0/default/

hidl-gen -o $LOC -Lc++-impl -randroid.hardware:hardware/interfaces \
-randroid.hidl:system/libhidl/transport $PACKAGE
hidl-gen -o $LOC -Landroidbp-impl -randroid.hardware:hardware/interfaces \
-randroid.hidl:system/libhidl/transport $PACKAGE
