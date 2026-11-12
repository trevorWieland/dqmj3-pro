#ifndef DQMJ3_PLATFORM_AUDIO_H
#define DQMJ3_PLATFORM_AUDIO_H

/*
 * Audio: the DSP and CSND boundary.
 *
 * The original has two audio paths. The CSND block plays hardware voices from
 * a wave buffer: sound effects, music streams and the simple mixer the field
 * engine uses. The DSP block runs Nintendo's firmware, decodes DSP-ADPCM and
 * mixes codec output; the game talks to it through a command buffer. Both are
 * asynchronous: the CPU queues a command, the audio hardware consumes it
 * later, and a stop does not take effect until the next audio frame.
 *
 * The interface models the hardware's observable behaviour, not either
 * transport. A backend may mix on the CPU, use ALSA/wasapi/XAudio2, or feed a
 * real DSP. The contract fixes:
 *
 *   - one voice is one monophonic source with a volume, pan, playback rate and
 *     optional loop;
 *   - a wave is immutable sample data with a format, channel count and rate;
 *   - sample rates other than the device rate are resampled by the backend;
 *   - a voice that is stopped is silent from the next audio frame, and its
 *     channel may be reused after that;
 *   - volume is linear 0.0..1.0, pan is -1.0 (left) .. +1.0 (right), rate is
 *     a multiplier where 1.0 is the wave's own rate.
 *
 * The original's DSP commands count in 32-bit words and its audio frames are
 * 1/60 second, but the game does not need to know either number. A port should
 * implement the functions below against its own mixer.
 *
 * Threading: every function may be called from any thread. Voice state is
 * applied in command order; a backend may coalesce redundant commands. The
 * game may not call audio functions from inside a graphics callback that holds
 * the device lock, because a backend may take the same lock.
 *
 * Timing: play/stop/set are non-blocking and take effect within one audio
 * frame (about 16 ms on the original). Loading a wave may block on file I/O;
 * the engine does that on its loading worker. No audio function waits for a
 * vertical blank.
 */

#include "platform.h"

typedef struct Dqm3Audio Dqm3Audio;
typedef struct Dqm3Wave Dqm3Wave;
typedef struct Dqm3Voice Dqm3Voice;

enum Dqm3AudioFormat {
    DQM3_AUDIO_PCM8 = 0,
    DQM3_AUDIO_PCM16 = 1,
    DQM3_AUDIO_ADPCM = 2,
    DQM3_AUDIO_DSP_ADPCM = 3
};

typedef enum Dqm3AudioFormat Dqm3AudioFormat;

enum Dqm3AudioFlags {
    DQM3_AUDIO_LOOP = 1u << 0,
    DQM3_AUDIO_STEREO = 1u << 1
};

typedef struct Dqm3WaveInfo {
    Dqm3AudioFormat format;
    Dqm3U32 sample_rate;
    Dqm3U32 channels;       /* 1 or 2                                       */
    Dqm3U32 loop_start;     /* sample index; ignored unless DQM3_AUDIO_LOOP */
    Dqm3U32 loop_end;
} Dqm3WaveInfo;

enum Dqm3AudioBus {
    DQM3_AUDIO_BUS_EFFECTS = 0,
    DQM3_AUDIO_BUS_MUSIC = 1,
    DQM3_AUDIO_BUS_VOICE = 2,
    DQM3_AUDIO_BUS_COUNT = 3
};

typedef enum Dqm3AudioBus Dqm3AudioBus;

/* The audio device. Valid after dqm3_system_initialize. */
Dqm3Audio *dqm3_audio_device(void);

/* Hardware capabilities. channel_count is the number of simultaneously
 * mixable voices the backend offers; the original's CSND has 32. */
Dqm3U32 dqm3_audio_channel_count(void);
Dqm3U32 dqm3_audio_sample_rate(void);

/* Per-bus and master gain, linear. Out-of-range values are clamped. */
Dqm3Result dqm3_audio_set_master_volume(float volume);
Dqm3Result dqm3_audio_set_bus_volume(Dqm3AudioBus bus, float volume);

/*
 * Create a wave from caller-owned or copied sample data. If copy is true the
 * backend copies bytes and the caller may free its buffer; if false the data
 * must remain valid until the wave is destroyed. data for DSP-ADPCM is the
 * encoded stream including its per-channel headers, as the original stores it.
 */
Dqm3Result dqm3_audio_wave_create(const Dqm3WaveInfo *info, const void *data,
    Dqm3Size bytes, Dqm3Bool copy, Dqm3Wave **wave);
Dqm3Result dqm3_audio_wave_destroy(Dqm3Wave *wave);

/*
 * Acquire a voice. The backend picks a free channel; if none is free it
 * returns DQM3_ERR_BUSY (the game's own voice table then decides what to
 * steal). A voice may be reused after stop; release returns the channel.
 */
Dqm3Result dqm3_audio_voice_acquire(Dqm3AudioBus bus, Dqm3Voice **voice);
Dqm3Result dqm3_audio_voice_release(Dqm3Voice *voice);

/* Start or restart the wave with the given parameters. */
Dqm3Result dqm3_audio_voice_play(Dqm3Voice *voice, Dqm3Wave *wave, float volume,
    float pan, float rate, Dqm3U32 flags);

/* Change a playing voice. A stopped voice ignores these. */
Dqm3Result dqm3_audio_voice_set_volume(Dqm3Voice *voice, float volume);
Dqm3Result dqm3_audio_voice_set_pan(Dqm3Voice *voice, float pan);
Dqm3Result dqm3_audio_voice_set_rate(Dqm3Voice *voice, float rate);
Dqm3Result dqm3_audio_voice_set_loop(Dqm3Voice *voice, Dqm3Bool loop);

/* Stop playback. The channel stays owned until release. */
Dqm3Result dqm3_audio_voice_stop(Dqm3Voice *voice);

/*
 * True while the voice is producing samples. The original's busy check is
 * what the script binding IsWaitEnd_ reads; a backend may report false one
 * frame after the wave ends.
 */
Dqm3Result dqm3_audio_voice_active(Dqm3Voice *voice, Dqm3Bool *active);

/*
 * Load and decode the next block of a streaming wave. For backends that mix
 * CPU-side this is how a streamed music file feeds its voice; a backend with
 * a hardware streamer may ignore it. buffer receives interleaved PCM16 and
 * *frames the number of frames written.
 */
Dqm3Result dqm3_audio_voice_stream(Dqm3Voice *voice, void *buffer,
    Dqm3U32 buffer_frames, Dqm3U32 *frames);

/* Push any queued commands to the device and wait for it to consume them. */
Dqm3Result dqm3_audio_flush(void);

#endif
