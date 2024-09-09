export ANDROID_SDK_ROOT="/Users/waqar/Library/Android/sdk/"
export PATH="${ANDROID_SDK_ROOT}/build-tools/34.0.0/:$PATH"
export PATH="${ANDROID_SDK_ROOT}/tools:$PATH"
export PATH="${ANDROID_SDK_ROOT}/tools/bin:$PATH"
export PATH="${ANDROID_SDK_ROOT}/platform-tools:$PATH"

# keytool -genkeypair -validity 1000 -dname "CN=seth,O=Android,C=ES" -keystore project.keystore -storepass 'waqarshujrah' -keypass 'Eisler' -alias projectKey -keyalg RSA

../toolchain_arm_api28/bin/arm-linux -c ../raylib/src/external/android/native_app_glue/android_native_app_glue.c -o obj/native_app_glue.o -std=c99 -march=armv7-a -mfloat-abi=softfp -mfpu=vfpv3-d16 -ffunction-sections -funwind-tables -fstack-protector-strong -fPIC -Wall -Wa,--noexecstack -Wformat -Werror=format-security -no-canonical-prefixes -DANDROID -DPLATFORM_ANDROID -D__ANDROID_API__=28

# Requires: folder setup
# Creates: obj/native_app_glue.o
# Note: This gcc uses other tools in the same toolchain folder structure, don't even thing about symlinking to it.

../toolchain_arm_api28/bin/arm-linux-androideabi-ar rcs obj/libnative_app_glue.a obj/native_app_glue.o

# Requires: obj/native_app_glue.o
# Creates: obj/libnative_app_glue.a

../toolchain_arm_api28/bin/arm-linux-androideabi-gcc -c project.c -o obj/project.o -I. -I../raylib/src -I../raylib/src/external/android/native_app_glue -std=c99 -march=armv7-a -mfloat-abi=softfp -mfpu=vfpv3-d16 -ffunction-sections -funwind-tables -fstack-protector-strong -fPIC -Wall -Wa,--noexecstack -Wformat -Werror=format-security -no-canonical-prefixes -DANDROID -DPLATFORM_ANDROID -D__ANDROID_API__=28 --sysroot=../toolchain_arm_api28/sysroot

# Requires: project.c
# Creates: obj/project.o

../toolchain_arm_api28/bin/arm-linux-androideabi-gcc -o lib/armeabi-v7a/libproject.so obj/project.o -shared -I. -I../raylib/src -I../raylib/src/external/android/native_app_glue -Wl,-soname,libproject.so -Wl,--exclude-libs,libatomic.a -Wl,--build-id -Wl,--no-undefined -Wl,-z,noexecstack -Wl,-z,relro -Wl,-z,now -Wl,--warn-shared-textrel -Wl,--fatal-warnings -u ANativeActivity_onCreate -L. -Lobj -Llib/armeabi-v7a -lraylib -lnative_app_glue -llog -landroid -lEGL -lGLESv2 -lOpenSLES -latomic -lc -lm -ldl

# Requires: obj/project.o
# Creates: lib/armeabi-v7a/libproject.so

aapt package -f -m -S res -J src -M AndroidManifest.xml -I ${ANDROID_SDK_ROOT}/platforms/android-34/android.jar

# Requires: AndroidManifest.xml, res/
# Creates: src/com/seth/project/R.java

javac -verbose -source 1.7 -target 1.7 -d obj -bootclasspath `/usr/libexec/java_home`/jre/lib/rt.jar -classpath ${ANDROID_SDK_ROOT}/platforms/android-28/android.jar:obj -sourcepath src src/com/shujrah/spaceinvaders/R.java src/com/shujrah/spaceinvaders/NativeLoader.java

# Requires: src/com/seth/project/R.java, src/com/seth/project/NativeLoader.java
# Creates: obj/com/seth/project/NativeLoader.class ... R&attr.class R$string.class R.class 

dx --verbose --dex --output=dex/classes.dex obj

# Requires: obj/com/seth/project/NativeLoader.class ... R&attr.class R$string.class R.class 
# Creates: dex/classes.dex

aapt package -f -M AndroidManifest.xml -S res -A assets -I ${ANDROID_SDK_ROOT}/platforms/android-28/android.jar -F project.unsigned.apk dex

# Creates: project.unsigned.apk
# Note: The "dex" at the end is the directory the classes.dex file is in! This folder can not contain the manifest file for whatever reason.

aapt add project.unsigned.apk lib/armeabi-v7a/libproject.so

# Does: Adds shared library to apk

jarsigner -keystore project.keystore -storepass mypass -keypass mypass -signedjar project.signed.apk project.unsigned.apk projectKey

# Does: Signs

zipalign -f 4 project.signed.apk project.apk

# Does: Aligns

adb install -r project.apk

# Does: install
