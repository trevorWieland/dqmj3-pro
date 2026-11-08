#ifndef DQMJ3_QUEUE_ANDROID_API067_H
#define DQMJ3_QUEUE_ANDROID_API067_H

typedef struct QueueWinApi067 {
    void *(*create_thread)(void *, __SIZE_TYPE__, unsigned int (*)(void *), void *, unsigned int, unsigned int *);
    unsigned int (*wait)(void *, unsigned int);
    int (*close)(void *);
    void *(*create_mutex)(void *, int, const unsigned short *);
    int (*release_mutex)(void *);
    void *(*create_event)(void *, int, int, const unsigned short *);
    int (*set_event)(void *);
    int (*reset_event)(void *);
    void (*sleep)(unsigned int);
    unsigned int (*thread_id)(void);
} QueueWinApi067;

const QueueWinApi067 *effect_queue_android_api067(void);
int effect_queue_android_reset067(void);
unsigned int effect_queue_android_live_handles067(void);

#endif
