#include <jni.h>
#include "engine.h"
#include "layout.h"

JNIEXPORT void JNICALL Java_org_dqm_engine_EngineActivity_reset(JNIEnv *env, jclass cls) { engine_reset(); }
JNIEXPORT void JNICALL Java_org_dqm_engine_EngineActivity_resumeEngine(JNIEnv *env, jclass cls, jboolean active) { engine_resume(active); }
JNIEXPORT void JNICALL Java_org_dqm_engine_EngineActivity_surface(JNIEnv *env, jclass cls, jint role, jint token, jboolean ready) { engine_surface(role, token, ready); }
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_step(JNIEnv *env, jclass cls, jint elapsed) { return engine_step(0, elapsed); }
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_snapshot(JNIEnv *env, jclass cls, jint field) { return engine_snapshot(field); }
JNIEXPORT void JNICALL Java_org_dqm_engine_EngineActivity_button(JNIEnv *env, jclass cls, jint which, jboolean down) { engine_button(which, down); }
JNIEXPORT void JNICALL Java_org_dqm_engine_EngineActivity_axis(JNIEnv *env, jclass cls, jint x, jint y) { engine_axis(x, y); }
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_touch(JNIEnv *env, jclass cls, jint role, jint width, jint height, jint x, jint y, jboolean down) { return engine_touch(role, width, height, x, y, down); }
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_rect(JNIEnv *env, jclass cls, jint role, jint view, jint width, jint height, jint field) {
    EngineRect rect;
    engine_rect(role, view, width, height, &rect);
    if (field == 0) return rect.left;
    if (field == 1) return rect.top;
    if (field == 2) return rect.width;
    return field == 3 ? rect.height : 0;
}
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_request(JNIEnv *env, jclass cls, jstring path) {
    const char *text;
    int handle;
    if (!path) return 0;
    text = (*env)->GetStringUTFChars(env, path, (jboolean *)0);
    if (!text) return 0;
    handle = engine_request(text);
    (*env)->ReleaseStringUTFChars(env, path, text);
    return handle;
}
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_claim(JNIEnv *env, jclass cls) { return engine_claim(); }
JNIEXPORT jstring JNICALL Java_org_dqm_engine_EngineActivity_path(JNIEnv *env, jclass cls, jint handle) {
    const char *value = engine_path(handle);
    return value ? (*env)->NewStringUTF(env, value) : (jstring)0;
}
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_complete(JNIEnv *env, jclass cls, jint handle, jbyteArray data) {
    jbyte *bytes;
    int result;
    int size = data ? (*env)->GetArrayLength(env, data) : 0;
    if (size <= 0 || size > 65536) return engine_complete(handle, (const EngineByte *)0, 0);
    bytes = (*env)->GetByteArrayElements(env, data, (jboolean *)0);
    if (!bytes) return 0;
    result = engine_complete(handle, (const EngineByte *)bytes, size);
    (*env)->ReleaseByteArrayElements(env, data, bytes, JNI_ABORT);
    return result;
}
JNIEXPORT jbyteArray JNICALL Java_org_dqm_engine_EngineActivity_checkpoint(JNIEnv *env, jclass cls) {
    EngineByte bytes[28];
    jbyteArray result;
    if (engine_checkpoint(bytes, 28) != 28) return (jbyteArray)0;
    result = (*env)->NewByteArray(env, 28);
    if (result) (*env)->SetByteArrayRegion(env, result, 0, 28, (const jbyte *)bytes);
    return result;
}
JNIEXPORT jboolean JNICALL Java_org_dqm_engine_EngineActivity_restore(JNIEnv *env, jclass cls, jbyteArray data) {
    EngineByte bytes[28];
    if (!data || (*env)->GetArrayLength(env, data) != 28) return JNI_FALSE;
    (*env)->GetByteArrayRegion(env, data, 0, 28, (jbyte *)bytes);
    if ((*env)->ExceptionCheck(env)) return JNI_FALSE;
    return engine_restore(bytes, 28) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_layoutCount(JNIEnv *env, jclass cls) { return engine_layout_count(); }
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_layoutSize(JNIEnv *env, jclass cls, jint field) { return engine_layout_size(field); }
JNIEXPORT jint JNICALL Java_org_dqm_engine_EngineActivity_layoutValue(JNIEnv *env, jclass cls, jint pane, jint field) { return engine_layout_value(pane, field); }
