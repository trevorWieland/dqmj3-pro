#include "particle_velocity.h"

#pragma STDC FP_CONTRACT OFF

PARTICLE_CALLBACK019 void particle_velocity_scale019(ParticleVelocity019 *particle, float step) {
    float scale = 1.0f - (1.0f - particle->resource->retention) * step;
    particle->velocity[0] *= scale;
    particle->velocity[1] *= scale;
    particle->velocity[2] *= scale;
}
