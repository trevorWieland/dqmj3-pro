#include <jni.h>
#include "component.h"

JNIEXPORT jboolean JNICALL Java_org_dqm_constructed_MaterialActivity_reset(JNIEnv *env, jclass cls, jobject memory) {
    void *address;
    jlong capacity;
    component_reset();
    if (!memory) return JNI_FALSE;
    address = (*env)->GetDirectBufferAddress(env, memory);
    capacity = (*env)->GetDirectBufferCapacity(env, memory);
    return capacity >= 16 && capacity <= 1048576 && component_allocator(address, (int)capacity) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT void JNICALL Java_org_dqm_constructed_MaterialActivity_resumeEngine(JNIEnv *env, jclass cls, jboolean active) { component_resume(active); }
JNIEXPORT void JNICALL Java_org_dqm_constructed_MaterialActivity_surface(JNIEnv *env, jclass cls, jint role, jint token, jboolean ready) { component_surface(role, token, ready); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_request(JNIEnv *env, jclass cls) { return component_request("assets/scene.arc"); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_claim(JNIEnv *env, jclass cls) { return component_claim(); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_complete(JNIEnv *env, jclass cls, jint handle, jbyteArray data) {
    jbyte *bytes;
    int result, size = data ? (*env)->GetArrayLength(env, data) : 0;
    if (size <= 0 || size > 8388608) return component_complete(handle, (const unsigned char *)0, 0);
    bytes = (*env)->GetByteArrayElements(env, data, (jboolean *)0);
    if (!bytes) return 0;
    result = component_complete(handle, (const unsigned char *)bytes, size);
    (*env)->ReleaseByteArrayElements(env, data, bytes, JNI_ABORT);
    return result;
}
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_sceneStat(JNIEnv *env, jclass cls, jint view, jint field) { return component_scene_stat(view, field); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_state(JNIEnv *env, jclass cls, jint field) { return component_state(field); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_rect(JNIEnv *env, jclass cls, jint role, jint view, jint width, jint height, jint field) { return component_rect(role, view, width, height, field); }
JNIEXPORT void JNICALL Java_org_dqm_constructed_MaterialActivity_button(JNIEnv *env, jclass cls, jint which, jboolean down) { component_button(which, down); }
JNIEXPORT void JNICALL Java_org_dqm_constructed_MaterialActivity_axis(JNIEnv *env, jclass cls, jint x, jint y) { component_axis(x, y); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_touch(JNIEnv *env, jclass cls, jint role, jint width, jint height, jint x, jint y, jboolean down) { return component_touch(role, width, height, x, y, down); }
JNIEXPORT jint JNICALL Java_org_dqm_constructed_MaterialActivity_step(JNIEnv *env, jclass cls, jint elapsed) { return component_step(0, elapsed); }
JNIEXPORT jintArray JNICALL Java_org_dqm_constructed_MaterialActivity_pixels(JNIEnv *env, jclass cls, jint view) {
    jintArray result;
    const unsigned int *pixels = component_pixels(view);
    if (!pixels || !component_scene_stat(view, 14)) return (jintArray)0;
    result = (*env)->NewIntArray(env, 320 * 240);
    if (result) (*env)->SetIntArrayRegion(env, result, 0, 320 * 240, (const jint *)pixels);
    return result;
}
