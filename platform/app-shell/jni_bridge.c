#include <jni.h>
#include "shell.h"

JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeReset(JNIEnv *env, jclass cls) { shell_reset(); }
JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeResume(JNIEnv *env, jclass cls, jboolean active) { shell_resume(active); }
JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeSurface(JNIEnv *env, jclass cls, jint role, jint token, jboolean ready) { shell_surface(role, token, ready); }
JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeTick(JNIEnv *env, jclass cls, jint owner) { shell_step(owner); }
JNIEXPORT jint JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeSnapshot(JNIEnv *env, jclass cls, jint field) { return shell_snapshot(field); }
JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeRestore(JNIEnv *env, jclass cls, jint ticks) { shell_restore(ticks); }
JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeButton(JNIEnv *env, jclass cls, jint button, jboolean down) { shell_button(button, down); }
JNIEXPORT void JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeAxis(JNIEnv *env, jclass cls, jint x, jint y) { shell_axis(x, y); }
JNIEXPORT jint JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeSmoke(JNIEnv *env, jclass cls) { return shell_smoke(); }
JNIEXPORT jlong JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeTouch(JNIEnv *env, jclass cls, jint role, jint x, jint y, jint width, jint height) { return shell_touch(width, height, role, x, y); }

JNIEXPORT jint JNICALL Java_org_dqm_diagnostics_ShellActivity_nativeRect(JNIEnv *env, jclass cls, jint role, jint view, jint width, jint height, jint component) {
    ShellRect rect;
    shell_rect(width, height, role, view, !!(shell_snapshot(7) & 2), &rect);
    switch (component) {
    case 0: return rect.left;
    case 1: return rect.top;
    case 2: return rect.width;
    case 3: return rect.height;
    default: return 0;
    }
}
