#include "particle_velocity.h"

#pragma STDC FP_CONTRACT OFF

PARTICLE_CALLBACK019 void particle_velocity_scale019(ParticleVelocity019 *particle, float step) {
    float retention = particle->resource->retention;
    float scale = retention + (1.0f - retention) * (1.0f - step);
    particle->velocity[0] *= scale;
    particle->velocity[1] *= scale;
}
