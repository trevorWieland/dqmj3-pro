#include "effect_queue067_source_fixture.c"
#include <jni.h>

extern const QueueWinApi067 *effect_queue_android_api067(void);
extern int effect_queue_android_reset067(void);
extern unsigned int effect_queue_android_live_handles067(void);
extern __SIZE_TYPE__ effect_queue_android_stack067(void);

static unsigned char image067[2048];
static unsigned char opaque067[70][128];
static EffectQueueManager067 *manager067;
static EffectQueueWorker067 *worker067;
static const unsigned short path067[] = {'r','o','m',':','/','d','a','t','a','/','E','f','f','e','c','t','/',
    'e','f','0','0','0','0','7','.','p','e','f',0};

JNIEXPORT jint JNICALL Java_org_dqm_queueprobe067_QueueActivity_boot(JNIEnv *env, jclass type, jbyteArray input)
{
    (void)type;
    if ((*env)->GetArrayLength(env, input) != sizeof(image067) || !effect_queue_android_reset067())
        return -1;
    (*env)->GetByteArrayRegion(env, input, 0, sizeof(image067), (jbyte *)image067);
    for (unsigned int index = 0; index < sizeof(opaque067); ++index)
        ((unsigned char *)opaque067)[index] = 0xa5;
    for (__SIZE_TYPE__ index = 0; index < sizeof(graph_fixture065); ++index)
        ((unsigned char *)&graph_fixture065)[index] = 0xa5;
    effect_graph_fixture_reset065(0, 0, 0xa5);
    effect_graph_fixture_image065(image067, sizeof(image067));
    effect_graph_fixture_bind065();
    effect_owner_fixture_reset065(0, 0xa5);
    effect_request_fixture_bind066();
    effect_request_device_prepare066(image067, sizeof(image067), path067 + 4);
    effect_request_source_files_bind066();
    effect_queue_fixture_initialize067(1, effect_queue_android_api067());
    effect_request_trace_files067();
    manager067 = effect_queue_fixture_manager_allocate067();
    if (effect_queue_manager_construct067(manager067) != manager067 || !manager067->worker)
        return -2;
    worker067 = manager067->worker;
    return 0;
}

JNIEXPORT jlong JNICALL Java_org_dqm_queueprobe067_QueueActivity_enqueue(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    EffectRequestTask066 *task = effect_queue_request_async067(manager067, path067, 5, &request_heap066, 128);
    return (jlong)(__UINTPTR_TYPE__)task;
}

JNIEXPORT jint JNICALL Java_org_dqm_queueprobe067_QueueActivity_step(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    return (jint)effect_queue_fixture_native_step067();
}

JNIEXPORT jint JNICALL Java_org_dqm_queueprobe067_QueueActivity_ready(JNIEnv *env, jclass type, jlong identity)
{
    (void)env;
    (void)type;
    return effect_request_ready066((EffectRequestTask066 *)(__UINTPTR_TYPE__)identity);
}

JNIEXPORT void JNICALL Java_org_dqm_queueprobe067_QueueActivity_release(JNIEnv *env, jclass type, jlong identity)
{
    (void)env;
    (void)type;
    effect_request_destroy066((EffectRequestTask066 *)(__UINTPTR_TYPE__)identity);
}

JNIEXPORT void JNICALL Java_org_dqm_queueprobe067_QueueActivity_pushOpaque(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    for (unsigned int index = 0; index < 70; ++index)
        effect_queue_push067(worker067, (EffectRequestTask066 *)opaque067[index]);
}

JNIEXPORT void JNICALL Java_org_dqm_queueprobe067_QueueActivity_clear(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    effect_queue_store_clear067(&worker067->pending);
}

JNIEXPORT jint JNICALL Java_org_dqm_queueprobe067_QueueActivity_destroy(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    effect_queue_manager_destroy067(manager067);
    if (effect_queue_android_live_handles067() != 0 || queue_fixture067.creates != 1
        || queue_fixture067.joins != 1 || queue_fixture067.closes != 1 || queue_fixture067.exited != 1)
        return -1;
    return 0;
}

JNIEXPORT jintArray JNICALL Java_org_dqm_queueprobe067_QueueActivity_layout(JNIEnv *env, jclass type)
{
    (void)type;
    jint values[128];
    unsigned int count = 0;
    for (unsigned int index = 0; index < sizeof(effect_graph_fixture_layout065) / 4; ++index)
        values[count++] = (jint)effect_graph_fixture_layout065[index];
    for (unsigned int index = 0; index < sizeof(effect_queue_layout067) / 4; ++index)
        values[count++] = (jint)effect_queue_layout067[index];
    for (unsigned int index = 0; index < sizeof(effect_queue_fixture_layout067) / 4; ++index)
        values[count++] = (jint)effect_queue_fixture_layout067[index];
    jintArray result = (*env)->NewIntArray(env, count);
    (*env)->SetIntArrayRegion(env, result, 0, count, values);
    return result;
}

JNIEXPORT jlongArray JNICALL Java_org_dqm_queueprobe067_QueueActivity_addresses(JNIEnv *env, jclass type)
{
    (void)type;
    jlong values[] = {(jlong)(__UINTPTR_TYPE__)&graph_fixture065, sizeof(graph_fixture065),
        (jlong)(__UINTPTR_TYPE__)&queue_fixture067, sizeof(queue_fixture067),
        (jlong)(__UINTPTR_TYPE__)opaque067, sizeof(opaque067), (jlong)(__UINTPTR_TYPE__)&request_heap066,
        (jlong)(__UINTPTR_TYPE__)manager067, (jlong)(__UINTPTR_TYPE__)worker067,
        (jlong)(__UINTPTR_TYPE__)&request_device066, sizeof(request_device066),
        (jlong)effect_queue_android_stack067(), effect_queue_android_live_handles067()};
    jlongArray result = (*env)->NewLongArray(env, sizeof(values) / sizeof(values[0]));
    (*env)->SetLongArrayRegion(env, result, 0, sizeof(values) / sizeof(values[0]), values);
    return result;
}

JNIEXPORT jobject JNICALL Java_org_dqm_queueprobe067_QueueActivity_memory(JNIEnv *env, jclass type, jint index)
{
    (void)type;
    void *address = 0;
    jlong bytes = 0;
    if (index == 0) { address = &graph_fixture065; bytes = sizeof(graph_fixture065); }
    if (index == 1) { address = &queue_fixture067; bytes = sizeof(queue_fixture067); }
    if (index == 2) { address = opaque067; bytes = sizeof(opaque067); }
    if (index == 3) { address = &request_device066; bytes = sizeof(request_device066); }
    return address ? (*env)->NewDirectByteBuffer(env, address, bytes) : 0;
}
