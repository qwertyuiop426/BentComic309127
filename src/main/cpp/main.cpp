#include <jni.h>
#include <vector>
#include <GLES3/gl32.h>
#include <android/log.h>
#include <string>

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "LodMod", __VA_ARGS__)

extern "C" JNIEXPORT void JNICALL
Java_com_example_lodmod_NativeRenderer_renderLODs(JNIEnv* env, jobject thiz, jfloatArray jModelView, jfloatArray jProjection) {
    LOGE("renderLODs called (C++ stub)");
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_lodmod_NativeRenderer_queueChunkForLOD(JNIEnv* env, jobject thiz, jint chunkX, jint chunkZ, jshortArray jBlockIds) {
    LOGE("queueChunkForLOD called for chunk %d, %d", chunkX, chunkZ);
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_lodmod_NativeRenderer_onContextLost(JNIEnv* env, jobject thiz) {
    LOGE("onContextLost called");
}
