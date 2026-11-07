#include <jni.h>
#include "texture.h"

JNIEXPORT jboolean JNICALL Java_org_dqm_textures_TextureActivity_loadArchive(JNIEnv *env, jclass cls, jbyteArray data) {
    jbyte *bytes;
    int result, size = data ? (*env)->GetArrayLength(env, data) : 0;
    if (size <= 0 || size > 8388608) return JNI_FALSE;
    bytes = (*env)->GetByteArrayElements(env, data, (jboolean *)0);
    if (!bytes) return JNI_FALSE;
    result = textured_scene_load((const unsigned char *)bytes, size);
    (*env)->ReleaseByteArrayElements(env, data, bytes, JNI_ABORT);
    return result ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jintArray JNICALL Java_org_dqm_textures_TextureActivity_framePixels(JNIEnv *env, jclass cls) {
    jintArray result;
    if (!textured_scene_stat(14)) return (jintArray)0;
    result = (*env)->NewIntArray(env, 320 * 240);
    if (result) (*env)->SetIntArrayRegion(env, result, 0, 320 * 240, (const jint *)textured_scene_pixels());
    return result;
}

JNIEXPORT jint JNICALL Java_org_dqm_textures_TextureActivity_sceneStat(JNIEnv *env, jclass cls, jint field) { return textured_scene_stat(field); }
