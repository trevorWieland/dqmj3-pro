#include <jni.h>
#include "apply_controller055.h"
#include "apply_bindings055.h"
#include "storage_fixture055.h"
#include "segments055.h"

extern const StateWord055 *state_program_layout055(void);
extern void state_program_install_storage055(void);
static _Alignas(16) struct ProbeBuffers055 {
    unsigned char prefix[32];
    unsigned char arena[0x40000];
    unsigned char suffix[32];
} buffers;
static unsigned char before[0x40000];
static StateWord055 failed;
static StateAddress055 fp_before;
static StateAddress055 fp_after;
static StateAddress055 status_before;
static StateAddress055 status_after;

static StateWord055 guards(void) {
    for (unsigned i = 0; i < 32; i++)
        if (buffers.prefix[i] != 0x39 || buffers.suffix[i] != 0x57)
            return 0;
    return 1;
}

JNIEXPORT jlongArray JNICALL Java_org_dqm_controllerprobe055_MaterialActivity_addresses(JNIEnv *env, jclass cls) {
    jlong values[18];
    (void)cls;
    values[0] = (jlong)(StateAddress055)buffers.arena;
    values[1] = guards();
    values[2] = sizeof(void *);
    values[3] = sizeof(buffers.arena);
    values[4] = sizeof(StateStorageObservation055);
    values[5] = sizeof(StateApplyContext055);
    values[6] = sizeof(StateApplySelection055);
    values[7] = sizeof(StateApplyGlobals055);
    values[8] = (jlong)(StateAddress055)state_pair055.cursor;
    values[9] = (jlong)(StateAddress055)state_pair055.limit;
    values[10] = state_apply_globals055.stage_mode;
    values[11] = state_storage_calls055;
    values[12] = (jlong)fp_before;
    values[13] = (jlong)fp_after;
    values[14] = failed;
    values[15] = 7 + SEGMENT_COUNT055;
    values[16] = (jlong)status_before;
    values[17] = (jlong)status_after;
    jlongArray result = (*env)->NewLongArray(env, 18);
    (*env)->SetLongArrayRegion(env, result, 0, 18, values);
    return result;
}

JNIEXPORT jintArray JNICALL Java_org_dqm_controllerprobe055_MaterialActivity_layout(JNIEnv *env, jclass cls) {
    (void)cls;
    jintArray result = (*env)->NewIntArray(env, 16);
    (*env)->SetIntArrayRegion(env, result, 0, 16, (const jint *)state_program_layout055());
    return result;
}

JNIEXPORT jobject JNICALL Java_org_dqm_controllerprobe055_MaterialActivity_memory(JNIEnv *env, jclass cls, jint index) {
    (void)cls;
    void *address = 0;
    jlong size = 0;
    if (index == 0) { address = buffers.arena; size = sizeof(buffers.arena); }
    if (index == 1) { address = before; size = sizeof(before); }
    if (index == 2) { address = &state_apply_globals055; size = sizeof(state_apply_globals055); }
    if (index == 3) { address = state_storage_observations055; size = sizeof(state_storage_observations055); }
    if (index == 4) { address = state_storage_context_observations055; size = sizeof(state_storage_context_observations055); }
    if (index == 5) { address = state_apply_headers055; size = sizeof(state_apply_headers055); }
    if (index == 6) { address = &state_pair055; size = sizeof(state_pair055); }
    if (index >= 7 && index < 7 + SEGMENT_COUNT055) {
        StateAddress055 base = (StateAddress055)state_program_layout055 - LAYOUT_RVA055;
        address = (void *)(base + segment_address055[index - 7]);
        size = (jlong)segment_size055[index - 7];
    }
    return address ? (*env)->NewDirectByteBuffer(env, address, size) : 0;
}

JNIEXPORT jint JNICALL Java_org_dqm_controllerprobe055_MaterialActivity_boot(JNIEnv *env, jclass cls, jbyteArray seed, jint capacity, jboolean provider, jintArray headers) {
    (void)cls;
    failed = 0;
    if ((*env)->GetArrayLength(env, seed) != sizeof(buffers.arena) || capacity < 0 || capacity > 8192
            || (*env)->GetArrayLength(env, headers) != 189)
        return -1;
    for (unsigned i = 0; i < 32; i++) { buffers.prefix[i] = 0x39; buffers.suffix[i] = 0x57; }
    state_apply_reset_defaults055();
    (*env)->GetByteArrayRegion(env, seed, 0, sizeof(buffers.arena), (jbyte *)buffers.arena);
    for (unsigned i = 0; i < sizeof(before); i++) before[i] = buffers.arena[i];
    state_apply_context055 = (StateApplyContext055 *)(buffers.arena + 0x1000);
    state_apply_globals055.selection = (StateSelectionCache055 *)(buffers.arena + 0x30000);
    (*env)->GetIntArrayRegion(env, headers, 0, 189, (jint *)state_apply_headers055);
    state_pair055.cursor = (StateWord055 *)(buffers.arena + 0x20000);
    state_pair055.limit = state_pair055.cursor + capacity;
    state_resource_index055 = (StateResourceIndex055 *)(buffers.arena + 0x9000);
    state_storage_calls055 = 0;
    for (unsigned i = 0; i < sizeof(state_storage_observations055); i++) ((unsigned char *)state_storage_observations055)[i] = 0;
    for (unsigned i = 0; i < 64; i++) state_storage_context_observations055[i] = 0;
    state_storage_begin055 = (StateWord055 *)(buffers.arena + 0x38000);
    state_storage_end055 = (StateWord055 *)(buffers.arena + 0x40000);
    state_storage_cursor055 = state_storage_begin055;
    state_storage_observer055 = (StateResource055 *)(buffers.arena + 0xb000);
    state_storage_context_bytes055 = buffers.arena + 0x110c;
    state_apply_storage_provider055 = 0;
    if (provider) state_program_install_storage055();
    fp_before = __builtin_arm_rsr64("fpcr");
    fp_after = fp_before;
    status_before = __builtin_arm_rsr64("fpsr");
    status_after = status_before;
    return guards() ? 0 : -2;
}

JNIEXPORT jint JNICALL Java_org_dqm_controllerprobe055_MaterialActivity_advance(JNIEnv *env, jclass cls, jint flags, jint mask, jintArray changes, jboolean clear) {
    (void)cls;
    if (fp_before & ((3ul << 22) | (1ul << 24) | (1ul << 25) | 0x9f00ul)) return -3;
    jsize count = (*env)->GetArrayLength(env, changes);
    if (count % 2 || count > 128) return -4;
    jint entries[128];
    (*env)->GetIntArrayRegion(env, changes, 0, count, entries);
    for (jsize i = 0; i < count; i += 2) {
        if (entries[i] < 0 || entries[i] > 0x3fffc || entries[i] % 4) return -5;
        *(StateWord055 *)(buffers.arena + entries[i]) = (StateWord055)entries[i + 1];
    }
    if (clear) *(void **)(buffers.arena + 0x30008) = 0;
    *(StateWord055 *)(buffers.arena + 0x100) = (StateWord055)mask;
    if (__builtin_arm_rsr64("fpcr") != fp_before) return -7;
    status_before = __builtin_arm_rsr64("fpsr");
    state_apply_controller055((const StateWord055 *)(buffers.arena + 0x100), (StateWord055)flags);
    fp_after = __builtin_arm_rsr64("fpcr");
    status_after = __builtin_arm_rsr64("fpsr");
    if (fp_after != fp_before || !guards()) failed = 1;
    return failed ? -6 : 0;
}
