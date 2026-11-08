#ifndef DQM_PARTICLE_VELOCITY019_H
#define DQM_PARTICLE_VELOCITY019_H

typedef unsigned int ParticleWord019;
_Static_assert(sizeof(ParticleWord019) == 4, "Particle word width differs");

#if defined(__arm__)
#define PARTICLE_CALLBACK019 __attribute__((pcs("aapcs-vfp")))
#else
#define PARTICLE_CALLBACK019
#endif

typedef struct ParticleVelocityResource019 {
    ParticleWord019 unknownBeforeRetention[192];
    float retention;
} ParticleVelocityResource019;

typedef struct ParticleVelocity019 {
    ParticleWord019 unknownBeforeVelocity[9];
    float velocity[3];
    ParticleWord019 unknownAfterVelocity[69];
    const ParticleVelocityResource019 *resource;
} ParticleVelocity019;

PARTICLE_CALLBACK019 void particle_velocity_scale019(ParticleVelocity019 *particle, float step);

#endif
