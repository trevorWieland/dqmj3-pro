#ifndef DQMJ3_PLATFORM_NETWORK_H
#define DQMJ3_PLATFORM_NETWORK_H

/*
 * Network sessions.
 *
 * This header is smaller than the subsystem it stands for. The measured image
 * contains a complete Nintendo online stack: pia, nex, NPF, http, ac, friends
 * and uds. 147 of the image's 292 SendSyncRequest entry points live in that
 * stack, more than the file and OS blocks combined. Almost all of it is
 * library code the game calls through a handful of high-level operations, and
 * none of it is reconstructed yet.
 *
 * A first port therefore has a choice, and it should make the choice
 * explicitly:
 *
 *   - keep online play: implement this header over a host networking API and
 *     supply a compatible matchmaking/session layer; that is a project of its
 *     own, not a header implementation;
 *   - drop online play: make dqm3_network_initialize return
 *     DQM3_ERR_UNSUPPORTED and make the game's online entry points fail
 *     cleanly. Offline story, battles and local play do not need this header.
 *
 * The declarations below describe the minimum a backend must provide if the
 * first choice is taken. They deliberately do not model Nintendo's matchmaking
 * protocol; a port that wants compatibility has to implement it behind these
 * functions.
 *
 * Threading: initialize and finalize are main-thread. connect, send and
 * receive may block; the game runs them on its network worker. Status and
 * identity queries are safe from any thread.
 *
 * Timing: connect and matchmaking are slow (seconds to tens of seconds) and
 * have timeouts. receive may block until data or the timeout; there is no
 * callback into game code from a network interrupt.
 */

#include "platform.h"

typedef struct Dqm3Network Dqm3Network;

enum Dqm3NetworkStatus {
    DQM3_NETWORK_OFFLINE = 0,
    DQM3_NETWORK_CONNECTING = 1,
    DQM3_NETWORK_ONLINE = 2,
    DQM3_NETWORK_ERROR = 3
};

typedef enum Dqm3NetworkStatus Dqm3NetworkStatus;

enum Dqm3NetworkFlags {
    DQM3_NETWORK_LOCAL_ONLY = 1u << 0,  /* uds-style local play               */
    DQM3_NETWORK_ASYNC = 1u << 1
};

/* The network device. Valid after dqm3_system_initialize. */
Dqm3Network *dqm3_network_device(void);

/* True when the backend has any networking implementation at all. */
Dqm3Bool dqm3_network_available(void);

/*
 * Bring the online stack up for this title. Returns DQM3_ERR_UNSUPPORTED when
 * the port has no online implementation; that is a supported outcome, not a
 * crash. Calling it twice is DQM3_ERR_BUSY.
 */
Dqm3Result dqm3_network_initialize(Dqm3U32 title_id, Dqm3U32 flags);
Dqm3Result dqm3_network_finalize(void);

/* Connect to the matchmaking service, or to a local group when LOCAL_ONLY. */
Dqm3Result dqm3_network_connect(Dqm3Time timeout);
Dqm3Result dqm3_network_disconnect(void);
Dqm3Result dqm3_network_status(Dqm3NetworkStatus *status);

/*
 * A stable player identity for this installation. The original gets it from
 * the console's account/friend service. A port that keeps online play must
 * persist one; it is not the same value as dqm3_system_unique_id.
 */
Dqm3Result dqm3_network_player_id(Dqm3U64 *player_id);

/*
 * Session operations. A session is a named group with a capacity. create
 * starts one; join enters an existing one by id; leave removes the local
 * player. A backend that cannot implement sessions returns
 * DQM3_ERR_UNSUPPORTED.
 */
Dqm3Result dqm3_network_session_create(const char *name, Dqm3U32 capacity,
    Dqm3U64 *session_id);
Dqm3Result dqm3_network_session_join(Dqm3U64 session_id, Dqm3Time timeout);
Dqm3Result dqm3_network_session_leave(void);

/*
 * Send to one participant (peer 0 is the host) or to all (peer
 * DQM3_NETWORK_BROADCAST). receive fills buffer and reports the sender. Both
 * are unreliable datagrams, matching the original's PIA transport; a backend
 * may add ordering only if the game does not depend on it. receive returns
 * DQM3_ERR_TIMEOUT when nothing arrives before the deadline.
 */
#define DQM3_NETWORK_BROADCAST 0xffffffffu

Dqm3Result dqm3_network_send(Dqm3U32 peer, const void *data, Dqm3Size bytes);
Dqm3Result dqm3_network_receive(Dqm3U32 *peer, void *buffer, Dqm3Size capacity,
    Dqm3Size *bytes, Dqm3Time timeout);

#endif
